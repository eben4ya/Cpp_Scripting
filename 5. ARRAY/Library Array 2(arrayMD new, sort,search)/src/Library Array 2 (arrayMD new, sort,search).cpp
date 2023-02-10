#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const int arraySize = 10;

void printArray(array <int, arraySize> nilaiArray = {9,3,4,0,7,1,5,8,2,6}){
    for(int nilai : nilaiArray){
        cout << nilai << " ";
    } cout << endl;
}

int main(){
    array <int, arraySize> nilaiArray = {9,3,4,0,7,1,5,8,2,6};
    cout << "Nilai awal     : "; 
    printArray(nilaiArray); cout << endl; 

    sort(nilaiArray.begin(), nilaiArray.end());
    cout << "Sorting        : ";
    printArray(nilaiArray); cout << endl;

    int cariAngka; bool ketemu;
    cout << "Masukkan angka : ";
    cin >> cariAngka;
    ketemu = binary_search(nilaiArray.begin(), nilaiArray.end(), cariAngka);
    if(ketemu){
        cout << "Angka ditemukan" << endl;
    }else{
        cout << "Angka tidak ditemukan" << endl;
    }

    return 0;
}