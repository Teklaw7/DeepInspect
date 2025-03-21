#ifndef HOMEPAGE_HPP
#define HOMEPAGE_HPP

#include <QWidget>

namespace Ui
{
    class HomePage;
}

class HomePage : public QWidget
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);
    ~HomePage();

private:
    Ui::HomePage *m_ui;
};

#endif // HOMEPAGE_HPP
