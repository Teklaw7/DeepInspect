#ifndef INSPECTPAGE_HPP
#define INSPECTPAGE_HPP

#include <QWidget>

namespace Ui
{
    class InspectPage;
}

class InspectPage : public QWidget
{
    Q_OBJECT

public:
    explicit InspectPage(QWidget *parent = nullptr);
    ~InspectPage();

private:
    Ui::InspectPage *m_ui;
};

#endif // INSPECTPAGE_HPP
