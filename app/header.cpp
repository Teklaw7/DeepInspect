// filepath: /home/timothee/Documents/Projects/DeepInspect/app/header.cpp
#include "header.hpp"
#include <QMessageBox>

Header::Header(QWidget *parent) : QWidget(parent), id(0) {
    // Constructor implementation
}

Header::~Header() {
    // Destructor implementation
}

void Header::displayMessage() const {
    QMessageBox::information(nullptr, "Header Message", "This is a message from the Header class.");
}
