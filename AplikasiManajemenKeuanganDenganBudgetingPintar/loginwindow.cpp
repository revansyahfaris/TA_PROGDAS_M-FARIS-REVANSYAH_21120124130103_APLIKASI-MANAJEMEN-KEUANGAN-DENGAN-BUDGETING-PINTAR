#include "loginwindow.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    QLabel *labelLogo = ui->labelLogo;  // Ambil label dari ui
    QPixmap pixmap(":/Logo Amankan Bentar.png");
    pixmap = pixmap.scaled(500, 500, Qt::KeepAspectRatio);
    labelLogo->setPixmap(pixmap);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    // Contoh validasi login sederhana
    if (username == "admin" && password == "12345") {
        QMessageBox::information(this, "Login", "Login Berhasil!");
        this->hide(); // Sembunyikan login window

        // Tampilkan Main Window
        mainWindow = new MainWindow();

        mainWindow->setTabIndex(0); // Menampilkan tab pertama

        mainWindow->show();
    } else {
        QMessageBox::warning(this, "Login", "Username atau Password salah!");
    }
}

void LoginWindow::on_resetButton_clicked()
{
    // Kosongkan input username dan password
    ui->usernameInput->clear();
    ui->passwordInput->clear();

    // Tambahkan feedback jika perlu
    QMessageBox::information(this, "Reset", "Form berhasil direset!");
}
