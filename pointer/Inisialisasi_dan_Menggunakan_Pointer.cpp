/** Penulis  : Indra Hidayatulloh
  * Github   : github.com/inhidayatulloh
  * Dibuat   : 13/12/2019
  * File     : Inisialisasi_dan_Menggunakan_Pointer.cpp
  * Deskripsi: Program yang menunjukkan cara inisialisasi pointer
  *            dan menyimpan alamat memori variabel pada pointer
  *            serta membaca nilai variabel melalui pointer
  */

#include<iostream>

using namespace std;

int main() {
    /* Deklarasi dan inisialisasi variabel var1, var2, var3, dan var4
     * Keempat variabel memiliki tipe data yang berbeda
     */
    int var1 = 9;
    float var2 = 3.46;
    double var3 = 67.08519;
    char var4 = 'L';

    /** Inisialisasi pointer: deklarasi pointer sekaligus menyimpan alamat variabel pada pointer
      * Cara: tipe data * nama pointer = &nama variabel
      * Tipe data pointer harus sama dengan tipe data variabel yang alamat memorinya akan disimpan
      */
    // Inisialisasi pointer
    int * pointerVar1 = &var1;
    float * pointerVar2 = &var2;
    double * pointerVar3 = &var3;
    char * pointerVar4 = &var4;

    /* Menampilkan nilai dan alamat memori variabel var1
     * Menampilkan alamat memori yang disimpan pada pointerVar1
     * Menampilkan nilai dari alamat memori yang disimpan pada pointerVar1
     */
    cout << "Nilai variabel var1: " << &var1 << endl;
    cout << "Alamat memori variabel var1: " << &var1 << endl;
    cout << "Alamat memori pada pointerVar1: " << pointerVar1 << endl;
    cout << "Nilai dari alamat memori pada pointerVar1: " << *pointerVar1 << endl << endl;

    /* Menampilkan nilai dan alamat memori variabel var2
     * Menampilkan alamat memori yang disimpan pada pointerVar2
     * Menampilkan nilai dari alamat memori yang disimpan pada pointerVar2
     */
    cout << "Nilai variabel var2: " << &var2 << endl;
    cout << "Alamat memori variabel var2: " << &var2 << endl;
    cout << "Alamat memori pada pointerVar2: " << pointerVar2 << endl;
    cout << "Nilai dari alamat memori pada pointerVar2: " << *pointerVar2 << endl << endl;

    /* Menampilkan nilai dan alamat memori variabel var3
     * Menampilkan alamat memori yang disimpan pada pointerVar3
     * Menampilkan nilai dari alamat memori yang disimpan pada pointerVar3
     */
    cout << "Nilai variabel var2: " << &var3 << endl;
    cout << "Alamat memori variabel var2: " << &var3 << endl;
    cout << "Alamat memori pada pointerVar2: " << pointerVar3 << endl;
    cout << "Nilai dari alamat memori pada pointerVar2: " << *pointerVar3 << endl << endl;

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
