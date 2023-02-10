// macam - macam eror di c++
// 1. syntax error : lupa ; atau () / "" / {}

// 2. linking error : 
// void b(int b);

// int main(){
//     b(5); // belum dijabarkan, baru dideklarasikan
// }

// 3. non-eror :
// int luas(int p, int l){
//     return p*l
// }

// int main(){
//     std::cout << luas(-5,4); // masak minus? Logic eror
// }

// 4. run time code error // eror saat program berjalan
// #include <iostream>
// #include <array>

// int main(){
//     std::array<int,5> a = {0,1,2,3,4};
//     std::cout << a.at(5) << std::endl; // out of range

//     return 0;
// }

#include <iostream>
#include <exception>

using namespace std;

int pembagi(int &pembilang, int &penyebut){
    if(penyebut == 0){
        // throw "Error bro : penyebut gaboleh 0";
        throw overflow_error ("Error bro : penyebut gaboleh 0");
    }
    return pembilang/penyebut;
}

int main()
{
    int a;
    int b;

    while(true){
        cout << "Masukkan pembilang : "; cin >> a;
        cout << "Masukan penyebut   : "; cin >> b;

        try{
            int c = pembagi(a,b);
            cout << c << endl;
        // }catch(const char* e){
        }catch(exception &e){
            // cout << e << endl;
            cout << e.what() << endl;
        }
        char lanjut;
        cout << "Lanjutkan (y/n) : "; cin >> lanjut;
        if(lanjut == 'y' || lanjut == 'Y'){

        }else if(lanjut == 'n' || lanjut == 'N'){
            break;
        }
    }

    cout << "Program Selesai" << endl;

    return 0;
}

// note :
// try = coba aja dulu, eror atau ngga belakangan
// throw = udah tau bakal eror, so di throw, untuk ditangkap dan dieksekusi oleh catch
// catch = menangkap eror baik sendiri ataupun dari throw

// untuk diriku dimasa depan, nggeh ngga cok akowkow ?