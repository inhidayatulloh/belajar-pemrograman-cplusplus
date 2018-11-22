#include <iostream>

using namespace std;

struct datahasilstudi {
    int no;
    string mataKuliah;
    int sks;
    char nilaiHuruf;
    float nilaiAngka;
    int tahun;
    int semester;
};

struct mahasiswa {
    string nim;
    string nama;
    char gender;
    string asal;
    int usia;
    int angkatan;
    string prodi;
    float ipk;
    datahasilstudi dhs1;
};

int main() {
    // Deklarasi objek struct
    datahasilstudi dhs1;
    mahasiswa mhs1;

    dhs1.no = 1;
    dhs1.mataKuliah = "Praktik Bahasa Pemrograman";
    dhs1.sks = 1;
    dhs1.nilaiHuruf = 'A';
    dhs1.nilaiAngka = 99.9;
    dhs1.tahun = 2018;
    dhs1.semester = 3;

    // Mengisi data ke anggota objek struct mhs1
    mhs1.nim = "11223344551";
    mhs1.nama = "Indra Hidayatulloh";
    mhs1.gender = 'L';
    mhs1.asal = "Bandung";
    mhs1.usia = 19;
    mhs1.angkatan = 2017;
    mhs1.prodi = "PTE";
    mhs1.ipk = 3.15;
    mhs1.dhs1 = dhs1;

    // Menampilkan data yang disimpan pada anggota objek struct mhs1
    cout << "# Data Mahasiswa #" << endl;
    cout << "1. NIM: " << mhs1.nim << endl;
    cout << "2. Nama: " << mhs1.nama << endl;
    cout << "3. Gender: " << mhs1.gender << endl;
    cout << "4. Asal: " << mhs1.asal << endl;
    cout << "5. Usia: " << mhs1.usia << endl;
    cout << "6. Angkatan: " << mhs1.angkatan << endl;
    cout << "7. Prodi: " << mhs1.prodi << endl;
    cout << "8. IPK: " << mhs1.ipk << endl;
    cout << "9. Data Hasil Studi: " << endl;
    cout << "\tNo: " << mhs1.dhs1.no << endl;
    cout << "\tMata Kuliah: " << mhs1.dhs1.mataKuliah << endl;
    cout << "\tSKS: " << mhs1.dhs1.sks << endl;
    cout << "\tNilai Huruf: " << mhs1.dhs1.nilaiHuruf << endl;
    cout << "\tNilai Angka: " << mhs1.dhs1.nilaiAngka << endl;
    cout << "\tTahun: " << mhs1.dhs1.tahun << endl;
    cout << "\tSemester: " << mhs1.dhs1.semester << endl;

    return 0;
}
