#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>&vin){
    for(int i = 0; i < vin.size(); i++){
        if (vin[i] == s){
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>&vin1, const std::vector<std::string>&vin2, std::vector<std::string>&vout){
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i < vin2.size(); i++){
        if(search_vector(vin2[i], vin1) == -1){
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1[i], vin2) != -1){
            vout.push_back(vin1[i]);
        }
    }
}

int main(){
    std::ifstream infile;
    infile.open("warehouse1.txt");
    std::vector<std::string> vin1;
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(infile >> tmp){
        vin1.push_back(tmp);
    }
    infile.close();

    infile.open("warehouse2.txt");
    std::vector<std::string> vin2;
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while(infile >> tmp){
        vin2.push_back(tmp);
    }
    infile.close();

    std::vector<std::string> vout;

    union_vector(vin1, vin2, vout);
    std::ofstream outfile;
    outfile.open("union.txt");
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i = 0; i < vout.size(); i++){
        outfile << vout[i] << std::endl;
    }
    outfile.close();

    vout.clear();
    intersection_vector(vin1, vin2, vout);
    outfile.open("intersection.txt");
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i = 0; i < vout.size(); i++){
        outfile << vout[i] << std::endl;
    }
    outfile.close();
}