#include <iostream>
int main(){
    int n, i = 0, curmax;
    std::cin >> n;
    curmax = n;
    if (n > 0){
        while (n != 1){
            if (n % 2 == 0){
                n = n / 2;
            }
            else {
                n = 3 * n + 1;
            }
            std::cout << n << " ";
            if (n > curmax){
                curmax = n;
            }
            i = i + 1;
        }
    std::cout << std::endl;
    std::cout << i << std::endl;
    std::cout << curmax << std::endl;
    }
}
