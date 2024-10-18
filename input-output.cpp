#include <iostream>
#include <fstream> // Untuk file handling
#include <cmath>   // Untuk fungsi pow()

using namespace std;

int main() {
    // Deklarasi variabel
    double M, B, U;
    int n = 5; // Jumlah tahun (selalu 5 tahun)

    // Input nilai M dan B
    cout << "Masukkan jumlah uang awal (M) dalam rupiah: ";
    cin >> M;
    cout << "Masukkan persentase bunga per tahun (B) dalam %: ";
    cin >> B;

    // Konversi bunga dari persentase ke bentuk desimal
    B = B / 100;

    // Menghitung uang pada akhir tahun ke-5 menggunakan rumus U = M * (1 + B)^n
    U = M * pow(1 + B, n);

    // Menampilkan hasil
    cout << "Uang Pak Budi pada akhir tahun ke-5 adalah: " << U << " rupiah" << endl;

    // Simpan hasil ke dalam file bank.dat
    ofstream outfile("bank.dat");
    if (outfile.is_open()) {
        outfile << "Jumlah uang awal (M): " << M << " rupiah" << endl;
        outfile << "Persentase bunga per tahun (B): " << B * 100 << "%" << endl;
        outfile << "Jumlah uang pada akhir tahun ke-5 (U): " << U << " rupiah" << endl;
        outfile.close();
        cout << "Hasil telah disimpan dalam file bank.dat" << endl;
    } else {
        cout << "Tidak dapat membuka file untuk menyimpan hasil." << endl;
    }

    return 0;
}
