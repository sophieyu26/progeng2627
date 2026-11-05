#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<int> v{1, 2, 3, 4, 3};
    std::cout << (search_vector(3, v) == 2) << std::endl;

    v = {-1, 5, 5, 6, -5};
    std::cout << (search_vector(-5, v) == 4) << std::endl;
    std::cout << (search_vector(4, v) == -1) << std::endl;
}