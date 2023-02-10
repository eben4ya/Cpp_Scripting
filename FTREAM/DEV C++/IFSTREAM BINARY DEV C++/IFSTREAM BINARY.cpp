#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream myFile;
	string identitas;
	myFile.open("deku.bin", ios::in | ios::binary);
	myFile.read(reinterpret_cast<char*>(&identitas), sizeof(identitas));
	cout << "Besar String : " << sizeof(identitas) << endl;
	cout << identitas << endl;
	
	return 0;
}
