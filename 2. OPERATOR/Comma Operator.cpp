#include <iostream>

using namespace std;

void print(int value){
	cout << value << endl;
}

int main()
{
	
	int a, b,c;
	a = (b = 2, print(b), c = 4, print(c), (b - c)); // eror kalau tipe data dimasukin => a = (int b = 4, int c = 8, (a + b));
	
	cout << a << endl;
	
	return 0;
}
