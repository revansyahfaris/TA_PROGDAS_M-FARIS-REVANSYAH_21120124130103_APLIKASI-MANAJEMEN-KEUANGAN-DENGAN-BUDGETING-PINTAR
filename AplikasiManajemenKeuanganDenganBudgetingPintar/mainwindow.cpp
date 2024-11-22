#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QDate>
using namespace std;

// Buat 'hidupin' MainWindow
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Nge-link elemen GUI ke Ui(MainWindow)
    saldoLabel = ui->saldoLabel;  // Label buat nampilin saldo
    jumlahInputPemasukan = ui->jumlahInputPemasukan;  // Input buat jumlah uang pemasukan
    jumlahInputPengeluaran = ui->jumlahInputPengeluaran;  // Input buat jumlah uang pemasukan
    kategoriComboBox = ui->kategoriComboBox;  // ComboBox buat milih kategori
    subKategoriComboBox = ui->subKategoriComboBox;  // ComboBox buat milih subkategori
    tambahPemasukanBtn = ui->tambahPemasukanBtn;  // Tombol tambah pemasukan
    tambahPengeluaranBtn = ui->tambahPengeluaranBtn;  // Tombol tambah pengeluaran
    transaksiListWidget = ui->transaksiListWidget;  // List buat nampilin transaksi yang pernah dilakuin (pemauskan dan pengeluaran)
    tanggalInput = ui->tanggalInput;  // Ngambil input tanggal dari GUI
    tanggalInput->setDate(QDate::currentDate());  // Bikin tanggal default ke hari di saat programnya dibuka
    kategoriLineEdit = ui->kategoriLineEdit;

    // Bikin kategori pada kategoriComboBox
    kategoriComboBox->addItems({"Makanan", "Transportasi", "Hiburan", "Lainnya"});

    // Bikin subKategoriComboBox bisa di-custom sendiri
    subKategoriComboBox->setEditable(true);



    // Bikin tiap kategori ada subkategorinya
    connect(kategoriComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [&](int index) {


        subKategoriComboBox->clear();  // Ngebersihin subkategori sebelumnya
        if (kategoriComboBox->currentText() == "Transportasi") {
            subKategoriComboBox->addItems({"Bensin", "Parkir", "Ongkos", "Custom"});
        } else if (kategoriComboBox->currentText() == "Makanan") {
            subKategoriComboBox->addItems({"Sarapan", "Makan Siang", "Makan Malam", "Camilan", "Custom"});
        } else if (kategoriComboBox->currentText() == "Hiburan") {
            subKategoriComboBox->addItems({"Bioskop", "Musik", "Game", "Custom"});
        } else {
            subKategoriComboBox->addItems({"Custom"});
        }
    });

    // Ngehubungin tombol ke slot(elemen GUI)
    connect(ui->saranBudgetButton, &QPushButton::clicked, this, &MainWindow::saranBudget);
    connect(ui->rekomendasiMakananButton, &QPushButton::clicked, this, &MainWindow::rekomendasiMakanan);
    connect(tambahPemasukanBtn, &QPushButton::clicked, this, &MainWindow::on_tambahPemasukan_clicked);
    connect(tambahPengeluaranBtn, &QPushButton::clicked, this, &MainWindow::on_tambahPengeluaran_clicked);
    connect(ui->resetKategoriButton, &QPushButton::clicked, this, &MainWindow::on_resetKategoriButton_clicked);
    connect(ui->nextButton, &QPushButton::clicked, this, &MainWindow::on_nextButton_clicked);
    connect(ui->resetPemasukanAtauPengeluaran, &QPushButton::clicked, this, &MainWindow::on_resetPemasukanAtauPengeluaran_clicked);
    connect(ui->backButton, &QPushButton::clicked, this, &MainWindow::on_backButton_clicked);
}

// Bikin MainWindow mati saat program MinWindow sudah selesai digunain
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setTabIndex(int index) {
    ui->tabWidget->setCurrentIndex(index);
}


