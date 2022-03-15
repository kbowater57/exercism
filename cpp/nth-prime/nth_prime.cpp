#include "nth_prime.h"

namespace nth_prime {
    int nth(int input)
    {
        if ( input == 0 ){throw std::domain_error("The 0th prime is undefined");}
        std::pair<int, int> which_prime{2,1};
        // first value is value of most recently found prime
        // second value is which prime this is, i.e. 2 is the first prime
        int candidate_prime = 3;

        while(which_prime.second != input)
        {
            if (is_prime(candidate_prime))
            {
                which_prime.first = candidate_prime;
                ++which_prime.second;
            }
            candidate_prime++;
        }

        return which_prime.first;
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

