#include "inspectpage.hpp"
#include "ui_inspectpage.h"

#include <QFileDialog>

InspectPage::InspectPage(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::InspectPage)
{
    m_ui->setupUi(this);
    connect(m_ui->browsePicturesPushButton, &QPushButton::clicked, this, &InspectPage::browsePictures);
}

InspectPage::~InspectPage()
{
    delete m_ui;
}

void InspectPage::browsePictures()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), QDir::homePath(), tr("Image Files (*.png *.jpg *.bmp)"));
    if (!fileName.isEmpty()) {
        m_ui->pictureLabel->setPixmap(QPixmap(fileName).scaled(m_ui->pictureLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
}
