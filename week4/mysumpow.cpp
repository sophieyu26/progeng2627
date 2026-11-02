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
    std::cout << (sumpow(5, 3) == 155) << std::endl;
    std::cout << (sumpow (2, 4) == 30) << std::endl;
    std::cout << (sumpow (2, 4) - 30) << std::endl;
}