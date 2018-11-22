#include<iostream>
#include<limits>

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
    int jmlMahasiswa;
    cout << "#1. Input Jumlah Mahasiswa: ";
    cin >> jmlMahasiswa;

    mahasiswa mhs[jmlMahasiswa];

    cout << "\n#2. Masukkan Data Mahasiswa" << endl;
    for(int i=0; i<jmlMahasiswa; i++) {
        cout << "Mahasiswa ke-" << (i+1) << endl;

        cout << "NIM: ";
        cin >> mhs[i].nim;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << "Nama: ";
        cin >> mhs[i].nama;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << "Gender: ";
        cin >> mhs[i].gender;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << "Asal: ";
        cin >> mhs[i].asal;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << "Usia: ";
        cin >> mhs[i].usia;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << "Angkatan: ";
        cin >> mhs[i].angkatan;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << "Prodi: ";
        cin >> mhs[i].prodi;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << "IPK: ";
        cin >> mhs[i].ipk;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout << endl;
    }

    cout << "#3. Menampilkan Data Mahasiswa" << endl;
    for(int i=0; i<jmlMahasiswa; i++) {
        cout << "Mahasiswa ke-" << (i+1) << endl;
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "Gender: " << mhs[i].gender << endl;
        cout << "Asal: " << mhs[i].asal << endl;
        cout << "Usia: " << mhs[i].usia << endl;
        cout << "Angkatan: " << mhs[i].angkatan << endl;
        cout << "Prodi: " << mhs[i].prodi << endl;
        cout << "IPK: " << mhs[i].ipk << endl << endl;
    }

    return 0;
}
