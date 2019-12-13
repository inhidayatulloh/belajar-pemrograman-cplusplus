/** Penulis  : Indra Hidayatulloh
  * Github   : github.com/inhidayatulloh
  * Dibuat   : 13/12/2019
  * File     : Deklarasi_dan_Menggunakan_Pointer.cpp
  * Deskripsi: Program yang menunjukkan cara mendeklarasikan pointer
  *            dan menyimpan alamat memori variabel pada pointer
  *            serta membaca nilai variabel melalui pointer
  */
#include<iostream>

using namespace std;

int main() {
    /// Pointer: variabel yang menunjuk/berisi alamat memori variabel lain

    /* Deklarasi dan inisialisasi variabel var1, var2, var3, dan var4
     * Keempat variabel memiliki tipe data yang berbeda
     */
    int var1 = 9;
    float var2 = 3.46;
    double var3 = 67.08519;
    char var4 = 'L';

    /** Mendeklarasikan pointer untuk menyimpan alamat memori variabel
      * Cara deklarasi pointer: tipe data * nama pointer
      * Tipe data pointer harus sama dengan tipe data variabel yang alamat memorinya akan disimpan
      */

    // Deklarasi pointer
    int * pointerVar1;
    float * pointerVar2;
    double * pointerVar3;
    char * pointerVar4;

    /** Menyimpan alamat memori variabel pada pointer
      * Caranya: nama pointer = &nama variabel
      */
    pointerVar1 = &var1;
    pointerVar2 = &var2;
    pointerVar3 = &var3;
    pointerVar4 = &var4;

    // Menampilkan nilai dan alamat memori variabel var1
    cout << "Nilai variabel var1: " << var1 << endl;
    cout << "Alamat memori variabel var1: " << &var1 << endl;

    /** Membaca alamat memori yang disimpan pada pointer
      * Caranya: cukup dengan menuliskan nama pointernya
      */
    // Menampilkan alamat memori yang disimpan pada pointerVar1
    cout << "Alamat memori pada  pointerVar1: " << pointerVar1 << endl;

    /** Membaca nilai yang ada pada alamat memori yang disimpan di pointer
      * Caranya: *nama pointer
      */
    // Menampilkan nilai dari alamat memori yang disimpan pada pointerVar1
    cout << "Nilai dari alamat memori pada pointerVar1: " << *pointerVar1 << endl << endl;

    /* Menampilkan nilai dan alamat memori variabel var2
     * Menampilkan alamat memori yang disimpan pada pointerVar2
     * Menampilkan nilai dari alamat memori yang disimpan pada pointerVar2
     */
    cout << "Nilai variabel var2: " << var2 << endl;
    cout << "Alamat memori variabel var2: " << &var2 << endl;
    cout << "Alamat memori pada pointerVar2: " << pointerVar2 << endl;
    cout << "Nilai dari alamat memori pada pointerVar1: " << *pointerVar2 << endl << endl;

    /* Menampilkan nilai dan alamat memori variabel var3
     * Menampilkan alamat memori yang disimpan pada pointerVar3
     * Menampilkan nilai dari alamat memori yang disimpan pada pointerVar3
     */
    cout << "Nilai variabel var3: " << var3 << endl;
    cout << "Alamat memori variabel var3: " << &var3 << endl;
    cout << "Alamat memori pada pointerVar3: " << pointerVar3 << endl;
    cout << "Nilai dari alamat memori pada pointerVar3: " << *pointerVar3 << endl;

    /* Menampilkan nilai dan alamat memori variabel var4
     * Menampilkan alamat memori yang disimpan pada pointerVar4
     * Menampilkan nilai dari alamat memori yang disimpan pada pointerVar4
     */
    cout << "Nilai variabel var4: " << var4 << endl;
    cout << "Alamat memori variabel var4: " << &var4 << endl;
    cout << "Alamat memori pada pointerVar4: " << pointerVar4 << endl;
    cout << "Nilai dari alamat memori pada pointerVar4: " << *pointerVar4 << endl;
    return 0;
}
