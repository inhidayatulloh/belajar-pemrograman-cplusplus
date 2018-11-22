#include <iostream>
#include <limits>

using namespace std;

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

int main() {
    // Deklarasi objek struct
    mahasiswa mhs1;

    // Deklarasi dan inisialisasi pointer struct
    mahasiswa * pmhs1 = &mhs1;

    cout << "#1. Masukkan Data Mahasiswa" << endl;
    // Mengisi data ke anggota objek struct melalui pointer
    cout << "NIM: ";
    cin >> pmhs1->nim;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "Nama: ";
    cin >> pmhs1->nama;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "Gender: ";
    cin >> pmhs1->gender;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "Asal: ";
    cin >> pmhs1->asal;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "Usia: ";
    cin >> pmhs1->usia;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "Angkatan: ";
    cin >> pmhs1->angkatan;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "Prodi: ";
    cin >> pmhs1->prodi;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "IPK: ";
    cin >> pmhs1->ipk;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << endl;

    // Menampilkan data yang disimpan pada anggota objek struct melalui pointer
    cout << "#2. Menampilkan Data Mahasiswa" << endl;
    cout << "NIM: " << pmhs1->nim << endl;
    cout << "Nama: " << pmhs1->nama << endl;
    cout << "Gender: " << pmhs1->gender << endl;
    cout << "Asal: " << pmhs1->asal << endl;
    cout << "Usia: " << pmhs1->usia << endl;
    cout << "Angkatan: " << pmhs1->angkatan << endl;
    cout << "Prodi: " << pmhs1->prodi << endl;
    cout << "IPK: " << pmhs1->ipk << endl << endl;

    return 0;
}
