#include "hsmainwindow.h"
#include "ui_hsmainwindow.h"

hsMainWindow::hsMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hsMainWindow)
{
    ui->setupUi(this);
}

hsMainWindow::~hsMainWindow()
{
    delete ui;
}
