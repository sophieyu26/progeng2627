#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int index;
    if(vin.size() == 0){
        return -1;
    }
    else{
        double curmin = vin[0];
        for(int i = 1; i < vin.size(); i++){
            if(vin[i] < curmin){
                curmin = vin[i];
                index = i;
            }
        }
        return index;
    }
}

int main(){
    std::vector<double> v{3, 2, 9, 0.1};
    std::cout << (min_vector_element(v) == 3) << std::endl;

    v = {2, -1, -3.5, 107.6, 3};
    std::cout << (min_vector_element(v) == 2) << std::endl;

    v = {};
    std::cout << (min_vector_element(v) == -1) << std::endl;
}
