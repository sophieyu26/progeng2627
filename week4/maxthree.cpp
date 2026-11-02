#include <iostream>

double max(double a, double b, double c){
    if(a > b){
        if(a > c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if (b > c){
            return b;
        }
        else{
            return c;
        }
    }
}

int main(){
    std::cout << "maximum of 1, 2, 3: " << max(1, 2, 3) << std::endl;
    std::cout << "maximum of 9, 5, 6: " << max(9, 5, 6) << std::endl;
    std::cout << "maximum of -5, 9, 0: " << max (-5, 9, 0) << std::endl;
    std::cout << "maximum of 0.25, 2.9, 1.09: " << max (0.25, 2.9, 1.09) << std::endl;
    std::cout << "maximum of 3, 3, 0: " << max (3, 3, 0) << std::endl;
    std::cout << (max (3, 3, 0) - 3) << std::endl;
}