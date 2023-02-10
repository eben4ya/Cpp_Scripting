#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int angka, sisa; string temp, hasil;
    cout << "Program Desimal ke Biner" << endl;
    cout << "========================" << endl;
    cout << "Masukkan angka : "; cin >> angka;
    for(int i = angka; i > 0; i /= 2){
        sisa = i % 2;
        stringstream bit;
        bit << sisa;
        bit >> temp;
        hasil += temp;
    } 
    for(int z = hasil.length(); z >= 0; z--){
        cout << hasil[z];
    } cout << endl;
    
    return 0;
}