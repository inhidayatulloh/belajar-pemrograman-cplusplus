/** Penulis : Indra Hidayatulloh
  * Github  : github.com/inhidayatulloh
  * Dibuat  : 17/11/2018
  * Judul   : Mengisi Array Melalui Pointer
  */
#include <iostream>
using namespace std;

int main() {
    // Deklarasi array nilai berukuran 5 dengan tipe data int
    int nilai[5];

    // Deklarasi pointer
    int * pointer;

    /** Nama dari sebuah array, misal nilai, itu menyimpan alamat memori indeks ke-0 dari array
        Sehingga, dapat dikatakan nama array adalah sebuah pointer **/

    /* Memanggil nama array, yaitu nilai maka akan menampilkan alamat memori indeks ke-0
       dari array nilai atau nilai[0] */
    cout << "nilai: " << nilai << endl;
    cout << "Alamat nilai[0]: " << &nilai[0] << endl;

    // Mengisi pointer dengan nilai
    // pointer akan menyimpan alamat memori indeks ke-0 dari array nilai
    pointer = nilai;
    cout << "Pointer: " << pointer << endl;

    cout << endl;

    // Mengisi array indeks ke-0 atau nilai[0] melalui pointer;
    *pointer = 70;
    cout << "nilai[0]: " << nilai[0] << " | alamat nilai[0]: " << &nilai[0] << " | pointer: " << pointer << endl;

    /** Menambahkan alamat memori yang disimpan pada pointer dengan 1
        sama halnya dengan menambahkan indeks array dengan 1.

        Misal, sebelumnya pointer menyimpan alamat memori array indeks ke-0, yaitu nilai[0].
        Setelah pointer ditambahkan dengan 1 maka pointer menyimpan alamat memori array indeks ke-1 / nilai[1].

        Hal ini dikarenakan pada dasarnya alamat memori setiap indeks pada array itu berdampingan.
        */

    // Saat ini pointer menyimpan alamat memori array indeks ke-0 atau nilai[0]
    // pointer++ atau pointer = pointer + 1 akan Menyimpan alamat memori array indeks berikutnya pada pointer
    // Dalam hal ini pointer akan berisi alamat memori array indeks ke-1 atau nilai[1]
    pointer++;

    // Mengisi array indeks ke-1 atau nilai[1] melalui pointer
    *pointer = 95;
    cout << "nilai[1]: " << nilai[1] << " | alamat nilai[1]: " << &nilai[1] << " | pointer: " << pointer << endl;

    // Saat ini pointer menyimpan alamat memori array indeks ke-1 atau nilai[1]
    // pointer + 1 berarti menunjuk pada alamat memori array indeks berikutnya, yaitu nilai[2]
    // Namun, alamat memori nilai[2] tidak disimpan di dalam pointer
    // pointer tetap berisi alamat memori array indeks ke-1 atau nilai[1]

    /* Mengisi array indeks ke-2 atau nilai[2] melalui pointer
       tanpa menyimpan alamat memori indeks ke-2 pada ponter */
    *(pointer + 1) = 50;
    cout << "nilai[2]: " << nilai[2] << " | alamat nilai[2]: " << &nilai[2] << " | pointer: " << pointer << endl;

    /* Mengisi array indeks ke-3 atau nilai[3] melalui pointer
       tanpa menyimpan alamat memori indeks ke-3 pada ponter */
    *(pointer + 2) = 85;
    cout << "nilai[3]: " << nilai[3] << " | alamat nilai[3]: " << &nilai[3] << " | pointer: " << pointer << endl;

    /* Mengisi array indeks ke-4 (terakhir) atau nilai[4] melalui pointer
       tanpa menyimpan alamat memori indeks ke-4 pada ponter */
    *(pointer + 3) = 60;
    cout << "nilai[4]: " << nilai[4] << " | alamat nilai[4]: " << &nilai[4] << " | pointer: " << pointer << endl;

    cout << endl;

    // Karena nama array adalah sebuah pointer maka mengisi array nilai[0] juga dapat melalui nilai
    // Jadi, tidak perlu mendeklarasikan pointer secara eksplisit

    // Mengisi array nilai indeks ke-0 / nilai[0]
    *nilai = 50;
    // Mengisi array nilai indeks ke-1 / nilai[1]
    *(nilai + 1) = 60;
    // Mengisi array nilai indeks ke-2 / nilai[2]
    *(nilai + 2) = 70;
    // Mengisi array nilai indeks ke-3 / nilai[3]
    *(nilai + 3) = 80;
    // Mengisi array nilai indeks ke-4 (terakhir) / nilai[4]
    *(nilai + 4) = 90;

    // Menampilkan nilai pada array nilai
    for(int i=0; i<5; i++) {
        cout << "nilai[" << i << "]: " << nilai[i] << endl;
    }

    return 0;
}
