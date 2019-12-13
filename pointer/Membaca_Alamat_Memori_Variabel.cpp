/** Penulis  : Indra Hidayatulloh
  * Github   : github.com/inhidayatulloh
  * Dibuat   : 13/12/2019
  * File     : Membaca_Alamat_Memori_Variabel.cpp
  * Deskripsi: Program yang menunjukkan cara mengetahui/membaca alamat memori 
  *            dari variabel bertipe data int, float, double, dan char
  */
#include <iostream>
using namespace std;

int main() {
    /// Variabel: nama lokasi untuk menyimpan data di memori

    /* Deklarasi dan inisialisasi variabel var1, var2, dan var3
     * Ketiga variabel memiliki tipe data yang berbeda
     */
    int var1 = 9;
    float var2 = 3.46;
    double var3 = 67.08519;
    char var4 = 'L';

    // Menampilkan nilai variabel var1, var2, dan var3
    cout << "Nilai variabel var1: " << var1 << endl;
    cout << "Nilai variabel var2: " << var2 << endl;
    cout << "Nilai variabel var3: " << var3 << endl;
    cout << "Nilai variabel var4: " << var4 << endl << endl;

    /** Mengetahui/membaca alamat memori variabel
      * Caranya: &nama variabel
      * & (reference operator) membaca alamat memori dari variabel
      */

    // Menampilkan alamat memori variabel a, m, dan x
    cout << "Alamat memori variabel var1: " << &var1 << endl;
    cout << "Alamat memori variabel var2: " << &var2 << endl;
    cout << "Alamat memori variabel var3: " << &var3 << endl;
    cout << "Alamat memori variabel var4: " << &var4 << endl;

    return 0;
}
