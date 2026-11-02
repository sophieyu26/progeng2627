#include <iostream>
#include <cmath>

double sumpow(double x, double n){
    double sum = 0;
    for (int i = 1; i < n + 1; i ++){
        sum = std::pow(x, i) + sum;
    }
    return sum;
}

int main(){
    int x, n;
    std::cin >> x >> n;
    std::cout << x << "^" << n << " = " << sumpow(x, n) << std::endl;
}