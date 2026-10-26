#include <iostream>

int main(){
    int n, acc = 0;
    int x, counter = 0;
    std::cin >> x >> n;
    while (counter < n){
        acc = acc + x;
        counter = counter + 1;
    }
    std::cout << x << "*" << n << "=" << acc << std::endl;
}