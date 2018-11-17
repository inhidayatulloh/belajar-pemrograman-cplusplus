/** Penulis : Indra Hidayatulloh
  * Github  : github.com/inhidayatulloh
  * Dibuat  : 17/11/2018
  * Judul   : Mengisi Pointer dengan Pointer
  */
#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int nilai1, nilai2;

    // Deklarasi > 1 pointer dengan tipe data yang sama dalam 1 statement
    // Asterik (*) dituliskan sebelum masing-masing nama pointer
    int * pointer1, *pointer2;

    // Menyimpan alamat memori variabel nilai1 pada pointer1
    // Menyimpan alamat memori variabel nilai2 pada pointer2
    pointer1 = &nilai1;
    pointer2 = &nilai2;

    // Mengisi nilai pada alamat memori yang disimpan di pointer1
    // Karena pointer1 menyimpan alamat memori nilai1 maka nilai1 memiliki nilai 85
    *pointer1 = 85;

    /* Mengisi nilai pada alamat memori yang disimpan di pointer2
       dengan nilai pada alamat memori yang disimpan di pointer1 */
    *pointer2 = *pointer1;

    /*Karena pointer2 menyimpan alamat memori nilai2 dan pointer1 menyimpan alamat memori nilai1
      maka *pointer2 = *pointer1 sama dengan nilai2 = nilai1. Sehingga ,nilai2 berisi nilai 85*/

    // Menampilkan nilai dari variabel nilai1 dan nilai2
    // Variabel nilai1 dan nilai2 berisi nilai 85
    cout << "Nilai 1: " << nilai1 << endl;
    cout << "Nilai 2: " << nilai2 << endl;

    cout << endl;

    // Mengisi alamat memori pada pointer1 dengan alamat memori pada pointer2
    // Sehingga, pointer1 menyimpan alamat memori variabel nilai2 seperti halnya pointer2
    pointer1 = pointer2;

    // Mengisi nilai pada alamat memori yang disimpan di pointer1
    // Variabel nilai2 menjadi memiliki nilai 60;
    *pointer1 = 60;

    // Menampilkan kembali nilai dari variabel nilai1 dan nilai2
    // Variabel nilai1 memiliki nilai 85 dan nilai2 berisi nilai 60
    cout << "Nilai 1: " << nilai1 << endl;
    cout << "Nilai 2: " << nilai2 << endl;

    return 0;
}
