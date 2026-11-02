#include <iostream>

double max(double a, double b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    std::cout << "maximum of 1, 2: " << max(1, 2) << std::endl;
    std::cout << "maximum of 9, 5: " << max(9, 5) << std::endl;
    std::cout << "maximum of -5, 0: " << max (-5, 0) << std::endl;
    std::cout << "maximum of 0.25, 2.9: " << max (0.25, 2.9) << std::endl;
}