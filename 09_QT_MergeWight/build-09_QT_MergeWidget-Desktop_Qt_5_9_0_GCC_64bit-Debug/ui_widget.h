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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <smallwidget.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    SmallWidget *widget;
    QPushButton *btn_set;
    QPushButton *btn_get;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(464, 204);
        widget = new SmallWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 60, 301, 51));
        btn_set = new QPushButton(Widget);
        btn_set->setObjectName(QStringLiteral("btn_set"));
        btn_set->setGeometry(QRect(60, 140, 89, 25));
        btn_get = new QPushButton(Widget);
        btn_get->setObjectName(QStringLiteral("btn_get"));
        btn_get->setGeometry(QRect(220, 140, 89, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btn_set->setText(QApplication::translate("Widget", "\350\260\203\345\210\260\344\270\200\345\215\212", Q_NULLPTR));
        btn_get->setText(QApplication::translate("Widget", "\350\216\267\345\217\226\346\225\260\345\200\274", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
