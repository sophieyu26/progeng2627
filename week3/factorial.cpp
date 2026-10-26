#include <iostream>

int main(){
    int n, i, acc = 1;
    std::cin >> n;
    if (n < 0){
        std::cout << "undefined" << std::endl;
    }
    else {
        if (n == 0){
            acc = 1;
        }
        else for (int i = 0; i < n; i++){
            acc = acc * (n - i);
        }
        std::cout << "the factorial of n is " << acc << std::endl;
    }
}