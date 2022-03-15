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
        if (number < 100)
        {
            if(number % 10 == 0)
            {
                return tens(number/10);
            }
            return tens(number/10) + '-' + units(number%10);
        }

        if ( number < 1000)
        {
            if (number % 100 == 0)
            {
                return hundreds(number/100);
            }
            if( (number % 100) % 10 == 0)
            {
                return hundreds(number/100) + units((number%100)%10);
            }
            if( (number % 100) < 20)
            {
                return hundreds(number/100) + teens((number%100)%10);
            }
            return hundreds(number/100) + ' ' + tens((number % 100 - (number%100)%10)/10) + '-'+units((number%100)%10);
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

    std::string tens(unsigned long long number)
    {
        switch(number)
        {
            case 2:
                return "twenty";
            case 3:
                return "thirty";
            case 4:
                return "forty";
            case 5:
                return "fifty";
            case 6:
                return "sixty";
            case 7:
                return "seventy";
            case 8:
                return "eighty";
            case 9:
                return "ninety";
            default:
                return "";
            
        }
    }

    std::string hundreds(unsigned long long number)
    {
        return units(number) + " hundred";
    }


}  // namespace say
