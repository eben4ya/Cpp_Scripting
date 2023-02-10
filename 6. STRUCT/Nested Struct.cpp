#include <iostream>

using namespace std;

struct aktor{
	string nama;
	int tahun_lahir;
};

struct film{
	string judul;
	string genre;
	int tahun;
	aktor pemeran_1;
	aktor pemeran_2;
};

int main(){
	film film1; 
	cout << "Masukkan judul film   : "; cin >> film1.judul;
	cout << "Masukkan genre film   : "; cin >> film1.genre;
	cout << "Masukkan tahun film   : "; cin >> film1.tahun;
	cout << "Masukkan nama aktor 1 : "; cin >> film1.pemeran_1.nama;
	cout << "Masukkan tgl lahir    : "; cin >> film1.pemeran_1.tahun_lahir;
	cout << "Masukkan nama aktor 2 : "; cin >> film1.pemeran_2.nama;
	cout << "Masukkan tgl lahir    : "; cin >> film1.pemeran_2.tahun_lahir;
	
	cout << "\n==========================" << endl;
	cout << "Hasil : " << endl;
	cout << film1.judul << endl;
	cout << film1.genre << endl;
	cout << film1.tahun << endl;
	cout << film1.pemeran_1.nama << endl;
	cout << film1.pemeran_1.tahun_lahir << endl;
	cout << film1.pemeran_2.nama << endl;
	cout << film1.pemeran_2.tahun_lahir << endl;
	
	return 0;
}
