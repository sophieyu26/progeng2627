#include <iostream>
#include <string>

void myswap(std::string& n1, std::string& n2){
    std::string tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main(){
    std::string n1 = "apple", n2 = "banana";
    myswap(n1, n2);
    std::cout << (n1 == "banana") << std::endl;
    std::cout << (n2 == "apple") << std::endl;
}