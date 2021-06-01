#include "mainwindow.h"
#include <QMenuBar>
#include <QToolBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    resize(600, 400);

/***********************************************/
    QMenuBar *bar = menuBar();
    setMenuBar(bar);

    QMenu *fileMenu = bar->addMenu("File");
    fileMenu->addAction("New");
    fileMenu->addAction("Open");
    fileMenu->addAction("Recent file");
    fileMenu->addSeparator();
    fileMenu->addAction("save");


    QMenu *EditMenu = bar->addMenu("Edit");
    EditMenu->addAction("undo");
    EditMenu->addAction("redo");
    fileMenu->addSeparator();
    EditMenu->addAction("cut");
    EditMenu->addAction("copy");
    EditMenu->addAction("paste");


    QMenu *BuildMenu = bar->addMenu("Build");
    BuildMenu->addAction("build all project");
    BuildMenu->addAction("build current project");
    BuildMenu->addAction("qmake");
    fileMenu->addSeparator();
    BuildMenu->addAction("Run");

    QMenu *DebugMenu = bar->addMenu("Help");
    DebugMenu->addAction("directory");
    DebugMenu->addAction("index");
    fileMenu->addSeparator();
    DebugMenu->addAction("F1");
    DebugMenu->addAction("about QT Creator");
/***********************************************/

    QToolBar *toolBar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,toolBar);

    toolBar->setFloatable(false);
    toolBar->setMovable(false);

    toolBar->addAction("Welcome");
    toolBar->addAction("Edit");
    toolBar->addAction("Design");
    toolBar->addAction("Debug");
    toolBar->addAction("Project");
    toolBar->addAction("Help");
}

MainWindow::~MainWindow()
{
}
