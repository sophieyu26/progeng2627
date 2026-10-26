#include <iostream>
#include <string>

int main(){
    int l, h, n;
    std::string c;
    std::cout << "enter the lower bound:" << std::endl;
    std::cin >> l;
    std::cout << "enter the higher bound:" << std::endl;
    std::cin >> h;
    if (h == l + 1){
        std::cout << "is the number " << l << std::endl;
        std::cin >> c;
        if (c == "greater"){
            std::cout << "is the number " << h << std::endl;
            std::cin >> c;
        }
    }
    else{
        while (c != "yes"){
            n = (l + h) / 2;
            std::cout << "is the number " << n << std::endl;
         std::cin >> c;
          if (c == "greater"){
              l = n;
          }
         else if (c == "less"){
             h = n;
           }
        }
    }
}