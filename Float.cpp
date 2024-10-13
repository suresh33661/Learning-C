#include <iostream>
#include <iomanip>

int main (){
    float a = 2.1234567891213f; // we extended 6 digits to 15 by using precision of iomanip library
    std::cout << "the value in :" << std::setprecision(15) << a << std::endl;
    return 0;
}