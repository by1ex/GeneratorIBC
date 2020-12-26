#include "ticketwindow.h"
#include "ui_ticketwindow.h"

TicketWindow::TicketWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicketWindow)
{
    ui->setupUi(this);
    setFixedSize(this->width(), this->height());
    ui->editlabel->setStyleSheet("color: rgb(65, 146, 255)");
    ui->createlabel->setStyleSheet("color: rgb(65, 146, 255)");
}

TicketWindow::~TicketWindow()
{
    delete ui;
}
