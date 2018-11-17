/** Penulis : Indra Hidayatulloh
  * Github  : github.com/inhidayatulloh
  * Dibuat  : 16/11/2018
  * Judul   : Deklarasi, Inisialisasi Pointer, dan Menyimpan Alamat Memori Variabel
  */
#include<iostream>
using namespace std;

int main() {
    /// Pointer: variabel yang menunjuk/berisi alamat memori variabel lain

    // Deklarasi dan inisialisasi variabel a, m, dan x
    // Ketiga variabel memiliki tipe data yang berbeda
    int a = 5;
    float m = 2.43;
    double x = 89.7619;

    /** Deklarasi pointer untuk menyimpan alamat memori variabel
      * Cara deklarasi pointer: tipe data * nama pointer
      * Tipe data pointer harus sama dengan tipe data variabel yang alamat memorinya akan disimpan
      */

    // Deklarasi pointer b
    int * b;
    // Menyimpan alamat memori variabel a pada pointer b
    b = &a;

    cout << "Nilai a: " << a << endl;
    cout << "Alamat memori a: " << &a << endl;
    cout << "Pointer b: " << b << endl;

    cout << endl;

    /** Deklarasi dan inisialisasi pointer untuk menyimpan alamat memori variabel
      * Caranya: tipe data * nama pointer = &nama variabel
      */

    // Deklarasi sekaligus inisialisasi pointer n;
    // Inisialisasi dalam hal ini menyimpan alamat memori variabel m pada pointer n
    float * n = &m;

    cout << "Nilai m: " << m << endl;
    cout << "Alamat memori m: " << &m << endl;
    cout << "Pointer n: " << n << endl;

    cout << endl;

    // Deklarasi sekaligus inisialisasi pointer y;
    // Inisialisasi dalam hal ini menyimpan alamat memori variabel x pada pointer y
    double * y = &x;

    cout << "Nilai x: " << x << endl;
    cout << "Alamat memori x: " << &x << endl;
    cout << "Pointer y: " << y << endl;

    return 0;
}
