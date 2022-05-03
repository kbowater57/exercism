#include "prime_factors.h"

namespace prime_factors {
    std::vector<int> primes = {2,3,5,7,11,13,17,19,23,461};

    std::vector<int> of(int input){
        std::vector<int> result;
        int i = 0;
        while (input != 1)
        {
            if (input % primes[i] == 0)
            {
                result.push_back(primes[i]);
                input /= primes[i];
            }
            else
            {
                ++i;
            }
        }
        return result;
    }
}  // namespace prime_factors
