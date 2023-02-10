#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream myFile;
    int a = 56595597;
    myFile.open("deku.bin", ios:: out | ios::binary);
    myFile.write(reinterpret_cast<char*>(&a), sizeof(a));
    myFile.close();

    return 0;
}