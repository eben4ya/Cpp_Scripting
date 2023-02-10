#include <iostream>
#include <string>

using namespace std;

int main()
{
	/* Program 1
	cout << "Babak 1 Program Tebak Nama" << endl;
	cout << "========================" << endl;
	string nama("benaya");
	string tebakNama;
	while(true){
		cout << "Tebak nama : "; cin >> tebakNama;
		if(tebakNama == nama){
			cout << "Selamat ! Anda benar !" << endl;
			break;
		}else{
			cout << "Tebakan anda salah" << endl;
		}
	} */
	
	//Program 2
	string kata;
	cout << "Babak 2 Program Jumlah kata" << endl;
	cout << "========================" << endl;
	cout << "Masukkan kalimat : ";
	getline(cin, kata);
	
	int posisi = 0;
	int jumlah = 0;
	while(true){
		posisi = kata.find(" ", posisi + 1);
		jumlah++;
		if(posisi < 0){
			break;
		}
		
	}
	
	cout << "Jumlah kata : " << jumlah << endl;
	
	return 0;
}

