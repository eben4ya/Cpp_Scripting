#include <iostream> 

using namespace std;

int main(){
    cout << "Program Range Nilai Siswa" << endl << endl;

    int nilai[10];
    for(int i = 0; i <= 10; i++){
        if(i == 0){
            cout << "0 - 9   : ";
        }else if(i == 10){
            cout << "100     : ";
        }else{
            cout << i*10 << " - " << i*10 + 9 << " : ";
        } cin >> nilai[i];
    }
	
    cout << "\nNilai Siswa dalam Grafik" << endl << endl;

    for(int i = 0; i <= 10; i++){
        if(i == 0){
            cout << "0 - 9   : ";
        }else if(i == 10){
            cout << "100     : ";
        }else{
            cout << i*10 << " - " << i*10 + 9 << " : ";
        }

        for(int bintang = 0; bintang < nilai[i]; bintang++){
            cout << "* ";
        }cout << endl;
    }

    return 0;
}
