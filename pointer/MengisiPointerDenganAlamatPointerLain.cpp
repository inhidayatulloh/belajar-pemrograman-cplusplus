#include<iostream>
using namespace std;

int main() {
    // Deklarasi variabel huruf dengan tipe data char
    char huruf;

    // Deklarasi pointer
    // Banyaknnya asterik (*) menunjukkan banyaknya level referensi alamat memori
    char * pointer1;
    char ** pointer2;
    char *** pointer3;

    // Mengisi huruf dengan karakter 'h'
    huruf = 'h';

    // pointer1 menyimpan alamat memori variabel huruf
    pointer1 = &huruf;

    // pointer2 menyimpan alamat memori pointer1
    pointer2 = &pointer1;

    // pointer3 menyimpan alamat memori pointer2
    pointer3 = &pointer2;

    cout << "Isi variabel huruf: " << huruf << endl;
    cout << "Alamat memori variabel huruf (&huruf): " << &huruf << endl << endl;

    // Alamat memori pada pointer1 yaitu alamat memori dari variabel huruf
    cout << "Alamat memori yang disimpan pada pointer1: " << pointer1 << endl;
    // Isi dari dari alamat memori pada pointer1 sama dengan isi variabel huruf, yaitu 'h'
    cout << "Isi dari alamat memori pada pointer1 (*pointer1): " << *pointer1 << endl;
    cout << "Alamat memori dari pointer1 (&pointer1): " << &pointer1 << endl << endl;

    // Alamat memori pada pointer2 yaitu alamat memori dari pointer1
    cout << "Alamat memori yang disimpan pada pointer2: " << pointer2 << endl;
    // Isi dari alamat memori yang disimpan pada pointer2 yaitu alamat memori yang disimpan pada pointer1
    cout << "Isi dari alamat memori yang disimpan pada pointer2 (*pointer2): " << *pointer2 << endl;
    // Isi dari isinya alamat memori yang disimpan pada pointer2 yaitu isi dari alamat memori yang disimpan pada pointer1
    cout << "Isi dari isinya alamat memori yang disimpan pada pointer2 (**pointer2): " << **pointer2 << endl;
    cout << "Alamat memori dari pointer2 (&pointer2): " << &pointer2 << endl << endl;

    // Alamat memori yang disimpan pada pointer3 yaitu alamat memori dari pointer2
    cout << "Alamat memori yang disimpan pada pointer3: " << pointer3 << endl;
    // Isi dari alamat memori yang disimpan pada pointer3 yaitu alamat memori yang disimpan pada pointer2
    cout << "Isi dari alamat memori yang disimpan pada pointer3 (*pointer3): " << *pointer3 << endl;
    // Isi dari isi alamat memori yang disimpan pada pointer3 yaitu alamat memori yang disimpan pada pointer1
    cout << "Isi dari isi alamat memori yang disimpan pada pointer3 (**pointer3): " << **pointer3 << endl;
    // Isi dari isinya isi alamat memori yang disimpan pada pointer3 yaitu isi dari alamat memori yang disimpan pada pointer1
    cout << "Isi dari isinya isi alamat memori yang disimpan pada pointer3 (***pointer3): " << ***pointer3 << endl;
    cout << "Alamat memori dari pointer3 (&pointer3): " << &pointer3 << endl;

    return 0;
}
