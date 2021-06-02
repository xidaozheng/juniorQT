#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //modal mode
    connect(ui->actionnew, &QAction::triggered, [=](){
        QDialog log(this);

        log.setWindowTitle("New");
        log.resize(200, 100);
        log.exec();
    });

    //modeless mode
    connect(ui->actionopen, &QAction::triggered, [=](){
        QDialog *log = new QDialog(this);

        log->setWindowTitle("Open");
        log->resize(200, 100);
        log->show();

        log->setAttribute(Qt::WA_DeleteOnClose);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
