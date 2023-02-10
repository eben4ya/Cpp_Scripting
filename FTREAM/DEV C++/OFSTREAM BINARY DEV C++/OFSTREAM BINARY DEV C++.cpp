#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream myFile;
    string identitas = "Benaya Imanuela prodi Teknologi Informasi Universitas Gadjah Mada";
    myFile.open("bakugo.bin", ios:: out | ios::binary);
    myFile.write(reinterpret_cast<char*>(&identitas), sizeof(identitas));
    myFile.close();

    return 0;
}
