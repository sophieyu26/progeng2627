#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    merged.clear();
    int i = 0, j = 0;
    while(i < v1.size() && j < v2.size()){
        if(v1[i] < v2[j]){
            merged.push_back(v1[i]);
            i++;
        }
        else{
            merged.push_back(v2[j]);
            j++;
        }
    }
    if(i == v1.size()){
        for(; j < v2.size(); j++){
            merged.push_back(v2[j]);
        }
    }
    else{
        for(; i < v1.size(); i++){
            merged.push_back(v1[i]);
        }
    }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {}, v2 = {1, 3, 5, 7, 9};
    expected_output = {1, 3, 5, 7, 9};
    merge_vectors_int(v1, v2, out);
        if(out == expected_output){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {-5, 9}, v2 = {1, 3, 5, 7, 9};
    expected_output = {-5, 1, 3, 5, 7, 9, 9};
    merge_vectors_int(v1, v2, out);
        if(out == expected_output){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    
}