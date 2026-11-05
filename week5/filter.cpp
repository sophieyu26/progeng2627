#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, tmp, i, t;
    std::cout << "please enter a number n" << std::endl;
    std::cin >> n;
    std::cout << "please enter " << n << " numbers" << std::endl;
    for(i = 0; i < n; i++){
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::cout << "please enter a number t" << std::endl;
    std::cin >> t;
    std::cout << "the numbers that are less than " << t << " are" << std::endl;
    for(i = 0; i < n; i++){
        if(v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }
}