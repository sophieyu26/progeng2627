#include <iostream>

int main(){
    int x, n, i, acc = 1;
    std::cin >> x >> n;
    for (int i = 0; i < n; i++){
        acc = acc * x;
    }
    std::cout << x << "^" << n << "=" << acc << std::endl;
}