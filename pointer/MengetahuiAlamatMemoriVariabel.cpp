/** Penulis : Indra Hidayatulloh
  * Github  : github.com/inhidayatulloh
  * Dibuat  : 16/11/2018
  * Judul   : Mengetahui Alamat Memori Variabel
  */
#include <iostream>
using namespace std;

int main() {
    /// Variabel: nama lokasi untuk menyimpan data di memori

    // Deklarasi dan inisialisasi variabel a, m, dan x
    // Ketiga variabel memiliki tipe data yang berbeda
    int a = 5;
    float m = 2.43;
    double x = 89.7619;

    // Menampilkan nilai a, m, dan x
    cout << "Nilai a: " << a << endl;
    cout << "Nilai m: " << m << endl;
    cout << "Nilai x: " << x << endl;

    cout << endl;

    /** Mengetahui alamat memori variabel
      * Caranya: &nama variabel
      * & adalah reference operator, dapat dibaca alamat memori dari...
      */

    // Menampilkan alamat memori variabel a, m, dan x
    cout << "Alamat memori a: " << &a << endl;
    cout << "Alamat memori m: " << &m << endl;
    cout << "Alamat memori x: " << &x << endl;

    return 0;
}
