#include <iostream>
#include <string>

using namespace std;

int main(){
	
	//library substring untuk mengambil kata
	string kata("Benaya Imanuela Honami Hoshinoya ");
	cout << kata.substr(7,8) << endl;
	
	//library find untuk mencari posisi
	int a = kata.find("ya");
	cout << a << " ";
	cout << kata.find("ya", a + 1) << endl;
	
	//library swap untuk menukar
	string kata1("Benaya Imanuela");
	string kata2("Ichinose Honami");
	kata1.swap(kata2);
	cout << kata1 << endl;
	cout << kata2 << endl;
	
	//library replace untuk menggantikan
	cout << kata.replace(7,8,"pacarnya") << endl;
	
	//ibrary insert untuk menambahkan
	int y = kata.find(" ");
	cout << y << " ";
	y = kata.find(" ", y + 1); 
	cout << y << " "; 
	y = kata.find(" ", y + 2); 
	cout << y << " "; 
	y = kata.find(" ", y + 3); 
	cout << y << endl; 
	
	cout << kata.insert(y, " hehe");
	
	cin.get();
	return 0;
	
}
