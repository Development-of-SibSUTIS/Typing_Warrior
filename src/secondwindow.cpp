#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QMainWindow(parent),
    secondwindow(new Ui::SecondWindow)
{
    secondwindow->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete secondwindow;
}
