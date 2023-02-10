#include <iostream>

using namespace std;

int rekursif(int a);
void tampilkanRekursif(int input);

int main()
{
	int n;
	cout << "Program Deret Fibonacci" << endl;
	cout << "================================" << endl;
	cout << "Masukkan n : "; cin >> n;
	
	tampilkanRekursif(n);
	
	return 0;
}

int rekursif(int a){
	
	if(a == 0 || a == 1){
		return a;
	}else{
		return rekursif(a-1) + rekursif(a-2);
	}
}

void tampilkanRekursif(int input){
	int hasil = rekursif(input);
	cout << hasil << endl;
}

