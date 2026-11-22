#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void translation(const std::vector<std::string>& text, const std::vector<std::string>& meaning, std::vector<std::string>& translated){
    for(int i = 0; i < meaning.size(); i = i + 2){
        for(int j = 0; j < text.size(); j++){
            if(meaning[i] == text [j]){
                translated[j] = meaning[i+1];
            }
        }
    }
}

int main(){
    std::ifstream infile;
    infile.open("ads.txt");
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

    infile.open("real.txt");
    std::vector<std::string> meaning;
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while(infile >> tmp){
        meaning.push_back(tmp);
    }
    infile.close();

    std::vector<std::string> translated = text;
    translation(text, meaning, translated);
    std::string outputfilename;
    std::cout << "please enter the name of the output file" << std::endl;
    std::cin >> outputfilename;
    std::ofstream outfile;
    outfile.open(outputfilename);
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i = 0; i < translated.size(); i++){
        outfile << translated[i] << " ";
    }
    outfile.close();
}