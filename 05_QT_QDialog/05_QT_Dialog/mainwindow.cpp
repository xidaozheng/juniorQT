#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionnew, &QAction::triggered, this, [=](){
        //modal dialog
        QDialog dlg(this);
        dlg.exec();
    });

    connect(ui->actionopen, &QAction::triggered, this, [=](){
        //modeless dialog
        QDialog *dlg = new QDialog(this);
        dlg->show();
        dlg->setAttribute(Qt::WA_DeleteOnClose);

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
