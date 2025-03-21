#ifndef HEADER_HPP
#define HEADER_HPP

#include <QWidget>

namespace Ui 
{
    class Header;
}

class Header : public QWidget
{
    Q_OBJECT

public:
    explicit Header(QWidget *parent = nullptr);
    ~Header();

private:
    Ui::Header *m_ui;
};

#endif // HEADER_HPP