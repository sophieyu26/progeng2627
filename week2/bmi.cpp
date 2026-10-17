#include <iostream>

int main(){
    double weight, height;
    std::cout << "What is your weight?" << std::endl;
    std::cin >> weight;
    std::cout << "What is your height" << std::endl;
    std::cin >> height;
    std::cout << "Your BMI is " << weight / (height * height) << std::endl;
}