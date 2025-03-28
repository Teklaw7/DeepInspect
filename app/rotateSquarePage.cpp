#include "rotateSquarePage.hpp"
#include "ui_rotateSquarePage.h"

#include <QPainter>
#include <QRandomGenerator>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

RotateSquarePage::RotateSquarePage(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::RotateSquarePage)
{
    m_ui->setupUi(this);
    QGraphicsScene *scene = new QGraphicsScene(this);
    m_ui->formGraphicsView->setScene(scene);
    scene->setBackgroundBrush(Qt::white);
    connect(m_ui->createSquareRotationPushButton, &QPushButton::clicked, this, &RotateSquarePage::createAndRotateSquare);
    connect(m_ui->findRotationPushButton, &QPushButton::clicked, this, &RotateSquarePage::findRotationFom);
}

RotateSquarePage::~RotateSquarePage()
{
    delete m_ui;
}

void RotateSquarePage::createAndRotateSquare()
{
    // Create a QGraphicsScene and set it to the QGraphicsView
    QGraphicsScene *scene = m_ui->formGraphicsView->scene();
    scene->clear();

    const int squareSize = 100;

    // Create a square centered at (0, 0)
    QGraphicsRectItem *square = scene->addRect(-squareSize / 2, -squareSize / 2, squareSize, squareSize);

    // Generate a random rotation angle between 0 and 90 degrees
    int rotationAngle = QRandomGenerator::global()->bounded(90);

    // Apply the rotation to the square
    square->setTransformOriginPoint(0, 0);
    square->setRotation(rotationAngle);

    m_ui->groundTruthLineEdit->setText(QString("Ground truth: %1 °").arg(rotationAngle));
}

void RotateSquarePage::findRotationFom()
{
    QGraphicsScene *scene = m_ui->formGraphicsView->scene();
    if (!scene) return;

    QList<QGraphicsItem *> items = scene->items();
    if (items.isEmpty()) return;

    QGraphicsRectItem *square = dynamic_cast<QGraphicsRectItem *>(items.first());
    if (!square) return;

    // Retrieve the rotation angle of the square
    qreal rotationAngle = square->rotation();

    m_ui->predictionLineEdit->setText(QString("Estimated rotation: %1 °").arg(rotationAngle));
}
