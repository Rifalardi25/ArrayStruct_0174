#include <iostream>
using namespace std;

string matkul[] = {"Pemrograman", "Algoritma"}; // Membuat array dengan ukuran yang tidak diketahui

float nilaiAkhir[2] = {1, 2.5}; // Membuat array dengan ukuran yang diketahui

char grade[5];

int main()
{
    cout << "Nama Matakuliah : " << matkul[1] << endl;
    matkul[0] = "Logika Teknik Pemrograman";
    cout << "Nama Matakuliah : " << matkul[0] << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "Nilai akhir ke" << i + 1 << "=" << nilaiAkhir[i] << endl;
    }

    cout << "Input Grade" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan Grade : ";
        cin >> grade[i];
    }

    cout << endl;
    cout << "Tampilkan Grade" << endl;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Grade ke-" << i + 1 << grade[i] << endl;
    }
}