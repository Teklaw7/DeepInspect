#include "header.hpp"
#include "ui_header.h"

Header::Header(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::Header)
{
    m_ui->setupUi(this);
}

Header::~Header()
{
    delete m_ui;
}
