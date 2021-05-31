#include "buttonslot.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ButtonSlot w;
    w.show();

    return a.exec();
}
