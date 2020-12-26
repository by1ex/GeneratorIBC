#include "testwindow.h"
#include "ui_testwindow.h"

TestWindow::TestWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestWindow)
{
    ui->setupUi(this);
    setFixedSize(this->width(), this->height());
}

TestWindow::~TestWindow()
{
    delete ui;
}