void MainWindow::on_resetKategoriButton_clicked() {
    // Kosongkan QLineEdit
    kategoriLineEdit->clear();

    // Kembalikan QComboBox ke pilihan default (misalnya, index pertama)
    if (kategoriComboBox->count() > 0) {
        kategoriComboBox->setCurrentIndex(0);
    }
}

void MainWindow::on_nextButton_clicked() {
    // Pindah ke tab berikutnya
    int currentIndex = ui->tabWidget->currentIndex();
    int totalTabs = ui->tabWidget->count();

    ui->tabWidget->setCurrentIndex(currentIndex + 1); // Pindah ke tab berikutnya
}

void MainWindow::on_tambahPemasukan_clicked() {
    QString kategoriUtama = kategoriComboBox->currentText();
    // Ambil input kategori dari QLineEdit atau QComboBox
    QString jenis = kategoriLineEdit->text().trimmed(); // Ambil dari QLineEdit

    // Tambahkan kategori custom ke ComboBox jika belum ada
    if (!jenis.isEmpty() && kategoriComboBox->findText(jenis) == -1) {
        kategoriComboBox->addItem(jenis);
    }

    double jumlah = jumlahInputPemasukan->text().toDouble();
    QString tanggal = tanggalInput->date().toString("dd-MM-yyyy");

    QLocale locale(QLocale::English, QLocale::UnitedStates);
    QString formattedAmount = locale.toString(jumlah, 'f', 0);

    // Tambahkan pemasukan ke sistem keuangan
    keuangan.tambahPemasukan(kategoriUtama.toStdString(), jenis.toStdString(), jumlah, tanggal.toStdString());

    // Tambahkan item ke ListWidget
    transaksiListWidget->addItem("Pemasukan: " + jenis + " + " + formattedAmount + " IDR --- " + tanggal);

    // Perbarui saldo
    updateSaldo();

    // Kosongkan QLineEdit setelah digunakan
    kategoriLineEdit->clear();
}

void MainWindow::on_tambahPengeluaran_clicked() {
    QString kategoriUtama = kategoriComboBox->currentText();
    // Ambil input kategori dari QLineEdit atau QComboBox
    QString jenis = kategoriLineEdit->text().trimmed(); // Ambil dari QLineEdit

    // Tambahkan kategori custom ke ComboBox jika belum ada
    if (!jenis.isEmpty() && kategoriComboBox->findText(jenis) == -1) {
        kategoriComboBox->addItem(jenis);
    }

    double jumlah = jumlahInputPengeluaran->text().toDouble();
    QString tanggal = tanggalInput->date().toString("dd-MM-yyyy");

    QLocale locale(QLocale::English, QLocale::UnitedStates);
    QString formattedAmount = locale.toString(jumlah, 'f', 0);

    // Tambahkan pengeluaran ke sistem keuangan
    keuangan.tambahPengeluaran(kategoriUtama.toStdString(), jenis.toStdString(), jumlah, tanggal.toStdString());

    // Tambahkan item ke ListWidget
    transaksiListWidget->addItem("Pengeluaran: " + jenis + " - " + formattedAmount + " IDR --- " + tanggal);

    // Perbarui saldo
    updateSaldo();

    // Kosongkan QLineEdit setelah digunakan
    kategoriLineEdit->clear();
}

void MainWindow::updateSaldo() {
    // Buat format angka aja
    QString formattedSaldo = QString::number(keuangan.saldo, 'f', 0);  // Ngebuat gak ada desimal di belakangnya
    QLocale locale(QLocale::English, QLocale::UnitedStates);
    formattedSaldo = locale.toString(keuangan.saldo, 'f', 0);  // Ngasih pemisah titik tiap 1000
    saldoLabel->setText("Saldo: " + formattedSaldo + " IDR");
}

