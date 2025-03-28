#ifndef ROTATESQUAREPAGE_HPP
#define ROTATESQUAREPAGE_HPP

#include <QWidget>

namespace Ui
{
    class RotateSquarePage;
}

class RotateSquarePage : public QWidget
{
    Q_OBJECT

public:
    explicit RotateSquarePage(QWidget *parent = nullptr);
    ~RotateSquarePage();

private:
    Ui::RotateSquarePage *m_ui;

private slots:
    void createAndRotateSquare();

    void findRotationFom();
};

#endif // ROTATESQUAREPAGE_HPP
