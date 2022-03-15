#include "nth_prime.h"

namespace nth_prime {
    int nth(int n)
    {
        if ( n == 0 ){throw std::domain_error("The 0th prime is undefined");}
        int highest_found_prime = 2;
        int found_n = 1;

        int candidate_prime = 3;

        while(found_n != n)
        {
            if (is_prime(candidate_prime))
            {
                highest_found_prime = candidate_prime;
                ++found_n;
            }
            candidate_prime++;
        }

        return highest_found_prime;
    }


    bool is_prime(int candidate)
    {

        for (int i = int(floor(sqrt(candidate))) ; i > 1 ; --i)
        {
            if (candidate % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}  // namespace nth_prime

