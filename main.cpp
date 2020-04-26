#include "hsmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    hsMainWindow w;
    w.show();

    return a.exec();
}
