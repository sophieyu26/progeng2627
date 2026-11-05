#include <iostream>
#include <vector>

void filter_v(const std::vector<double>&vin, double t, std::vector<double>& vout){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> v{1, 7, 3, 4, 2, -2, 19}, vout;
    double t = 4.1;
    filter_v(v, t, vout);
    std::vector<double> expected = {1, 3, 4, 2, -2};
    std::cout << (vout == expected) << std::endl;
}