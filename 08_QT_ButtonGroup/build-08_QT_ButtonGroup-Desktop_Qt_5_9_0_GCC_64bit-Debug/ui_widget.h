/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QToolButton *toolButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_man;
    QRadioButton *radioButton_women;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_marry;
    QRadioButton *radioButton_single;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_best;
    QCheckBox *checkBox_better;
    QCheckBox *checkBox_bad;
    QCheckBox *checkBox_verybad;
    QListWidget *listWidget;
    QTreeWidget *treeWidget;
    QTableWidget *tableWidget;
    QLabel *label_pic;
    QLabel *label_movie;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(930, 627);
        toolButton = new QToolButton(Widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(48, 30, 48, 48));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QTIcon.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(48, 48));
        toolButton->setAutoRaise(true);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 100, 64, 108));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton_man = new QRadioButton(groupBox);
        radioButton_man->setObjectName(QStringLiteral("radioButton_man"));

        verticalLayout->addWidget(radioButton_man);

        radioButton_women = new QRadioButton(groupBox);
        radioButton_women->setObjectName(QStringLiteral("radioButton_women"));

        verticalLayout->addWidget(radioButton_women);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 100, 79, 108));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton_marry = new QRadioButton(groupBox_2);
        radioButton_marry->setObjectName(QStringLiteral("radioButton_marry"));

        verticalLayout_2->addWidget(radioButton_marry);

        radioButton_single = new QRadioButton(groupBox_2);
        radioButton_single->setObjectName(QStringLiteral("radioButton_single"));

        verticalLayout_2->addWidget(radioButton_single);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 210, 109, 178));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        checkBox_best = new QCheckBox(groupBox_3);
        checkBox_best->setObjectName(QStringLiteral("checkBox_best"));

        verticalLayout_3->addWidget(checkBox_best);

        checkBox_better = new QCheckBox(groupBox_3);
        checkBox_better->setObjectName(QStringLiteral("checkBox_better"));

        verticalLayout_3->addWidget(checkBox_better);

        checkBox_bad = new QCheckBox(groupBox_3);
        checkBox_bad->setObjectName(QStringLiteral("checkBox_bad"));

        verticalLayout_3->addWidget(checkBox_bad);

        checkBox_verybad = new QCheckBox(groupBox_3);
        checkBox_verybad->setObjectName(QStringLiteral("checkBox_verybad"));
        checkBox_verybad->setTristate(true);

        verticalLayout_3->addWidget(checkBox_verybad);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(210, 10, 256, 192));
        treeWidget = new QTreeWidget(Widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 430, 501, 192));
        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(540, 370, 361, 251));
        label_pic = new QLabel(Widget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(620, 20, 231, 221));
        label_pic->setScaledContents(false);
        label_movie = new QLabel(Widget);
        label_movie->setObjectName(QStringLiteral("label_movie"));
        label_movie->setGeometry(QRect(170, 210, 341, 211));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        toolButton->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\346\200\247\345\210\253", Q_NULLPTR));
        radioButton_man->setText(QApplication::translate("Widget", "\347\224\267", Q_NULLPTR));
        radioButton_women->setText(QApplication::translate("Widget", "\345\245\263", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\251\232\345\220\246", Q_NULLPTR));
        radioButton_marry->setText(QApplication::translate("Widget", "\345\267\262\345\251\232", Q_NULLPTR));
        radioButton_single->setText(QApplication::translate("Widget", "\346\234\252\345\251\232", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "\346\273\241\346\204\217\350\260\203\346\237\245", Q_NULLPTR));
        checkBox_best->setText(QApplication::translate("Widget", "\351\235\236\345\270\270\346\273\241\346\204\217", Q_NULLPTR));
        checkBox_better->setText(QApplication::translate("Widget", "\346\273\241\346\204\217", Q_NULLPTR));
        checkBox_bad->setText(QApplication::translate("Widget", "\345\267\256", Q_NULLPTR));
        checkBox_verybad->setText(QApplication::translate("Widget", "\351\235\236\345\270\270\345\267\256", Q_NULLPTR));
        label_pic->setText(QString());
        label_movie->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
