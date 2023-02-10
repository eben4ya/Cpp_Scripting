#include <iostream>
#include <fstream>

using namespace std; 

struct Mahasiswa{
    int nama;
    int NIM;
    float IPK;
};

Mahasiswa ambilData(int posisi, fstream &myFile){
    Mahasiswa buffer;
    myFile.seekp((posisi-1)*sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&buffer), sizeof(Mahasiswa));
    return buffer;
}

void tulisData(Mahasiswa buffer, fstream &myFile){
     myFile.write(reinterpret_cast<char*>(&buffer), sizeof(Mahasiswa));
}

void ubahData(int posisi, Mahasiswa buffer, fstream &myFile){
    myFile.seekg((posisi-1)*sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&buffer), sizeof(Mahasiswa));
}

int main()
{
    fstream myFile;
    myFile.open("data.bin", ios::out | ios::in | ios:: trunc | ios::binary);
    Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, tampilkanMahasiswa;

    mahasiswa1.nama = 1;
    mahasiswa1.NIM = 2;
    mahasiswa1.IPK = 2.68;

    mahasiswa2.nama = 4;
    mahasiswa2.NIM = 5;
    mahasiswa2.IPK = 2.34;

    mahasiswa3.nama = 7;
    mahasiswa3.NIM = 8;
    mahasiswa3.IPK = 3.08;

    tulisData(mahasiswa1, myFile);
    tulisData(mahasiswa2, myFile);
    tulisData(mahasiswa3, myFile);

    mahasiswa2.nama = 4444;
    ubahData(2, mahasiswa2, myFile);

    int posisi = 2;
    tampilkanMahasiswa = ambilData(posisi, myFile);
    cout << tampilkanMahasiswa.nama << endl;
    cout << tampilkanMahasiswa.NIM << endl;
    cout << tampilkanMahasiswa.IPK << endl;

    myFile.close();

    return 0;
}