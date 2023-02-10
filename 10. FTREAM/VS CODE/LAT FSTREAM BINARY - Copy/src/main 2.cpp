#include <iostream>
#include <fstream>

using namespace std;

struct Mahasiswa{
    int nama;
    int NIM;
    float IPK;
};

Mahasiswa ambilData(int posisi,fstream &myFile){
    Mahasiswa buffer;
    myFile.seekp((posisi-1)*sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&buffer), sizeof(Mahasiswa));
    return buffer;
}

int main()
{
    fstream myFile;
    myFile.open("data.bin", ios::in | ios::binary);
    Mahasiswa dataBaca;
    int posisi = 3;
    dataBaca = ambilData(posisi, myFile);
    cout << dataBaca.nama << endl;
    cout << dataBaca.NIM << endl;
    cout << dataBaca.IPK << endl;

    myFile.close();
    return 0;
}