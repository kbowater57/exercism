#include "grains.h"

namespace grains {
    unsigned long long square(int square)
    {
        return two_factorial(square - 1 );
    }

    unsigned long long two_factorial(int i)
    {
        unsigned long long result = 1;
        while(i > 0){
            result *= 2;
            --i;
        }
        
        return result;
    }
}  // namespace grains
