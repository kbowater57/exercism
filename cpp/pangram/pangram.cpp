#include "pangram.h"

namespace pangram {
    bool is_pangram(std::string input)
    {
        std::string test_string{"eariotnslcudpmhgbywkvxzjq"}; 
        // alphabet in descending frequency order

        for (char& c : input){
            c = tolower(c);
        }

        for (char& d : test_string){
            if (input.find(d) == std::string::npos)
            {
                return false;
            }
        }
            return true;
    }
}  // namespace pangram
