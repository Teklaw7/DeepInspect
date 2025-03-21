#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "homepage.hpp"
#include "inspectpage.hpp"

#include <QPushButton>
#include <QStackedWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
     , m_ui(new Ui::MainWindow), m_homePage(new HomePage(this)), m_inspectPage(new InspectPage(this))
{
    m_ui->setupUi(this);
    m_ui->stackedWidget->addWidget(m_homePage);
    m_ui->stackedWidget->addWidget(m_inspectPage);
    connect(m_ui->inspectImagesPushButton, &QPushButton::clicked, this, &MainWindow::showInspectPage);
    connect(m_ui->homePushButton, &QPushButton::clicked, this, &MainWindow::showHomePage);
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
