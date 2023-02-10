#include <iostream>

#define PI 3.14598
#define BAHASA "Indonesia"
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > 	B) ? A : B)
 
using namespace std;

int main (){
	
	cout << "PI      : " << PI << endl;
	cout << "Bahasa  : " << BAHASA << endl;
	cout << "Kuadrat : " << KUADRAT(5) << endl;
	cout << "Max     : " << MAX(5,9) << endl;
	
	#undef BAHASA
	#define BAHASA "Inggris"
	
	cout << "Bahasa  : " << BAHASA << endl;
	
	return 0;
}
