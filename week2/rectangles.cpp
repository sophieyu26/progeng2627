#include <iostream>

int main(){
    int length, width;
    std::cout << "What is the length of the rectangle?" << std::endl;
    std::cin >> length;
    std::cout << "What is the width of the rectangle?" << std::endl;
    std::cin >> width;
    std::cout << "The perimeter of the rectangle is " << 2 * (length + width) << std::endl;
    std::cout << "The area of the rectangle is " << length * width << std::endl;
}