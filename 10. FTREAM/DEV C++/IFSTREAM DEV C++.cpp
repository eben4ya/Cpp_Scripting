#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream myFile;
    myFile.open("data.txt");
    string output, buffer, nama;
    float IPK, jumlah_data;
    bool isData = false;

    while(!isData){ //while(true)
        getline(myFile, buffer);
        output.append("\n" + buffer);
        if(buffer == "Data :" ){
            isData = true; // break;
        }
    }  cout << output << endl;

    getline(myFile, buffer);
    cout << buffer << endl;
    while(!myFile.eof()){
        myFile >> IPK;
        myFile >> nama;

        cout << IPK << "\t" << nama << endl;

        jumlah_data ++;
    }

    cout << "Jumlah data : " << jumlah_data << endl;

    myFile.close(); 

    return 0;
}
