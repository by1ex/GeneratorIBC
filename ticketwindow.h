#ifndef TICKETWINDOW_H
#define TICKETWINDOW_H

#include <QMainWindow>

namespace Ui {
class TicketWindow;
}

class TicketWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TicketWindow(QWidget *parent = nullptr);
    ~TicketWindow();

private:
    Ui::TicketWindow *ui;
};

#endif // TICKETWINDOW_H
