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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QToolButton *toolButton;
    QGroupBox *groupBox_sex;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_mam;
    QRadioButton *radioButton_women;
    QGroupBox *groupBox_Bool;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_OK;
    QRadioButton *radioButton_Cls;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_best;
    QCheckBox *checkBox_better;
    QCheckBox *checkBox_good;
    QListWidget *listWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(746, 494);
        toolButton = new QToolButton(Widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(30, 30, 61, 51));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QTIcon.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(64, 64));
        toolButton->setAutoRaise(true);
        groupBox_sex = new QGroupBox(Widget);
        groupBox_sex->setObjectName(QStringLiteral("groupBox_sex"));
        groupBox_sex->setGeometry(QRect(20, 130, 99, 96));
        verticalLayout = new QVBoxLayout(groupBox_sex);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton_mam = new QRadioButton(groupBox_sex);
        radioButton_mam->setObjectName(QStringLiteral("radioButton_mam"));

        verticalLayout->addWidget(radioButton_mam);

        radioButton_women = new QRadioButton(groupBox_sex);
        radioButton_women->setObjectName(QStringLiteral("radioButton_women"));

        verticalLayout->addWidget(radioButton_women);

        groupBox_Bool = new QGroupBox(Widget);
        groupBox_Bool->setObjectName(QStringLiteral("groupBox_Bool"));
        groupBox_Bool->setGeometry(QRect(130, 130, 87, 96));
        verticalLayout_2 = new QVBoxLayout(groupBox_Bool);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton_OK = new QRadioButton(groupBox_Bool);
        radioButton_OK->setObjectName(QStringLiteral("radioButton_OK"));

        verticalLayout_2->addWidget(radioButton_OK);

        radioButton_Cls = new QRadioButton(groupBox_Bool);
        radioButton_Cls->setObjectName(QStringLiteral("radioButton_Cls"));

        verticalLayout_2->addWidget(radioButton_Cls);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 230, 93, 125));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        checkBox_best = new QCheckBox(groupBox);
        checkBox_best->setObjectName(QStringLiteral("checkBox_best"));

        verticalLayout_3->addWidget(checkBox_best);

        checkBox_better = new QCheckBox(groupBox);
        checkBox_better->setObjectName(QStringLiteral("checkBox_better"));
        checkBox_better->setTristate(true);

        verticalLayout_3->addWidget(checkBox_better);

        checkBox_good = new QCheckBox(groupBox);
        checkBox_good->setObjectName(QStringLiteral("checkBox_good"));

        verticalLayout_3->addWidget(checkBox_good);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(280, 30, 256, 192));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        toolButton->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        groupBox_sex->setTitle(QApplication::translate("Widget", "sex", Q_NULLPTR));
        radioButton_mam->setText(QApplication::translate("Widget", "man", Q_NULLPTR));
        radioButton_women->setText(QApplication::translate("Widget", "woman", Q_NULLPTR));
        groupBox_Bool->setTitle(QApplication::translate("Widget", "Bool", Q_NULLPTR));
        radioButton_OK->setText(QApplication::translate("Widget", "OK", Q_NULLPTR));
        radioButton_Cls->setText(QApplication::translate("Widget", "Close", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "estimate", Q_NULLPTR));
        checkBox_best->setText(QApplication::translate("Widget", "best", Q_NULLPTR));
        checkBox_better->setText(QApplication::translate("Widget", "better", Q_NULLPTR));
        checkBox_good->setText(QApplication::translate("Widget", "good", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
