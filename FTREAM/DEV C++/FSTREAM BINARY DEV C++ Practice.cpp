#include <iostream>
#include <fstream>

using namespace std;

struct Mahasiswa{
    string nama;
    string NIM;
    float IPK;
};

int main()
{
    fstream myFile;
    myFile.open("data.bin", ios::in | ios::binary);
    Mahasiswa dataBaca;
    myFile.seekp(2*sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&dataBaca),sizeof(Mahasiswa));
    cout << dataBaca.nama << endl;
    cout << dataBaca.NIM << endl;
    cout << dataBaca.IPK << endl;

    myFile.close();
    return 0;
}
