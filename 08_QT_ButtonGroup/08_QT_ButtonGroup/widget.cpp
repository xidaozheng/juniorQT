#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QListWidgetItem>
#include <QTreeWidgetItem>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    {
        ui->radioButton_man->setChecked(true);
        connect(ui->radioButton_women, &QRadioButton::clicked, [=](){
            qDebug() << "选择了女性";
        });
        ui->radioButton_single->setChecked(true);   //默认选择男性
        connect(ui->radioButton_marry, &QRadioButton::clicked, [=](){
            qDebug() << "已经结婚";                   //当选择女性时，打印信息
        });
    }

    {
        connect(ui->checkBox_verybad, &QCheckBox::stateChanged/*状态变化时*/, [=](int state){
            qDebug() << state;         //states是由stateChanged传递
        });
    }

    {
        QStringList list;   //使用字符串列表
        list << "锄禾日当午" << "汗滴禾下土" << "谁知盘中餐" << "粒粒皆辛苦";
        ui->listWidget->addItems(list);
    }

    {
        QList<QString> list;
        list << "英雄" << "英雄介绍";
        ui->treeWidget->setHeaderLabels(list);  //首先设置头部标签
        //以后看到参数有QStringList，直接用左移操作符重载的方式流入字符串
        QTreeWidgetItem *liItem = new QTreeWidgetItem(QStringList() << "力量");
        QTreeWidgetItem *minItem = new QTreeWidgetItem(QStringList() << "敏捷");
        QTreeWidgetItem *zhiItem = new QTreeWidgetItem(QStringList() << "智力");

        ui->treeWidget->addTopLevelItem(liItem);    //添加条目
        ui->treeWidget->addTopLevelItem(minItem);
        ui->treeWidget->addTopLevelItem(zhiItem);


        QStringList hero1, hero2;
        QStringList hero3, hero4;
        QStringList hero5, hero6;
        hero1 << "刚被猪" << "前排坦克，能在吸收伤害的同时造成可观的范围输出";
        hero2 << "船长" << "前排坦克，能肉 能输出 能控场的全能英雄";
        hero3 << "月骑" << "中排物理输出，可以使用分裂利刃攻击多个目标";
        hero4 << "小鱼人" << "前排战士，擅长偷取敌人的属性来增强自身战力";
        hero5 << "死灵法师" << "前排法师坦克，魔法抗性较高，拥有治疗技能";
        hero6 << "巫医" << "后排辅助法师，可以使用奇特的巫术诅咒敌人与治疗队友";

        QTreeWidgetItem *l1 = new QTreeWidgetItem(hero1);
        liItem->addChild(l1);       //追加子条目
        QTreeWidgetItem *l2 = new QTreeWidgetItem(hero2);
        liItem->addChild(l2);

        QTreeWidgetItem *l3 = new QTreeWidgetItem(hero3);
        minItem->addChild(l3);
        QTreeWidgetItem *l4 = new QTreeWidgetItem(hero4);
        minItem->addChild(l4);

        QTreeWidgetItem *l5 = new QTreeWidgetItem(hero5);
        zhiItem->addChild(l5);
        QTreeWidgetItem *l6 = new QTreeWidgetItem(hero6);
        zhiItem->addChild(l6);
    }
}

Widget::~Widget()
{
    delete ui;
}
