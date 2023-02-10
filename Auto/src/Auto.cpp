#include <iostream>

using namespace std;

template<typename T, typename U>
auto max (T a, U b){ //fungsinya harus auto juga, kalau T outputnya jadi int
    return (a > b) ? a : b;
}

int main()
{
    int a = 5;
    string b = "Benaya";
    char c = 'i';
    float d = 10.8;
    double e = 3.14568;
    auto f = max(4, 4.8); // hampir sama kaya template fungsi, cuma bisa buat fungsi

    cout << a << " bertipe data : " << typeid(a).name() << endl;
    cout << b << " bertipe data : " << typeid(b).name() << endl;
    cout << c << " bertipe data : " << typeid(c).name() << endl;
    cout << d << " bertipe data : " << typeid(d).name() << endl;
    cout << e << " bertipe data : " << typeid(e).name() << endl;
    cout << f << " bertipe data : " << typeid(f).name() << endl; // tipe data dipilih yang paling besar(double > float > int)

    return 0;
}

// versi C++ terbaru atau th. 2017 auto bisa kaya gini :
// template<auto T, typename U>
// auto max(T a, T b){
//     return (a > b) ? a : b;
// }
// Tapi belum tau digunakan untuk apa, mungkin kalo projectnya besar.
