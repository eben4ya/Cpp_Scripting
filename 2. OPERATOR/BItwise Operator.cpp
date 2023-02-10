#include <iostream>
#include <bitset>

using namespace std;

void printData(unsigned short val, string nama){
	cout << nama << " = " << bitset<8>(val) << endl;
}
int main()
{
	unsigned short a = 6;
	unsigned short b = 10;
	unsigned short c;
	
	cout << "& = Bitwise AND" << endl;
	c = a & b;
	printData(a,"a");
	printData(b,"b");
	printData(c,"c");
	cout << "c = " << c << endl << endl;
	
	cout << "| = Bitwise OR" << endl;
	c = a | b;
	printData(a,"a");
	printData(b,"b");
	printData(c,"c");
	cout << "c = " << c << endl << endl;
	
	cout << "^ = Bitwise XOR" << endl;
	c = a ^ b;
	printData(a,"a");
	printData(b,"b");
	printData(c,"c");
	cout << "c = " << c << endl << endl;
	
	cout << "~ = Bitwise NOT" << endl;
	c = ~a;
	printData(a,"a");
	printData(c,"c");
	cout << "c = " << c << endl << endl;
	
	cout << "<< = Shift Bits Left" << endl;
	c = a << 2;
	printData(a,"a");
	printData(c,"c");
	cout << "c = " << c << endl << endl;
	
	cout << ">> = Shift Bits Right" << endl;
	c = a >> 2;
	printData(a,"b");
	printData(c,"c");
	cout << "c = " << c << endl << endl;
	
	return 0;
}
