#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <memory>

class Slownik{
  
  std::list<std::string> dictionary;
    public:
    Slownik();
    ~Slownik();
    void add_word();
    void add_words(std::string);
    void find_eng_pol(std::string);
    void find_pol_eng(std::string);

};