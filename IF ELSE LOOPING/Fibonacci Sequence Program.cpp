#include <iostream>

using namespace std;

/* fibonacci for
int main ()
{
	cout << "Program Deret Fibonacci" << endl;
	cout << "===============================" << endl;
	
	int n, f_n, f_n1 = 1, f_n2 = 0;
	
	cout << "Masukkan deret ke-n : "; cin >> n;
	cout << f_n1 << " ";
	for (int i = 1; i < n; i++){
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		
		cout << f_n << " ";
	}
}*/

// fibonacci do while
int main ()
{
	cout << "Program Deret Fibonacci" << endl;
	cout << "===============================" << endl;
	
	int n, f_n, f_n1 = 1, f_n2 = 0, i = 1;
	
	cout << "Masukkan deret ke-n : "; cin >> n;
	cout << f_n1 << " ";
	do{
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";
	
		i++;
			
	}while(i < n);
}

/* fibonacci while
int main ()
{
	cout << "Program Deret Fibonacci" << endl;
	cout << "===============================" << endl;
	
	int n, f_n, f_n1 = 1, f_n2 = 0, i = 1;
	
	cout << "Masukkan deret ke-n : "; cin >> n;
	cout << f_n1 << " ";
	while (i < n){
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";
	
		i++;
	}
}*/
