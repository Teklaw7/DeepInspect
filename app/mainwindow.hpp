#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include "header.hpp"
#include "homepage.hpp"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow * m_ui;
    Header * m_header;
    HomePage * m_homepage;
};
#endif // MAINWINDOW_HPP
