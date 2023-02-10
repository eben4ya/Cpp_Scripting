#include <iostream>
#include <array>

using namespace std;

int main()
{
    // deklarasi n looping array new
    array <int, 5> nilaiArray = {1,2,3,4,5};
    for(int nilai : nilaiArray){
        cout << nilai << " ";
    }cout << endl;

    // deklarasi n looping array MD
    const int baris = 2; const int kolom = 2;
    array < array < int, baris>, kolom > arrayMD = {1,2,3,4};
    for(array < int, baris> kolom : arrayMD){
        for(int baris : kolom){
             cout << baris << endl;
        }
    }

    return 0;
}