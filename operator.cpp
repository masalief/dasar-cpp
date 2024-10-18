#include <iostream>
using namespace std;

// int main() {
//     int m = 24; // nilai m
//     int k = 21; // nilai k
//     int j = m | k; // menggunakan operator bitwise OR

//     cout << "Nilai j = " << j << endl; // menampilkan hasil

//     return 0;
// }

// Penjelasan Kode
// Inisialisasi Variabel: Variabel m diinisialisasi dengan nilai 24, dan k diinisialisasi dengan nilai 21.
// Operasi Bitwise OR: j dihitung dengan menggunakan m | k.
// Output: Hasil nilai j ditampilkan, yang seharusnya 29.

// 2. 


// int main() {
//     int m = 24; // nilai m
//     int k = 21; // nilai k
//     int j = m % k; // menggunakan operator modulus

//     cout << "Nilai j = " << j << endl; // menampilkan hasil

//     return 0;
// }

// Penjelasan Kode
// Inisialisasi Variabel: Variabel m diinisialisasi dengan nilai 24, dan k diinisialisasi dengan nilai 21.
// Operasi Modulus: j dihitung dengan menggunakan m % k, yang memberikan sisa hasil bagi dari pembagian m dengan k.
// Output: Hasil nilai j ditampilkan, yang seharusnya 3.

// 3. 


// int main() {
//     int m = 24; // nilai m
//     int k = 21; // nilai k
//     int j = m & k; // menggunakan operator bitwise AND

//     cout << "Nilai j = " << j << endl; // menampilkan hasil

//     return 0;
// }

// Penjelasan Kode
// Inisialisasi Variabel: Variabel m diinisialisasi dengan nilai 24, dan k diinisialisasi dengan nilai 21.
// Operasi Bitwise AND: j dihitung dengan menggunakan m & k.
// Output: Hasil nilai j ditampilkan, yang seharusnya 16.

// 4.


// int main() {
//     int m = 24; // nilai m
//     int k = 21; // nilai k
//     int j = m + ++k; // menggunakan pre-increment pada k

//     cout << "Nilai j = " << j << endl; // menampilkan hasil
//     cout << "Nilai k setelah increment = " << k << endl; // menampilkan nilai k setelah increment

//     return 0;
// }

// Penjelasan Kode
// Inisialisasi Variabel: Variabel m diinisialisasi dengan nilai 24, dan k diinisialisasi dengan nilai 21.
// Operasi Pre-increment dan Penjumlahan: j dihitung dengan menggunakan ekspresi m + ++k, yang mengincrement nilai k terlebih dahulu sebelum menjumlahkannya dengan m.
// Output: Hasil nilai j (46) dan nilai k setelah increment (22) ditampilkan.

// 5.


// int main() {
//     int m = 24; // nilai m
//     int k = 21; // nilai k
//     int j = m - --k; // menggunakan pre-decrement pada k

//     cout << "Nilai j = " << j << endl; // menampilkan hasil
//     cout << "Nilai k setelah decrement = " << k << endl; // menampilkan nilai k setelah decrement

//     return 0;
// }

// Penjelasan Kode
// Inisialisasi Variabel: Variabel m diinisialisasi dengan nilai 24, dan k diinisialisasi dengan nilai 21.
// Operasi Pre-decrement dan Pengurangan: j dihitung dengan menggunakan ekspresi m - --k, yang mengurangi nilai k terlebih dahulu sebelum mengurangkannya dari m.
// Output: Hasil nilai j (4) dan nilai k setelah decrement (20) ditampilkan.

// 6. 


// int main() {
//     int m = 24; // nilai m
//     int k = 21; // nilai k
//     int j = m - --k; // menggunakan pre-decrement pada k

//     cout << "Nilai j = " << j << endl; // menampilkan hasil
//     cout << "Nilai k setelah decrement = " << k << endl; // menampilkan nilai k setelah decrement

//     return 0;
// }

// Penjelasan Kode
// Inisialisasi Variabel: Variabel m diinisialisasi dengan nilai 24, dan k diinisialisasi dengan nilai 21.
// Operasi Pre-decrement dan Pengurangan: j dihitung dengan menggunakan ekspresi m - --k, yang mengurangi nilai k terlebih dahulu sebelum mengurangkannya dari m.
// Output: Hasil nilai j (4) dan nilai k setelah decrement (20) ditampilkan.

// 7. 


// int main() {
//     int m = 24; // nilai m
//     int j = m >> 2; // menggunakan operator right shift

//     cout << "Nilai j = " << j << endl; // menampilkan hasil

//     return 0;
// }

// Penjelasan Kode
// Inisialisasi Variabel: Variabel m diinisialisasi dengan nilai 24.
// Operasi Right Shift: j dihitung dengan menggunakan m >> 2, yang menggeser semua bit dari m dua posisi ke kanan.
// Output: Hasil nilai j ditampilkan, yang seharusnya 6.

// 8. 


// int main() {
//     int m = 24; // nilai m
//     int k = 21; // nilai k
//     int j = k += m; // menambahkan m ke k dan menugaskan hasilnya ke j

//     cout << "Nilai j = " << j << endl; // menampilkan hasil
//     cout << "Nilai k setelah penambahan = " << k << endl; // menampilkan nilai k setelah penambahan

//     return 0;
// }

// Penjelasan Kode
// Inisialisasi Variabel: Variabel m diinisialisasi dengan nilai 24, dan k diinisialisasi dengan nilai 21.
// Operasi Penugasan dengan Penambahan: j dihitung dengan menggunakan k += m, yang menambahkan m ke k dan menyimpan hasilnya di j.
// Output: Kode ini akan mencetak hasil nilai j (45) dan nilai k setelah penambahan (45).

// 9. 


// int main() {
//     int m = 24; // nilai m
//     int k = 21; // nilai k
//     int j = --m + k++; // menggunakan pre-decrement pada m dan post-increment pada k

//     cout << "Nilai j = " << j << endl; // menampilkan hasil
//     cout << "Nilai m setelah decrement = " << m << endl; // menampilkan nilai m setelah decrement
//     cout << "Nilai k setelah increment = " << k << endl; // menampilkan nilai k setelah increment

//     return 0;
// }

// Penjelasan Kode
// Inisialisasi Variabel: Variabel m diinisialisasi dengan nilai 24, dan k diinisialisasi dengan nilai 21.
// Operasi Pre-decrement dan Post-increment: j dihitung dengan menggunakan ekspresi --m + k++, yang mengurangi m terlebih dahulu dan kemudian menjumlahkan dengan k sebelum k di-increment.
// Output: Kode ini akan mencetak hasil nilai j (44), nilai m setelah decrement (23), dan nilai k setelah increment (22).

// 10. 


int main() {
    int m = 24; // nilai m
    int k = 21; // nilai k, tidak digunakan dalam perhitungan
    int j = --m * 5; // menggunakan pre-decrement pada m dan mengalikan dengan 5

    cout << "Nilai j = " << j << endl; // menampilkan hasil
    cout << "Nilai m setelah decrement = " << m << endl; // menampilkan nilai m setelah decrement

    return 0;
}

// Penjelasan Kode
// Inisialisasi Variabel: Variabel m diinisialisasi dengan nilai 24, dan k diinisialisasi dengan nilai 21 (meskipun k tidak digunakan dalam perhitungan).
// Operasi Pre-decrement dan Perkalian: j dihitung dengan menggunakan ekspresi --m * 5, yang mengurangi m menjadi 23 sebelum mengalikannya dengan 5.
// Output: Kode ini akan mencetak hasil nilai j (115) dan nilai m setelah decrement (23).