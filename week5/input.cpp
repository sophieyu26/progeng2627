#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){
    double sum = 0;
    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }
    return sum;
}

int main(){
    std::vector<double> v;
    double n, tmp;

    std::cout << "how many elements do you want to enter" << std::endl;
    std::cin >> n;
    std::cout << "please enter " << n << " numbers" << std::endl;
    for(int i = 0; i < n; i++){
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::cout << "the sum is: " << sum_vector(v) << std::endl;
}