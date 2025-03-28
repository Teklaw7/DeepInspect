#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class HomePage;
class InspectPage;
class RotateSquarePage;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *m_ui;
    HomePage *m_homePage;
    InspectPage *m_inspectPage;
    RotateSquarePage *m_rotateSquarePage;
    
private slots:
    void showInspectPage();

    void showHomePage();

    void showRotateSquarePage();
};

#endif // MAINWINDOW_HPP
