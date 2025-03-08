#ifndef HEADER_HPP
#define HEADER_HPP

#include <QWidget>

class Header : public QWidget {
    Q_OBJECT

public:
    Header(QWidget *parent = nullptr);
    ~Header();

    void displayMessage() const;

private:
    int id;
};

#endif // HEADER_HPP