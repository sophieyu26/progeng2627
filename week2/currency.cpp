#include <iostream>

int main(){
    double pounds, rate;
    std::cout << "Enter amount of money in British pounds:" << std::endl;
    std::cin >> pounds;
    std::cout << "Enter the current exchange rate to Euros:" << std::endl;
    std::cin >> rate;
    std::cout << "Amount in Euros: " << pounds*rate << std::endl;
}