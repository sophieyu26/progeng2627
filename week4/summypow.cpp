#include <iostream>

double mypow(double base, int exp){
    double result = 1;
    if (exp >= 0){
        for (int i = 0; i < exp; i++){
            result = result * base;
        } 
    }  
    else{
        for (int i = 0; i < - exp; i++){
            result = result / base;
        }
    }
    return result;
}

double sumpow(double x, double n){
    double sum = 0;
    for (int i = 1; i < n + 1; i ++){
        sum = mypow(x, i) + sum;
    }
    return sum;
}

int main(){
    int x, n;
    std::cin >> x >> n;
    std::cout << x << "^" << n << " = " << sumpow(x, n) << std::endl;
}