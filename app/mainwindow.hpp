#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class HomePage;
class InspectPage;

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

private slots:
    void showInspectPage();

    void showHomePage();
};

#endif // MAINWINDOW_HPP
