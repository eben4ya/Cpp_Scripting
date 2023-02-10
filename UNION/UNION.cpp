#include <iostream>

using namespace std;

union coba{
	int a;
	char b[4];
};

int main()
{
	/* Percobaan 1 : 
	coba coba1;
	coba1.a = 1234;
	coba1.b[0] = 'a';
	coba1.b[1] = 'b';
	coba1.b[2] = 'c';
	coba1.b[3] = 'd'; 
	
	cout << coba1.a << endl;
	cout << coba1.b << endl; \*/
	
	// kesimpulan : 
	// struct : terdiri dari berbagai komponen tipe data
	// union : terdiri dari berbagai bentuk, bisa jadi int, char, dll (addressnya sama, pake yang paling besar)
	
	coba coba1;
	coba1.a = 1234;
	
	cout << coba1.a << endl;
	cout << coba1.b << endl;
	
	coba1.b[0] = 'a';
	coba1.b[1] = 'b';
	coba1.b[2] = 'c';
	coba1.b[3] = 'd';
	
	cout << coba1.a << endl;
	cout << coba1.b << endl;
	
	return 0;
}
