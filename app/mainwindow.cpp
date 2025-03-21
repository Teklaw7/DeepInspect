#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "header.hpp"
#include "homepage.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_ui(new Ui::MainWindow), m_header(new Header(this)), m_homepage(new HomePage(this))
{
    m_ui->setupUi(this);
    m_ui->horizontalLayout->addWidget(m_header);
    m_ui->horizontalLayout->addWidget(m_homepage);
}

MainWindow::~MainWindow()
{
    delete m_ui;
}
