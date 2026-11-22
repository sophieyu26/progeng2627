#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char* argv[]){
    if(argc != 2){
        std::cout << "please provide filename" << std::endl;
        return EXIT_FAILURE;
    }
    std::ifstream infile;
    infile.open(argv[1]);
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    std::vector<std::string> file;
    while(std::getline(infile, tmp)){
        file.push_back(tmp);
    }
    for(int i = 0; i < file.size(); i++){
        std::cout << file[i] << std::endl;
    }
}