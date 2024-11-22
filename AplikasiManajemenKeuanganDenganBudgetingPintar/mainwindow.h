#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Ngambil library QT yang dipake
#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QComboBox>
#include <QLabel>
#include <QListWidget>
#include <QDateEdit>
#include <QTableWidget>

#include "transaksi.h"

// Buat namespace Ui
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT // Makronya QT, biar semua kodenya bisa jalan dengan baik

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    void setTabIndex(int index);

private slots: //slots-nya sebenaranya gak kepakai, entah kenapa bisa kayak gitu
    // Beberapa method yang dipake di Amankan Bentar
    void on_tambahPemasukan_clicked();
    void on_tambahPengeluaran_clicked();
    void on_resetKategoriButton_clicked();
    void on_nextButton_clicked();
    void updateSaldo();
    void saranBudget();
    void rekomendasiMakanan();
    void on_resetPemasukanAtauPengeluaran_clicked();
    void on_backButton_clicked();

private:
    // Ngehubungin elemen GUI
    Ui::MainWindow *ui;
    QLabel* saldoLabel;
    QLineEdit* jumlahInputPemasukan;
    QLineEdit* jumlahInputPengeluaran;
    QComboBox* kategoriComboBox;
    QComboBox *subKategoriComboBox;
    QPushButton* tambahPemasukanBtn;
    QPushButton* tambahPengeluaranBtn;
    QListWidget* transaksiListWidget;
    QDateEdit* tanggalInput;
    QLineEdit* kategoriLineEdit;
    QPushButton* resetKategoriButton;
    QPushButton* nextButton;
    QPushButton* resetPemasukanAtauPengeluaran;
    QPushButton* backButton;

    PengelolaanKeuangan keuangan;
};
#endif