void MainWindow::saranBudget() {
    QMessageBox msgBox;
    double saldo = keuangan.saldo;

    double kebutuhanPokok = saldo * 0.50;
    double kebutuhanPribadi = saldo * 0.30;
    double tabungan = saldo * 0.20;

    // Buat format angka aja
    QLocale locale(QLocale::English, QLocale::UnitedStates);
    QString formattedSKebutuhanPokok = locale.toString(kebutuhanPokok, 'f', 0);
    QString formattedKebutuhanPribadi = locale.toString(kebutuhanPribadi, 'f', 0);
    QString formattedTabungan = locale.toString(tabungan, 'f', 0);

    // Buat saran budget berdasarkan saldo saat ini
    QString saran = QString("Saran alokasi budget berdasarkan saldo Anda: \n")
                    + QString("Kebutuhan Pokok (50%%): ") + formattedSKebutuhanPokok + " IDR\n"
                    + QString("Kebutuhan Pribadi (30%%): ") + formattedKebutuhanPribadi + " IDR\n"
                    + QString("Tabungan (20%%): ") + formattedTabungan + " IDR";

    // Nampilin saran budget di MessageBox
    msgBox.setText(saran);
    msgBox.exec();
}

void MainWindow::rekomendasiMakanan() {
    QMessageBox msgBox;

    // Ambil total pengeluaran makanan
    double totalPengeluaranMakanan = 0.0;
    for (const auto& transaksi : keuangan.riwayat) {
        if (transaksi.kategoriUtama == "Makanan") {
            totalPengeluaranMakanan += transaksi.jumlah;
        }
    }

    // Alokasi pengeluaran buat makanan (misalnya aja 50%)
    double saldo = keuangan.saldo;
    double alokasiMakanan = saldo * 0.50;

    // Ambil tanggal saat ini terus dikurangin sama sisa hari dalam bulan
    QDate currentDate = QDate::currentDate();
    int hariSisa = currentDate.daysInMonth() - currentDate.day() + 1;

    // Hitung anggaran makan harian dari alokasi pengeluaran makanan sebulan dibagi sisa hari
    double anggaranMakanHarian = alokasiMakanan / hariSisa;

    // Mengurangi alokasi makanan harian dengan pengeluaran makanan hari ini (kalau ada)
    double pengeluaranMakananHariIni = 0.0;
    for (const auto& transaksi : keuangan.riwayat) {
        if (transaksi.kategoriUtama == "Makanan" && QDate::fromString(QString::fromStdString(transaksi.tanggal), "dd-MM-yyyy") == currentDate) {
            pengeluaranMakananHariIni += transaksi.jumlah;
        }
    }

    // Hitung sisa anggaran makan hari ini setelah dikurangi pengeluaran
    double sisaAnggaranMakanan = anggaranMakanHarian - pengeluaranMakananHariIni;

    // Buat format angka aja
    QLocale locale(QLocale::English, QLocale::UnitedStates);
    QString formattedTotalPengeluaran = locale.toString(totalPengeluaranMakanan, 'f', 0);
    QString formattedSisaAnggaranMakanan = locale.toString(sisaAnggaranMakanan, 'f', 0);

    // Buat rekomendasi berdasarkan sisa anggaran makanan hari ini
    QString rekomendasi;
    rekomendasi = "Anda sudah mengeluarkan " + formattedTotalPengeluaran + " IDR untuk makanan sebelumnya.\n";
    rekomendasi += "Sisa anggaran makanan Anda hari ini adalah " + formattedSisaAnggaranMakanan + " IDR.\n";

    if (sisaAnggaranMakanan >= 20000) {
        rekomendasi += "Kami rekomendasikan Anda untuk membeli makanan sehat yang bergizi.";
    } else if (sisaAnggaranMakanan >= 10000) {
        rekomendasi += "Kami rekomendasikan Anda untuk membeli makanan bergizi.";
    } else {
        rekomendasi += "Kami rekomendasikan Anda untuk mencari makanan murah dan sederhana (Misalkan Mie instan).";
    }

    // Nampilin rekomendasi di MessageBox
    msgBox.setText(rekomendasi);
    msgBox.exec();
}

void MainWindow::on_resetPemasukanAtauPengeluaran_clicked() {
    // Kosongkan QLineEdit
    jumlahInputPemasukan->clear();
    jumlahInputPengeluaran->clear();
}

void MainWindow::on_backButton_clicked() {
    int currentIndex = ui->tabWidget->currentIndex();

    // Pindah ke tab sebelumnya
    ui->tabWidget->setCurrentIndex(currentIndex - 1);
}
