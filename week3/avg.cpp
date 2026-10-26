#include <iostream>

int main(){
    int n, counter = 0;
    double avg = 0, sum = 0;
    std::cout << "enter a number:" << std::endl;
    std::cin >> n;
    while (n != 0){
        counter = counter + 1;
        sum = sum + n;
        avg = sum/counter;
        std::cout << "the average so far is" << std::endl;
        std::cout << avg << std::endl;
        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
    }
}