#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QMessageBox::aboutQt(this);
    QMessageBox::critical(this, "critical", "this is critical");
    QMessageBox::information(this, "information", "this is information");

    QColor color = QColorDialog::getColor(QColor(255, 0, 0));
    qDebug() << "r=" << color.red() << " g=" << color.green() << " b=" << color.blue();

     QString fileName = QFileDialog::getOpenFileName(this, "open file", "/home/xi/juniorQT", "(*.md)");
     qDebug() << "fileName" << fileName;

     bool ok = true;
     QFont font = QFontDialog::getFont(&ok, QFont("Serif", 45, QFont::Bold, true));
     qDebug() << "font=" << font.family()
              << " size=" << font.pointSize()
              << " bold=" << font.bold()
              << " italic=" << font.italic();
}

MainWindow::~MainWindow()
{
    delete ui;
}
