#include <iostream>

using namespace std;

/** Struct: kumpulan variabel dengan tipe data berbeda

    Deklarasi Struct:
    struct nama_struct {
        tipe_data nama_variabel1,
        tipe_data nama_variabel2,
        tipe_data nama_variabel3
        dst...
    };

    Deklarasi Objek dari Struct:
    nama_struct nama_objek1, nama_objek2, dst;

    Deklarasi Struct sekaligus Objek Struct:
    struct nama_struct {
        tipe_data nama_variabel1,
        tipe_data nama_variabel2,
        tipe_data nama_variabel3
        dst...
    } nama_objek1, nama_objek2, dst;

    Misalkan, terdapat data mahasasiswa yang terdiri dari:
    nim, nama, gender, tempatLahir, usia, angkatan, prodi, ipk

    Apabila dibuatkan variabel untuk menyimpan data tersebut
    akan menjadi seperti berikut.

    string nim;
    string nama;
    char gender;
    string tempatLahir;
    int usia;
    int angkatan;
    string prodi;
    float ipk;

    Semua variabel di atas dapat dikelompokkan menjadi satu Struct.

    Ini akan memudahkan dalam mengelola data (terutama) dalam jumlah banyak
    dengan tipe data berbeda yang mana apabila disimpan dengan variabel biasa
    atau array akan memerlukan deklarasi yang banyak. Seperti diketahui bahwa
    array hanya dapat menyimpan data dengan tipe data yang sama.
  */

// Deklarasi struct bernama mahasiswa
struct mahasiswa {
    string nim;
    string nama;
    char gender;
    string asal;
    int usia;
    int angkatan;
    string prodi;
    float ipk;
};

int main()
{
    // Deklarasi objek struct
    mahasiswa mhs1, mhs2;

    // Mengisi data ke anggota objek struct mhs1
    mhs1.nim = "11223344551";
    mhs1.nama = "Indra Hidayatulloh";
    mhs1.gender = 'L';
    mhs1.asal = "Bandung";
    mhs1.usia = 19;
    mhs1.angkatan = 2017;
    mhs1.prodi = "PTE";
    mhs1.ipk = 3.15;

    // Mengisi data ke anggota objek struct mhs2
    mhs2.nim = "11223344552";
    mhs2.nama = "Isna Alfi Bustoni";
    mhs2.gender = 'F';
    mhs2.asal = "Sumedang";
    mhs2.usia = 18;
    mhs2.angkatan = 2017;
    mhs2.prodi = "PTE";
    mhs2.ipk = 3.69;

    // Menampilkan data yang disimpan pada anggota objek struct mhs1
    cout << "# Data Mahasiswa #" << endl;
    cout << "NIM: " << mhs1.nim << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Gender: " << mhs1.gender << endl;
    cout << "Asal: " << mhs1.asal << endl;
    cout << "Usia: " << mhs1.usia << endl;
    cout << "Angkatan: " << mhs1.angkatan << endl;
    cout << "Prodi: " << mhs1.prodi << endl;
    cout << "IPK: " << mhs1.ipk << endl;

    // Menampilkan data yang disimpan pada anggota objek struct mhs2
    cout << "# Data Mahasiswa #" << endl;
    cout << "NIM: " << mhs2.nim << endl;
    cout << "Nama: " << mhs2.nama << endl;
    cout << "Gender: " << mhs2.gender << endl;
    cout << "Asal: " << mhs2.asal << endl;
    cout << "Usia: " << mhs2.usia << endl;
    cout << "Angkatan: " << mhs2.angkatan << endl;
    cout << "Prodi: " << mhs2.prodi << endl;
    cout << "IPK: " << mhs2.ipk << endl;

    return 0;
}
