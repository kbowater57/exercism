#include "grains.h"

namespace grains {
    unsigned long long square(int square)
    {
        return power_of_2(square - 1 );
    }

    unsigned long long power_of_2(int i)
    {
        unsigned long long result = 1; //implement bit shift version
        while(i > 0){
            result *= 2;
            --i;
        }
        
        return result;
    }

    unsigned long long total()
    {
        return 2*(power_of_2(no_of_days)-1)+1;
    }
}  // namespace grains
