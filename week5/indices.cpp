#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, i, tmp, s, counter = 0;
    std::cout << "please enter n:" << std::endl;
    std::cin >> n;
    for(i = 0; i < n; i++){
        std::cout << "please enter a number:" << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::cout << "please enter s:" << std::endl;
    std::cin >> s;
    for(i = 0; i < n; i++){
        if(v[i]== s){
            counter = counter + 1;
            v.push_back(i);
        }
    }
    if (counter == 0){
        std::cout << "there are no occurences of " << s << std::endl;
    }
    else{
        std::cout << "there are " << counter << " occurences of " << s << " at indices" << std::endl;
        for(i = 0; i < counter; i ++){
            std::cout << v[n + i] << std::endl;
        }
    }
}