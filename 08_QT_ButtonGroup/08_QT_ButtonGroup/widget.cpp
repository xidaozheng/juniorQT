#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QListWidgetItem>
#include <QTreeWidgetItem>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QMovie>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    {
        ui->radioButton_man->setChecked(true);      //默认选择性别男
        connect(ui->radioButton_women, &QRadioButton::clicked, [=](){
            qDebug() << "选择了女性";
        });

        ui->radioButton_single->setChecked(true);   //默认选择单身
        connect(ui->radioButton_marry, &QRadioButton::clicked, [=](){
            qDebug() << "选择了结婚";
        });
    }

    {
        connect(ui->checkBox_verybad, &QCheckBox::stateChanged, [=](int state){
            qDebug() << state;
        });
    }

    {
        QStringList list;
        list << "有心人" << "天不负" << "三千越甲可吞吴";
        ui->listWidget->addItems(list);
    }

    {
        ui->treeWidget->setHeaderLabels(QStringList() << "英雄" << "英雄介绍");   //设置头部标签

        QTreeWidgetItem *liItem = new QTreeWidgetItem(QStringList()<<"力量");
        QTreeWidgetItem *minItem = new QTreeWidgetItem(QStringList() << "敏捷");
        QTreeWidgetItem *zhiItem = new QTreeWidgetItem(QStringList() << "智力");

        QList<QTreeWidgetItem *> list = {liItem, minItem, zhiItem};
        ui->treeWidget->addTopLevelItems(list);

        QStringList hero1, hero2;
        QStringList hero3, hero4;
        QStringList hero5, hero6;

        hero1 << "刚被猪" << "前排坦克，能在吸收伤害的同时造成可观的范围输出";
        hero2 << "船长" << "前排坦克，能肉能输出能控场的全能英雄";
        hero3 << "月骑" << "中排物理输出，可以使用分裂利刃攻击多个目标";
        hero4 << "小鱼人" << "前排战士，擅长偷取敌人的属性来增强自身战力";
        hero5 << "死灵法师" << "前排法师坦克，魔法抗性较高，拥有治疗技能";
        hero6 << "巫医" << "后排辅助法师，可以使用奇特的巫术诅咒敌人与治疗队友";

        QTreeWidgetItem *li;
        li = new QTreeWidgetItem(hero1);
        liItem->addChild(li);
        li = new QTreeWidgetItem(hero2);
        liItem->addChild(li);

        QTreeWidgetItem *min;
        min = new QTreeWidgetItem(hero3);
        minItem->addChild(min);
        min = new QTreeWidgetItem(hero4);
        minItem->addChild(min);

        QTreeWidgetItem *zhi;
        zhi = new QTreeWidgetItem(hero3);
        zhiItem->addChild(zhi);
        zhi = new QTreeWidgetItem(hero4);
        zhiItem->addChild(zhi);
    }

    {
        ui->tableWidget->setColumnCount(3);
        ui->tableWidget->setRowCount(5);
        //设置水平表头
        ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "姓名" << "性别" << "年龄");

        QStringList nameList;
        QStringList sexList;
        QStringList ageList;

        nameList << "亚瑟" << "妲己" << "安琪拉" << "赵云" << "孙悟空";
        sexList  << "男" << "女" << "女" << "男" << "中立";
        ageList  << "18" << "19" << "20" << "21" << "23";
        for(int i=0; i<5; i++)
        {
            int colum = 0;
            ui->tableWidget->setItem(i, colum++, new QTableWidgetItem(nameList[i]));
            ui->tableWidget->setItem(i, colum++, new QTableWidgetItem(sexList[i]));
            ui->tableWidget->setItem(i, colum++, new QTableWidgetItem(ageList[i]));
        }
    }

    {
        ui->label_pic->setPixmap(QPixmap(":/sikao.jpg"));
        ui->label_pic->setScaledContents(true);
    }

    {
        QMovie *movie = new QMovie(":/movie.gif");
        ui->label_movie->setMovie(movie);
        ui->label_movie->setScaledContents(true);
        movie->start();

    }
}

Widget::~Widget()
{
    delete ui;
}
