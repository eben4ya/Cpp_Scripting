#include <iostream>

using namespace std;

int main ()
{
	int n; cout << "nilai n : "; cin >> n;
	
	cout << "\nsegitiga 1\n";
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			cout << "*  ";
		} cout << endl;
	}
	
	cout << "\nsegitiga 2\n";
	for (int i = 1; i <= n; i++){
		for (int j = n; j >= i; j--){
			cout << "*  ";
		} cout << endl;
	}
	
	cout << "\nsegitiga 3\n";
	for (int i = 1; i <= n; i++){
		for (int j = 1; j < i; j++){
			cout << "   ";
		} 
		for (int j = n; j >= i; j--){
			cout << "*  ";
		} cout << endl;
	} 
	
	cout << "\nsegitiga 4\n";
	for (int i = 1; i <= n; i++){
		for (int j = n; j > i; j--){
			cout << "   ";
		} 
		for (int j = 1; j <= i; j++){
			cout << "*  ";
		} cout << endl;
	} 
	
	cout << "\nsegitiga 5\n";
	for (int i = 1; i <= n; i++){
		for (int j = 1; j < i; j++){
			cout << "   ";
		} 
		for (int j = 2*n; j > 2*i-1; j--){
			cout << "*  ";
		} cout << endl;
	} 
	
	cout << "\nsegitiga 6\n";
	for (int i = 1; i <= n; i++){
		for (int j = n; j > i; j--){
			cout << "   ";
		} 
		for (int j = 1; j <= 2*i-1; j++){
			cout << "*  ";
		} cout << endl;
	} 
	
	cout << "\nsegitiga 7\n";
	for (int i = 1; i <= n; i++){
		for (int j = n; j > i; j--){
			cout << "   ";
		} 
		for (int j = 1; j <= 2*i-1; j++){
			cout << "*  ";
		} cout << endl;
	} 
	
	for (int i = 2; i <= n; i++){
		for (int j = 1; j < i; j++){
			cout << "   ";
		} 
		for (int j = 2*n; j > 2*i-1; j--){
			cout << "*  ";
		} cout << endl;
	} 
	
	return 0;
}
