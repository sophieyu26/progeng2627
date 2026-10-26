#include <iostream>

int main(){
    int n, i, c;
    std::cin >> n;
    for (c = 1; c < n + 1; c++){
        for (i = 1; i < n + 1; i++){
            std::cout << c * i << "\t";
        }
        std::cout << std::endl;
    }
}