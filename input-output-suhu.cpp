#include <iostream>
#include <fstream> // Untuk file handling

using namespace std;

int main() {
    // Deklarasi variabel untuk suhu dalam Celsius, Fahrenheit, dan Reamur
    double C, F, R;

    // Input suhu dalam Celsius
    cout << "Masukkan suhu dalam derajat Celcius (C): ";
    cin >> C;

    // Menghitung suhu dalam Fahrenheit dan Reamur
    F = (9.0 / 5.0) * C + 32;  // Rumus Fahrenheit
    R = (4.0 / 5.0) * C;       // Rumus Reamur (diperbaiki dari kesalahan rumus awal)

    // Menampilkan hasil konversi di layar
    cout << "Suhu dalam Fahrenheit: " << F << endl;
    cout << "Suhu dalam Reamur: " << R << endl;

    // Menyimpan hasil dalam file suhu.dat dengan format Celcius Fahrenheit Reamur
    ofstream outfile("suhu.dat");
    if (outfile.is_open()) {
        outfile << "C: " << C << " F: " << F << " R: " << R << endl;
        outfile.close();
        cout << "Hasil konversi telah disimpan dalam file suhu.dat" << endl;
    } else {
        cout << "Tidak dapat membuka file untuk menyimpan hasil." << endl;
    }

    return 0;
}
