#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QPainter>
#include <QPen>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPixmap pixmap(300, 300);

    pixmap.fill(Qt::white);

    QPainter painter(&pixmap);
    painter.setPen(QPen(Qt::green));

    painter.drawRect(50, 50, 100, 40);



    pixmap.save("/home/xi/juniorQT/13_QT_PainterDevice/13_QT_PainterDevice/myPixMap.jpg");
}

Widget::~Widget()
{
    delete ui;
}
