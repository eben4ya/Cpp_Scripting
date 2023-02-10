#include <iostream>

using namespace std;

void pointer(int *);
void reference(int &);

int main()
{
	int a = 10;
	
	pointer(&a);
	reference(a);
	
	return 0;
}

void pointer(int *aPtr){
	cout << "adress a : " << aPtr << endl;
	cout << "nilai a  : " << *aPtr << endl;
}

void reference(int &b){
	cout << "address b : " << &b << endl;
	cout << "nilai b   : " << b << endl;
}
