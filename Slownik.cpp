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

void Slownik::add_words_pol(std::string plik){

    std::ifstream file;
    std::string word;
    file.open(plik);
    int counter = 10000;
    while(counter){
        if(file.good()){
        getline(file, word);
        file >> word; 
        dictionary.push_back(word);
        counter--;
        }
    }
    file.close();
}

void Slownik::add_words_eng(std::string plik){
    std::ifstream file;
    std::string word;
    file.open(plik);
    int counter = 10000;
    while(counter){
        if(file.good()){
        getline(file, word);
        file >> word;
        dictionary.push_back(word);
        counter--;
        }
    }
    file.close();
}
void Slownik::find_word(std::string word){

    int position = 0;
    auto it = std::find(dictionary.begin(), dictionary.end(), word);

    auto first = std::distance(dictionary.begin(), it);

    if(first < 10000){
    auto second = std::distance(dictionary.begin(), it) + 10000;
    position = second;
    }

    if(first > 10000){
    auto second = std::distance(dictionary.begin(), it) - 10000;
    position = second;
    }
     auto second_word = std::next(dictionary.begin(), position);
    std::cout << *second_word << "\n";
}
void Slownik::add_words_by_myself(){
    std::string eng_word, pol_word;
    std::cout << "Add word in English: ";
    std::cin >> eng_word;
    std::cout << "Add word in Polish";
    std::cin >> pol_word;

    std::fstream file;
    std::string word;

    file.open("eng_pol.csv", std::ios::app);

    file << eng_word << " ";
        dictionary.push_front(eng_word);
        
    file << pol_word << "\n";
        dictionary.push_back(pol_word);
    file.close();  
}