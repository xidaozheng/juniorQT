#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton_get, &QPushButton::clicked, [=](){
       qDebug() << ui->widget->getValue();
    });

    connect(ui->pushButton_set, &QPushButton::clicked, [=](){
        ui->widget->setValue(50);
    });
}

Widget::~Widget()
{
    delete ui;
}
