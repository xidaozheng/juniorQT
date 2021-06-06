#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPen>
#include <QBrush>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, [=](){
        posX += 20;
       update();
    });
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen     pen;
    QBrush   brush(QColor(255, 0, 0));

    pen.setColor(QColor(0, 255, 0));
    pen.setWidth(3);
    pen.setStyle(Qt::DotLine);

    brush.setStyle(Qt::Dense2Pattern);

    painter.setPen(pen);
    painter.setBrush(brush);

    painter.drawEllipse(QPoint(50, 50), 30, 30);

    if(posX > this->width())
        posX = 0;
    painter.drawPixmap(posX, 100, 200, 200, QPixmap(":/sikao.jpg"));
}

Widget::~Widget()
{
    delete ui;
}
