// #include <iostream>
// #include "Ben.h"

// void fungsi(){
//     std::cout << "Ini adalah void si main" << std::endl;
// }

// int main()
// {
//     fungsi();
//     std::cout << benaya::b << std::endl;
//     benaya::fungsi();
//     benaya::cout(100);
//     return 0;
// }

//using namespace

#include <iostream>
#include "Ben.h"

void fungsi2(){
    std::cout << "Ini adalah void si main" << std::endl;
}

using namespace benaya;

int main()
{
    fungsi2(); // ditambah '2' biar nama voidnya engga ambigu kaya punya si benaya
    std::cout << b << std::endl;
    fungsi();
    cout(100);
    return 0;
}
