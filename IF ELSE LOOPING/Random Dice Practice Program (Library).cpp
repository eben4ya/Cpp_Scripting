#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main ()
{
	int a = 64, n; char acak_dadu;
	cout << sqrt(a) << endl;
	
	while (true)
	{
		cout << "acak dadu (y/n) : "; cin >> acak_dadu;
		
		if (acak_dadu == 'y'){
			cout << 1 + (rand() % 6) << endl;
		} else if (acak_dadu == 'n'){
			cout << "program selesai" << endl;
			break;
		} else {
			cout << "pilihannya salah kak, y atau n aja !\n" << endl;
		}
	}
	
	cout << "\nmasukkan n : "; cin >> n;
	for (int i = 0; i < n; i++){
		cout << rand() << endl;
	} 
	
	return 0;
}
