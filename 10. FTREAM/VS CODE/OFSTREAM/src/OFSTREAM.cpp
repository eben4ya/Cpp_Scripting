#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /* ios::out = default, operasi output
       ios::app = menuliskan pada akhir baris
       ios::trunc = default, membuat file jika tidak ada, dan kalau ada dihapus dan dibuat baru
       ios::binary = membuat file binary
    */

    ofstream myFile; 
    string data_1, data_2, data_3;
    myFile.open("data 1.txt", ios::out);
    getline(cin, data_1);
    myFile << "\n" << data_1; // myFile << "\n" + data_1; juga bisa
    myFile.close();

    myFile.open("data 2.txt", ios::app);
    getline(cin, data_2);
    myFile << "\n" << data_2; // myFile << "\n" + data_2; juga bisa
    myFile.close();

    myFile.open("data 3.txt", ios::trunc);
    getline(cin, data_3);
    myFile << "\n" << data_3; // myFile << "\n" + data_3; juga bisa
    myFile.close();


    return 0;
}