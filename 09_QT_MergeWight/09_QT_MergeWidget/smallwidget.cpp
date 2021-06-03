#include "smallwidget.h"
#include "ui_smallwidget.h"

SmallWidget::SmallWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SmallWidget)
{
    ui->setupUi(this);

    void (QSpinBox:: *Changed)(int) = &QSpinBox::valueChanged;
    connect(ui->spinBox, Changed, ui->horizontalSlider, &QSlider::setValue);

    connect(ui->horizontalSlider, &QSlider::valueChanged, ui->spinBox, &QSpinBox::setValue);
}

void SmallWidget::setValue(int val)
{
    ui->horizontalSlider->setValue(val);
}

int  SmallWidget::getValue()
{
    return ui->horizontalSlider->value();
}

SmallWidget::~SmallWidget()
{
    delete ui;
}
