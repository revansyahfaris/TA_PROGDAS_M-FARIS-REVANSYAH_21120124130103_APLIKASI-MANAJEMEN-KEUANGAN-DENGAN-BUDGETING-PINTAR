#ifndef TRANSAKSI_H
#define TRANSAKSI_H

#include <string>
#include <vector>
using namespace std;

// Kelas Transaksi, dipake untuk mengetahui jenis, jumlah(pemasukan atau penegluaran), dan tanggal di tiap pemasukan dan pengeluaran
class Transaksi {
public:
    string kategoriUtama;
    string jenis;
    double jumlah;
    string tanggal;

    Transaksi(string k, string j, double jm, string t) : kategoriUtama(k), jenis(j), jumlah(jm), tanggal(t) {} //initializer list
};

// Kelas PengelolaanKeuangan, dipake buat program transaksi seperti pemasukan dan pengeluaran
// Implementasi di file transaksi.cpp
class PengelolaanKeuangan {
public:
    double saldo = 0;
    vector<Transaksi> riwayat;

    void tambahPemasukan(const string& kategoriUtama, const string& jenis, double jumlah, const string& tanggal);
    void tambahPengeluaran(const string& kategoriUtama, const string& jenis, double jumlah, const string& tanggal);
};

#endif
