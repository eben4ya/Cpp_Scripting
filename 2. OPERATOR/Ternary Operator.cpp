#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Ternary operator
	while(true){
	int a = 5, b;
	cout << "Masukkan angka : "; cin >> b;
	
	string hasil1("Benaya"), hasil2("Ichinose"), output;
	
	output = (a < b) ? hasil1 : hasil2; // kalau bener = hasil1, kalau salah = hasil2
	
	cout << output << endl;
	}
	
	return 0;
}
