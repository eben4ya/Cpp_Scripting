#include <iostream>

using namespace std;

int main()
{
    typedef unsigned int I; // I = unsigned int
    I angka = 5;
    cout << angka << endl;

    typedef string nama; // nama = string
    nama mahasiswa = "Benaya Imanuela";
    cout << mahasiswa << endl;

    typedef double J[2]; //J[2] = double
    J array = {10.5, 11.789};
    cout << array[0] << " " << array[1] << endl;

    using K = double; // K = double
    K angka2 = 10.5;
    cout << angka2 <<  endl; 
    return 0;
}
