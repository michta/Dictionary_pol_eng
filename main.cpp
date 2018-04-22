#include "Slownik.h"
#include <iostream>
 
int main()
{
    std::string word;
    int decision;
    bool no_fun{false};

    Slownik slownik;
    slownik.add_words_pol("pl.csv");
    slownik.add_words_eng("eng.csv");
    while(!no_fun){

    std::cout << " \n MENU \n";
    std::cout << "1. Check translation \n";
    std::cout << "2. Add new word \n";
    std::cout << "3. END \n";
    std::cin >> decision;

    switch (decision)
    {
      case 1: std::cin >> word;
      slownik.find_word(word);
      break;
      case 2: slownik.add_words_by_myself();
      break;
      case 3: no_fun = true; 
      break;
      
    default:
     return 0;
    }
  }
}   
