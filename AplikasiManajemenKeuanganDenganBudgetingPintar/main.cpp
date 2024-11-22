#include "loginwindow.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Tampilkan LoginWindow terlebih dahulu
    LoginWindow loginWindow;
    loginWindow.show();  // Tampilkan LoginWindow

    // Tunggu sampai LoginWindow ditutup dengan login berhasil
    QObject::connect(&loginWindow, &LoginWindow::loginSuccessful, [&]() {
        MainWindow w;
        w.show();  // Tampilkan MainWindow
    });

    return a.exec();  // Mulai event loop Qt
}
