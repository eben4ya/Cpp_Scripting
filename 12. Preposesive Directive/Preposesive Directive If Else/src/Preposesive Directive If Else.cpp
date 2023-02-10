//include <iostream>

#define ID 1

#if ID == 1 
    #define LANG "Indonesia"
#else 
    #define LANG "Inggris"
#endif 

using namespace std;

int main ()
{
    cout << "Bahasa yang dipilih : " << LANG << endl;
    return 0; 
}

// g++ -std=gnu++17 .\src\*.cpp -o main.p