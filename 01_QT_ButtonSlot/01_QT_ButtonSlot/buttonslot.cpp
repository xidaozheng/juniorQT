#include "buttonslot.h"
#include "QPushButton"

ButtonSlot::ButtonSlot(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *btn = new QPushButton;

    setWindowTitle("ButtonSlot");
//    resize(600, 400);
    setFixedSize(600, 400);

    btn->setParent(this);

    btn->setText("Close");
    btn->move(260, 180);

    connect(btn, &QPushButton::clicked, this, &ButtonSlot::close);

    btn->show();
}

ButtonSlot::~ButtonSlot()
{

}
