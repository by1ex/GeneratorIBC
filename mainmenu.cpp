#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    setFixedSize(this->width(), this->height());

    tickWnd = new TicketWindow();
    tstWnd = new TestWindow();
    connect(ui->ticketButton, SIGNAL(clicked()), this, SLOT(PushBtnTicket()));
    connect(ui->testButton, SIGNAL(clicked()), this, SLOT(PushBtnTest()));
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::PushBtnTicket()
{
    tickWnd->show();
    this->close();
}


void MainMenu::PushBtnTest()
{
    tstWnd->show();
    this->close();
}

