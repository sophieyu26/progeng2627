#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if(n % cf == 0){
            return cf;
        }
    }
    return 0;
}

int main(){
    int n = 7;
    std::cout << (smallest_factor(n) == 0) << std::endl;
    n = 12;
    std::cout << (smallest_factor(n)== 2) << std::endl;
}