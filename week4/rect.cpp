#include <iostream>

void rect(double x, double y, double& perimeter, double& area){
    perimeter = 2 * x + 2 * y;
    area = x * y;
}

int main(){
    double x = 2, y = 3, perimeter, area;
    rect(x, y, perimeter, area);
    std::cout << (perimeter == 10) << std::endl;
    std::cout << (area == 6) << std::endl;
   
    x = 0.9;
    y = 7.6;
    rect(x, y, perimeter, area);
    std::cout << (perimeter == 17) << std::endl;
    std::cout << (area == 6.84) << std::endl;
    
}