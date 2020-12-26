#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include <ticketwindow.h>
#include <testwindow.h>

namespace Ui {
class MainMenu;
}

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();
private:
    Ui::MainMenu *ui;
    TicketWindow *tickWnd;
    TestWindow *tstWnd;
public slots:
    void PushBtnTicket();
    void PushBtnTest();
};

#endif // MAINMENU_H
