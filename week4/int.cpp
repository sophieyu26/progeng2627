#include <iostream>

void division(int a, int b, int& quo, int& rem){
    quo = a / b;
    rem = a % b;
}

int main(){
    int a = 7, b = 3, quo, rem;
    division(a, b, quo, rem);
    std::cout << (quo == 2) << std::endl;
    std::cout << (rem == 1) << std::endl;

    a = 43, b = 17;
    division(a, b, quo, rem);
    std::cout << (quo == 2) << std::endl;
    std::cout << (rem == 9) << std::endl;
}