#include <iostream>
#include "library.h"

using namespace std;

int main ()
{
    cout << "Nilai PI : " << PI << endl;
    cout << "Nama 1   : " << nama1 << endl;
    cout << "Nama 2   : " << nama2 << endl;
    cout << "Test" << endl;
    #include "test.h"
    cout << "Angka 1  : " << angka1 << endl;
    cout << "Angka 2  : " << angka2 << endl;

    return 0; 
}

// g++ -std=gnu++17 .\src\*.cpp -o main.p