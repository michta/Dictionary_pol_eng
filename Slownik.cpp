#include "Slownik.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <memory>
#include <fstream>

Slownik::Slownik(){
   // std::cout << "Konstruktor Slownik.\n";
}

Slownik::~Slownik(){
  //  std::cout << "Destruktor Slownik.\n";
}


void Slownik::add_words(std::string plik){

    std::ifstream file;
    std::string word;

    file.open(plik);
    
    while(true){
        if(file.good()){
        file >> word;
        dictionary.push_front(word);
        dictionary.push_back(word);
        }
    else
        break;
    }

    file.close();

}
void Slownik::find_eng_pol(std::string word){
    auto it = std::find(dictionary.begin(), dictionary.end(), word);
    std::cout << word << " -> " << *--it << "\n";
}

void Slownik::find_pol_eng(std::string word){
    auto it = std::find(dictionary.begin(), dictionary.end(), word);
    std::cout << word << " -> " << *++it << "\n";
}