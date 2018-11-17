/** Penulis : Indra Hidayatulloh
  * Github  : github.com/inhidayatulloh
  * Dibuat  : 17/11/2018
  * Judul   : Mengisi dan Memanggil Variabel Melalui Pointer
  */
#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi variabel a, m, dan x
    // Ketiga variabel memiliki tipe data yang berbeda
    int a = 5;
    float m = 2.43;
    double x = 89.7619;

    // Deklarasi dan inisialisasi pointer
    int * b = &a;
    float * n = &m;
    double * y = &x;

    /** Mengisi nilai variabel melalui pointer
      * Caranya: *nama pointer = nilai yang mau diisikan
      * Asterik (*) adalah dereference operator, dapat dibaca nilai dari alamat memori...
      */

    // Mengisi nilai pada alamat memori yang disimpan di pointer b, n, dan y
    *b = 16;
    *n = 3.62;
    *y = 105.9874;

    // Menampilkan nilai variabel a, m, dan x
    // Pointer b menyimpan alamat memori variabel a sehingga nilai variabel a berubah menjadi 16
    // Pointer n menyimpan alamat memori variabel m sehingga nilai variabel m berubah menjadi 3.62
    // Pointer y menyimpan alamat memori variabel x sehingga nilai variabel x berubah menjadi 105.9874
    cout << "Nilai a: " << a << " == *b: " << *b << endl;
    cout << "Nilai m: " << m << " == *n: " << *n << endl;
    cout << "Nilai x: " << x << " == *y: " << *y << endl;

    return 0;
}
