#include <iostream>

int main(){
    int n, c, c2 = 0;
    std::cin >> n;
    while (c2 < n){
        c = 0;
        while (c < n){
            std::cout << "*";
            c = c + 1;
        }
        std::cout << std::endl;
        c2 = c2 + 1;
    }
}