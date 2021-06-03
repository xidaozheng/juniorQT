#include "mylabel.h"
#include <QDebug>
#include <QEvent>
#include <QMouseEvent>

MyLabel::MyLabel(QWidget *parent) : QLabel(parent)
{
    setMouseTracking(true); //追踪鼠标足迹
}

void MyLabel::enterEvent(QEvent *event)
{
    qDebug() << "鼠标进入了";
}

void MyLabel::leaveEvent(QEvent *event)
{
    qDebug() << "鼠标离开了";
}

//按下鼠标后移动才有效
void MyLabel::mouseMoveEvent(QMouseEvent *ev)
{
//    if(ev->buttons() & Qt::LeftButton)
    {
        QString str = QString("鼠标移动了 x=%1 y=%2").arg((ev->x())).arg(ev->y());
        qDebug() << str;
    }
}
void MyLabel::mousePressEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::LeftButton)
    {
        QString str = QString("鼠标按下了 x=%1 y=%2").arg((ev->x())).arg(ev->y());
        qDebug() << str;
    }
}
void MyLabel::mouseReleaseEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::LeftButton)
    {
        QString str = QString("鼠标松开了 x=%1 y=%2").arg((ev->x())).arg(ev->y());
        qDebug() << str;
    }
}



