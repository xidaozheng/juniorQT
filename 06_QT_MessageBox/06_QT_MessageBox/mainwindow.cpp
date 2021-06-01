#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QMessageBox::about(this, "about", "this is about");
    QMessageBox::aboutQt(this);
    QMessageBox::critical(this, "critical", "this is critical");
    QMessageBox::information(this, "infomation", "this is infomation");
}

MainWindow::~MainWindow()
{
    delete ui;
}
