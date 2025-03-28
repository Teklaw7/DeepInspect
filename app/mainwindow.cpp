#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "homepage.hpp"
#include "inspectpage.hpp"
#include "rotateSquarePage.hpp"

#include <QPushButton>
#include <QStackedWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
     , m_ui(new Ui::MainWindow), m_homePage(new HomePage(this)), m_inspectPage(new InspectPage(this)), m_rotateSquarePage(new RotateSquarePage(this))
{
    m_ui->setupUi(this);
    m_ui->stackedWidget->addWidget(m_homePage);
    m_ui->stackedWidget->addWidget(m_inspectPage);
    m_ui->stackedWidget->addWidget(m_rotateSquarePage);
    connect(m_ui->inspectImagesPushButton, &QPushButton::clicked, this, &MainWindow::showInspectPage);
    connect(m_ui->homePushButton, &QPushButton::clicked, this, &MainWindow::showHomePage);
    connect(m_ui->rotateFormPushButton, &QPushButton::clicked, this, &MainWindow::showRotateSquarePage);
}

MainWindow::~MainWindow()
{
    delete m_ui;
}

void MainWindow::showInspectPage()
{
    m_ui->stackedWidget->setCurrentWidget(m_inspectPage);
}

void MainWindow::showHomePage()
{
    m_ui->stackedWidget->setCurrentWidget(m_homePage);
}

void MainWindow::showRotateSquarePage()
{
    m_ui->stackedWidget->setCurrentWidget(m_rotateSquarePage);
}
