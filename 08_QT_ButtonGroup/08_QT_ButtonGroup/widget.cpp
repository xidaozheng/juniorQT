#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QListWidgetItem>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->radioButton_mam->setChecked(true);
    connect(ui->radioButton_women, &QRadioButton::clicked, [=](){
        qDebug() << "select women";
    });

    connect(ui->checkBox_better, &QCheckBox::stateChanged, [=](int state){
        qDebug() << state;
    });

//    QListWidgetItem *item = new QListWidgetItem("no pain, no gain");
//    ui->listWidget->addItem(item);

//    item->setTextAlignment(Qt::AlignHCenter);
    QStringList list;
    list << "锄禾日当午" << "汗滴禾下土" << "谁知盘中餐" << "粒粒皆辛苦";
    ui->listWidget->addItems(list);
}

Widget::~Widget()
{
    delete ui;
}
