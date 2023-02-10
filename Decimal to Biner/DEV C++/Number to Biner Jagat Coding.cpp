#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int angka, sisa; string toString, hasil;
	cout << "Program Konversi Angka ke Biner" << endl;
	cout << "===============================" << endl;
	cout << "Masukkan angka : "; cin >> angka;
	for(int i = angka; i > 0; i /= 2){
		stringstream bit;
		sisa = i % 2;
		bit << sisa;
		bit >> toString;
		hasil += toString;
		angka = angka / 2;
	} 
	for (int z = (hasil.length()-1); z >= 0; z--){
		cout << hasil[z];
	} cout << endl;
	
	
	/* Konversi int ke string, sebaliknya juga bisa
	int a = 10;
	string b;
	stringstream bit;
	bit << a;
	bit >> b;
	
	cout << a + a << endl;
	cout << b + b << endl; 
	*/
	
	return 0;
}
