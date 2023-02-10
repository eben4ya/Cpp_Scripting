#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    /* jagat koding
    ifstream myFile("ichinose.txt");
    string output;
    
    if(myFile.is_open()){
        while(getline(myFile, output)){
            cout << output << endl;
        } myFile.close();
    } else{
        cout << "File tidak ditemukan" << endl;
     } */

     // kelas terbuka
     ifstream myFile;
     string identitas;
     myFile.open("ichinose.txt");
     while(!myFile.eof()){
        getline(myFile, identitas);
        cout << identitas << endl;
     }

    return 0;
}