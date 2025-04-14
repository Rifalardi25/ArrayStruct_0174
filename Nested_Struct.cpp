#include <iostream>
#include <string>
using namespace std;

struct Skill{
    string Skill1;
    string Skill2;
    string Skill3;

};

struct Hero{
    string Nama;
    string Role;
    string Tipe;
    Skill Skillhero;
};

int main()
{
    Hero arhero[3];

    for (int i = 0; i < 3; i++)
    {
    cout << "Hero Ke-" << i + 1 << endl;
    cout << "Masukkan Nama Hero = ";
    getline(cin, arhero[i].Nama);
    cout << "Masukkan Jenis Role = ";
    getline(cin, arhero[i].Role);
    cout << "Masukkan Tipe Hero = ";
    cin >> arhero[i].Tipe; 
    cin.ignore();

    cout << "Masukkan Skill 1 = ";
    getline(cin, arhero[i].Skillhero.Skill1);
    cout << "Masukkan Skill 2 = ";
    getline(cin, arhero[i].Skillhero.Skill2);
    cout << "Masukkan Skill 3 = ";
    getline(cin, arhero[i].Skillhero.Skill3);

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