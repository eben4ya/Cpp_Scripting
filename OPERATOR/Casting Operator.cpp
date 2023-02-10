#include <iostream>

using namespace std;

int main()
{
	int a = 6;
	float b = 6.67;
	char c = 'd';
	
	/* 1. hasil integer
	int hasil = a + b;
	cout << hasil << endl; */
	
	/* 2. hasil float
	float hasil = a + b;
	cout << hasil << endl; */
	
	/* 3. hasil int pake inputan char, d = 100
	int hasil = a + c;
	cout << hasil << endl; */
	
	/Casting operator
	// 1. hasil integer
	cout << a + (int)b << endl;
	// 2. hasil float
	cout << (float)a + b << endl;
	// 3. hasil char pake inputan int
	cout << (char)(a + c) << endl; // khusus char harus digabung (a + c)
	
	return 0;
}
