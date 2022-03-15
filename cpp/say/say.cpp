#include "say.h"

namespace say {
    std::string in_english(unsigned long long number)
    {
        if(number < 10)
        {
            return units(number);
        }
        return "";
    }

    std::string units(unsigned long long number)
    {
        switch(number)
        {
            case 0:
                return "zero";
            case 1:
                return "one";
            case 2:
                return "two";
            case 3:
                return "three";
            case 4:
                return "four";
            case 5:
                return "five";
            case 6:
                return "six";
            case 7:
                return "seven";
            case 8:
                return "eight";
            case 9:
                return "nine";
        }
        return "";
    }

}  // namespace say
