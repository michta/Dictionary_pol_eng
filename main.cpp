#include "Slownik.h"
#include <iostream>
 
int main()
{
    std::string word;
    int decision;
    bool no_fun{false};

    Slownik slownik;
    slownik.add_words("eng_pol.csv");

    while(!no_fun){

    std::cout << " \n MENU \n";
    std::cout << "1. Word in English \n";
    std::cout << "2. Word in Polish \n";
    std::cout << "3. END \n";
    std::cin >> decision;


    switch (decision)
    {
      case 1: std::cin >> word;
      slownik.find_eng_pol(word);
      break;
      case 2: std::cin >> word;
       slownik.find_pol_eng(word);
      break;
      case 3: no_fun = true; 
      break;

    default:
      break;
    }
  }
}   
