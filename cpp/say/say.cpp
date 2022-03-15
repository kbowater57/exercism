#include "say.h"

namespace say {
    std::string in_english(unsigned long long number)
    {
        if(number < 10)
        {
            return units(number);
        }
        if (number < 20)
        {
            return teens(number);
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

    std::string teens(unsigned long long number)
    {
        switch(number)
        {
            case 10:
                return "ten";
            case 11:
                return "eleven";
            case 12:
                return "twelve";
            case 13:
                return "thirteen";
            default:
                return units(number - 10) + "teen";
        }
        return "";
    }


}  // namespace say
