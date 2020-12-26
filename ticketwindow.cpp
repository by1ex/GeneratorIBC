#include "ticketwindow.h"
#include "ui_ticketwindow.h"

TicketWindow::TicketWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicketWindow)
{
    ui->setupUi(this);
    setFixedSize(this->width(), this->height());
}

TicketWindow::~TicketWindow()
{
    delete ui;
}
