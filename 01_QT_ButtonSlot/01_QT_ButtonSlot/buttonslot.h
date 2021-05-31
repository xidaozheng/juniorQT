#ifndef BUTTONSLOT_H
#define BUTTONSLOT_H

#include <QWidget>

class ButtonSlot : public QWidget
{
    Q_OBJECT

public:
    ButtonSlot(QWidget *parent = 0);
    ~ButtonSlot();
};

#endif // BUTTONSLOT_H
