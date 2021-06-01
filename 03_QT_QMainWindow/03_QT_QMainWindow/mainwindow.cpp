#include "mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    resize(600, 400);

/***********************************************/
/*****************==MenuBar==*******************/
/***********************************************/
    {
        QMenuBar *bar = menuBar();
        setMenuBar(bar);

        QMenu *fileMenu = bar->addMenu("File");
        fileMenu->addAction("New");
        fileMenu->addAction("Open");
        fileMenu->addSeparator();
        fileMenu->addAction("Save");

        QMenu *editMenu = bar->addMenu("Edit");
        editMenu->addAction("undo");
        editMenu->addAction("redo");
        editMenu->addAction("Find");
    }

/***********************************************/
/*****************==ToolBar==*******************/
/***********************************************/
    {
        QToolBar *bar = new QToolBar;
        addToolBar(Qt::LeftToolBarArea, bar);

        bar->addAction("Welcome");
        bar->addAction("Edit");
        bar->addAction("Design");
        bar->addSeparator();
        bar->addAction("Debug");

        bar->setFloatable(false);
        bar->setMovable(false);
    }

/***********************************************/
/*****************==StatusBar==*****************/
/***********************************************/
    {
        QStatusBar *bar = statusBar();
        setStatusBar(bar);

        QLabel *lab1 = new QLabel("Right", this);
        bar->addWidget(lab1);

        QLabel *lab2 = new QLabel("Left", this);
        bar->addPermanentWidget(lab2);
    }


/***********************************************/
/*****************==DockBar==*******************/
/***********************************************/
    {
        QDockWidget *dock = new QDockWidget("Dock", this);
        addDockWidget(Qt::TopDockWidgetArea, dock);
        dock->setAllowedAreas(Qt::TopDockWidgetArea);

        QTextEdit *edit = new QTextEdit(this);
        setCentralWidget(edit);
    }
}

MainWindow::~MainWindow()
{
}
