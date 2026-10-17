#include <iostream>

int main(){
    double celsius;
    std::cout << "temperature in degree celsius:" << std::endl;
    std::cin >> celsius;
    std::cout << "temperature in degree fahrenheit: " << celsius * 9 / 5 + 32 << std::endl;
}