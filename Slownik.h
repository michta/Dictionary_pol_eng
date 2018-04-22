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
    void add_words_pol(std::string);
    void add_words_eng(std::string);
    void add_words_by_myself();
    void find_word(std::string);

};