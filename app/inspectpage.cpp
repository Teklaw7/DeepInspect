#include "inspectpage.hpp"
#include "ui_inspectpage.h"

InspectPage::InspectPage(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::InspectPage)
{
    m_ui->setupUi(this);
}

InspectPage::~InspectPage()
{
    delete m_ui;
}