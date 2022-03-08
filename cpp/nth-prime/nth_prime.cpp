#include "nth_prime.h"

namespace nth_prime {
    int nth(int input)
    {
        if ( input == 0 ){throw std::domain_error("The 0th prime is undefined");}
        std::pair<int, int> which_prime{2,1}; //first prime is two
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


    bool is_prime(int input)
    {
        for (int i = input - 1 ; i > 1 ; --i)
        {
            if (input % i == 0)
            {
                // std::cout << i << '\n';
                return false;
            }
        }
        return true;
    }
}  // namespace nth_prime

// int main (){
//     std::cout << nth_prime::is_prime(3);
// }
