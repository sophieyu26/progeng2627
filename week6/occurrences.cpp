#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int occurrences(const std::vector<std::string>& text, const std::string& word){
    int number = 0;
    for(int i = 0; i < text.size(); i++){
        if(text[i] == word){
            number++;
        }
    }
    return number;
}

int main(){
    std::ifstream infile;
    infile.open("text.txt");
    std::vector<std::string> text;
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(infile >> tmp){
        text.push_back(tmp);
    }
    infile.close();

    infile.open("word.txt");
    std::vector<std::string> word;
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while(infile >> tmp){
        word.push_back(tmp);
    }
    infile.close();

    for(int i = 0; i < word.size(); i++){
        std::cout << word[i] << ": " << occurrences(text, word[i]) << std::endl;
    }
}