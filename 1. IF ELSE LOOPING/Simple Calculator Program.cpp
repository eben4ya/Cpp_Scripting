#include <iostream>

using namespace std;

/* if else if
int main ()
{
	cout << "Selamat datang di Program Kalkulator Sederhana" << endl;
	int a, b, hasil;
	char operasi;
	
	cout << "\nMasukkan nilai a : "; cin >> a;
	cout << "Masukkan operasi (+, -, *, /, %) : "; cin >> operasi;
	cout << "Masukkan nilai b : "; cin >> b;
	
	cout << "\nHasil : " << endl;
	if (operasi == '+'){
		hasil = a + b;
		cout << a << " + " << b << " = " << hasil << endl;
	} else if (operasi == '-'){
		hasil = a - b;
		cout << a << " - " << b << " = " << hasil << endl;
	} else if (operasi == '*'){
		hasil = a * b;
		cout << a << " x " << b << " = " << hasil << endl;
	} else if (operasi == '/'){
		hasil = a / b;
		cout << a << " / " << b << " = " << hasil << endl;
	} else {
		hasil = a % b;
		cout << a << " % " << b << " = " << hasil << endl;
	}
	
	cout << "Program selesai" << endl;
	
	return 0;
	
} */ 

int main ()
{
	cout << "Selamat datang di Program Kalkulator Sederhana" << endl;
	int a, b, hasil;
	char operasi;
	
	cout << "\nMasukkan nilai a : "; cin >> a;
	cout << "Masukkan operasi (+, -, *, /, %) : "; cin >> operasi;
	cout << "Masukkan nilai b : "; cin >> b;
	
	cout << "\nHasil : " << endl;
	switch (operasi){
		case '+' :
			hasil = a + b;
			cout << a << " + " << b << " = " << hasil << endl;
			break;
		case '-' :
			hasil = a - b;
			cout << a << " - " << b << " = " << hasil << endl;
			break;
		case '*' :
			hasil = a * b;
			cout << a << " x " << b << " = " << hasil << endl;
			break;
		case '/' :
			hasil = a / b;
			cout << a << " / " << b << " = " << hasil << endl;
			break;
		case '%' :
			hasil = a % b;
			cout << a << " % " << b << " = " << hasil << endl;
			break;
		default :
			cout << "ini kalkulator sederhana bozz, gaada gituan hehe" << endl;
	}
			
	cout << "Program selesai" << endl;
	
	return 0;
}

