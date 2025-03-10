#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "header.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_ui(new Ui::MainWindow), m_header(new Header(this))
{
    m_ui->setupUi(this);
    m_ui->horizontalLayout->addWidget(m_header);
}

MainWindow::~MainWindow()
{
    delete m_ui;
}
