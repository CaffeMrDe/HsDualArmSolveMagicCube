#ifndef HSMAINWINDOW_H
#define HSMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class hsMainWindow;
}

class hsMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit hsMainWindow(QWidget *parent = 0);
    ~hsMainWindow();

private:
    Ui::hsMainWindow *ui;
};

#endif // HSMAINWINDOW_H
