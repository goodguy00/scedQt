#include "scedqt.h"
#include "ui_scedqt.h"

scedQt::scedQt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::scedQt)
{
    ui->setupUi(this);
}

scedQt::~scedQt()
{
    delete ui;
}
