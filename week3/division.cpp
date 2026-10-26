#include <iostream>

int main(){
    int a, b, q = 0;
    std::cin >> a >> b;
    while (a > b){
        a = a - b;
        q = q + 1;
    }
    std::cout << "the quotient is " << q << std::endl;
    std::cout << "the remainder is " << a << std::endl;
}