#include <iostream>

using namespace std;

template<typename T> // typename T menyesuaikan tipe data inputannya
void print(T data){
    cout << data << endl; 
}

template<typename T> // gausah dikasih casting juga hasilnya int
int toInt(T data){
    return int(data);
}

template<typename T, typename J /*, typename P*/>
/*P max(T a, J b) gabisa karena hanya berlaku inputan, fungsi gabisa, solusinya pake auto*/ 
    T max(T a, J b){
    return (a > b) ? a : b;
}


int main()
{
    print(5);
    print(11.89);
    print("Benaya Imanuela");

    cout << toInt(10.56) << endl; // output = 10

    print(max(10, 11.8)); //output = 11, karena Tnya bertipe int

    //casting, ga terlalu guna, cuma bisa casting dari float/double ke int
    print<int>(19.89); // double/float ke int bisa, vice versa malah hasilnya tetep int
    print(max<double, int>(11.8, 12)); // output tipe datanya sesuai yg sudah dideklarasikan di < ... >


    return 0;
}
