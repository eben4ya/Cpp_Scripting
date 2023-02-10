#include <iostream>

using namespace std;

/* latihan fungsi, void dan prototipe
int kuadrat(int x);
void tampilkan(int input);

int main ()
{
	int n, hasil;
	cout << "masukkan nilai n: "; cin >> n;
	hasil = kuadrat(n);
	cout << kuadrat(n) << endl;
	tampilkan(hasil);
	
}

int kuadrat(int x){
	return x*x;
}
void tampilkan(int input){
	cout << input << endl;
}*/



/* latihan luas dan keliling segi empat
double hitung_luas(int p, int l){
	return p*l;
}

double hitung_keliling(int p, int l){
	return 2*(p+l);
}

void tampilkan_luas(int p, int l){
	cout << "luasnya adalah " << endl;
	cout << "menggunakan void" << endl;
	cout << hitung_luas(p,l) << endl;
}

void tampilkan_keliling(int p, int l){
	cout << "kelilingnya adalah"  << endl;
	cout << "menggunakan void" << endl;
	cout << hitung_keliling(p,l);
}

int main (){
	int p,l;
	cout << "masukkan panjang : "; cin >> p;
	cout << "masukkan lebar : "; cin >> l;
	
	tampilkan_luas(p,l);
	tampilkan_keliling(p,l);
	
	return 0;
}*/



/* scope variabel
int x = 10; // variabel global

int ambil_global(){ // ambil variabel global
	return x;
}

int x_local(int x = 5) { // variabel local scopenya x_local
	// sama aja int x = 5;
	return x;
}

int main ()
{
	cout << "variabel global : " << x << endl;
	int x = 8; // variabel local untuk main
	cout << "variabel local main : " << x << endl;
	cout << "variavel global : " << ambil_global() << endl;
	cout << "variabel local main : " << x << endl;
	cout << "variabel local x_local : " << x_local() << endl;
	cout << "variabel local main : " << x << endl;
	{
		cout << "variabel local main : " << x << endl;
		int x = 1; // block scope (looping)
		cout << "variabel block scope : " << x << endl;
		cout << "variabel global : " << ambil_global() << endl;
		cout << "variabel local x_local : " << x_local() << endl; 
	}
	cout << "variabel local main : " << x << endl;
	
	return 0;
}*/



/* fungsi dengan default
int volume (int p = 1, int l = 1, int t = 1);

int main()
{	
	cout << volume(2,5,6) << endl;
	cout << volume(2,4) << endl;
	cout << volume (10) << endl;
	cout << volume() << endl;
	
	return 0;
}

int volume (int p, int l, int t){
	return p*l*t;
}*/



/* fungsi overloading
int luas(int p, int l, int t){
	return p*l*t;
}

int luas(int p, int l){
	return p*l;
}

double luas(double p, double l){
	return p*l;
}

int main()
{
	cout << luas(2,3,4) << endl;
	cout << luas(5,6) << endl;
	cout << luas(3.5,2.5) << endl;
	
	return 0;
}*/



/* fungsi rekursif
int iterasi(int a, int b){
	int hasil = a;
	for (int i = 1; i < b; i++){
		hasil = a*hasil;
	} 
	return hasil;
}

int rekursi(int a, int b){
	if (b == 1){
		return a;
	}else {
		return a*rekursi(a,b-1);
	}
}

int main(){
	int a,b;
	cin >> a; cin >> b;
	
	cout << iterasi(a,b) << endl;
	cout << rekursi(a,b) << endl;
}*/
