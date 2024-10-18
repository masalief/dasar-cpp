#include <iostream>
#define MAX 5  // Ukuran maksimum antrian

using namespace std;

// Deklarasi variabel global untuk Circular Queue
char queue[MAX];  // Array untuk antrian
int front = -1, rear = -1;  // Indeks depan (front) dan belakang (rear)

// Fungsi untuk mengecek apakah antrian penuh
bool isFull() {
    if ((front == 0 && rear == MAX - 1) || (rear == (front - 1) % (MAX - 1))) {
        return true;
    }
    return false;
}

// Fungsi untuk mengecek apakah antrian kosong
bool isEmpty() {
    if (front == -1) {
        return true;
    }
    return false;
}

// Fungsi untuk menambahkan elemen ke dalam antrian
void insert(char element) {
    if (isFull()) {
        cout << "Antrian penuh. Tidak bisa menambahkan elemen." << endl;
        return;
    } else if (isEmpty()) {  // Jika antrian kosong
        front = rear = 0;
    } else if (rear == MAX - 1 && front != 0) {  // Jika rear di akhir array dan ada ruang di depan
        rear = 0;
    } else {
        rear++;
    }
    queue[rear] = element;
    cout << "Elemen " << element << " dimasukkan ke dalam antrian." << endl;
}

// Fungsi untuk menghapus elemen dari antrian
void del() {
    if (isEmpty()) {
        cout << "Antrian kosong. Tidak ada elemen yang bisa dihapus." << endl;
        return;
    }
    char deletedElement = queue[front];
    queue[front] = '\0';  // Mengosongkan tempat di antrian
    if (front == rear) {  // Jika hanya ada satu elemen
        front = rear = -1;
    } else if (front == MAX - 1) {  // Jika front di akhir array
        front = 0;
    } else {
        front++;
    }
    cout << "Elemen " << deletedElement << " dihapus dari antrian." << endl;
}

// Fungsi untuk mencetak elemen-elemen di antrian
void cetakAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong." << endl;
        return;
    }
    cout << "Isi antrian: ";
    if (rear >= front) {
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
    } else {  // Antrian melingkar
        for (int i = front; i < MAX; i++) {
            cout << queue[i] << " ";
        }
        for (int i = 0; i <= rear; i++) {
            cout << queue[i] << " ";
        }
    }
    cout << endl;
}

// Fungsi utama
int main() {
    int pilihan;
    char elemen;

    do {
        // Menampilkan menu
        cout << "\nMENU ANIMASI ANTRIAN MELINGKAR\n";
        cout << "1. INSERT\n";
        cout << "2. DELETE\n";
        cout << "3. CETAK ANTRIAN\n";
        cout << "4. QUIT\n";
        cout << "Pilih Nomor: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan elemen (karakter) yang akan dimasukkan ke dalam antrian: ";
                cin >> elemen;
                insert(elemen);
                break;
            case 2:
                del();
                break;
            case 3:
                cetakAntrian();
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 4);

    return 0;
}