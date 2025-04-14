#include <iostream>
using namespace std;

struct Hero{
    string Nama;
    string Role;
    string Tipe;
};

int main()
{
    Hero arhero[3];

    for (int i = 0; i < 3; i++){
    cout << "Hero Ke-" << i + 1 << endl;
    cout << "Masukkan Nama Hero = ";
    cin >> arhero[i].Nama;
    cout << "Masukkan Jenis Role = ";
    cin >> arhero[i].Role;
    cout << "Masukkan Tipe Hero = ";
    cin >> arhero[i].Tipe;    
    }

    

    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "Menampilkan Hero Ke-" << i + 1 << endl;

    cout << "Nama Hero = " << arhero[i].Nama << endl;
    cout << "Role Hero = " << arhero[i].Role << endl;
    cout << "Tipe Hero = " << arhero[i].Tipe << endl;
    
    }
    
}