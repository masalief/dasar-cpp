#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel untuk nilai ujian
    int nilai;

    // Input nilai ujian
    cout << "Masukkan nilai ujian: ";
    cin >> nilai;

    // Menentukan kelulusan
    if (nilai >= 60) {
        cout << "Selamat! Anda Lulus." << endl;
    } else {
        cout << "Maaf, Anda Tidak Lulus." << endl;
    }

    return 0;
}
