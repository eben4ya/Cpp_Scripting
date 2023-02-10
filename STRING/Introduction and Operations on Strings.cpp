#include <iostream>
#include <string>

using namespace std;

int main(){
	
	cout << "Pengenalan String : " << endl;
	char kata0[6] = {'b','e','n','a','y','a'};
	cout << kata0 << endl;
	
	string kata1("Benaya");
	cout << kata1 << endl;
	
	string kata2 = "benayA";
	cout << kata2 << endl << endl;
	
	cout << "Operasi String : " << endl;
	cout << "1. Menampilkan data string : " << endl;
	string kata3("Ichinose");
	cout << kata3 << endl;
	cout << "2. Mengambil char berdasarkan index : " << endl;
	/* bisa juga 
	int z = 1;
	for(int i = o; i < 8; i++){
	cout << "huruf ke-" << z << " = " << kata3[i] << endl;
		z++;
	} */
	char kata4[] = {'h','o','n','a','m','i'}; int z = 1;
	for(int i = 0; i < sizeof(kata4)/sizeof(*kata4); i++){
		cout << "huruf ke-" << z << " = " << kata4[i] << endl;
		z++;
	}
	cout << "3. Mengubah char pada index : " << endl;
	kata3[1] = 'a'; kata3[3] = 'z';
	cout << kata3 << endl;
	// Menyambungkan / Concatenation
	cout << "4. Menyambungkan string (gabung) :" << endl;
	string kata5(kata1 + " yasasi");
	cout << kata5 << endl;
	cout << "5. Menyambungkan string ke.1 (spasi) : " << endl;
	kata3.append(" " + kata1 + " sekali");
	cout << kata3 << endl;
	cout << "6. Menyambungkan string ke.2 (spasi) : " << endl;
	kata1 += " Imanuela " + kata3;
	cout << kata1 << endl;
	
	return 0;
}
