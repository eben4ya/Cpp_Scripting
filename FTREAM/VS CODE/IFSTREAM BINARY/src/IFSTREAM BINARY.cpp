#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream myFile;
    int identitas;
    myFile.open("deku.bin", ios::in | ios::binary);
    myFile.read(reinterpret_cast<char*>(&identitas), sizeof(identitas));
    cout << "Besar Int : " << sizeof(identitas) << endl;
    cout << identitas << endl;
  
    return 0;
}