#include "transaksi.h"
using namespace std;

// Implementasi method tambahPemasukan, bakal nambahin saldo saat ini
void PengelolaanKeuangan::tambahPemasukan(const string& kategoriUtama, const string& jenis, double jumlah, const string& tanggal) {
    saldo += jumlah;
    riwayat.push_back(Transaksi(kategoriUtama, jenis, jumlah, tanggal));
}

// Implementasi method tambahPengaluaran, bakal ngurangin saldo saat ini
void PengelolaanKeuangan::tambahPengeluaran(const string& kategoriUtama, const string& jenis, double jumlah, const string& tanggal) {
    saldo -= jumlah;
    riwayat.push_back(Transaksi(kategoriUtama, jenis, -jumlah, tanggal));
}
