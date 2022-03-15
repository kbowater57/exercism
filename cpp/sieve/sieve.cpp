#include "sieve.h"

namespace sieve {
     std::vector<int> primes(int input)
     {
         std::set<int> integers_set;
         std::vector<int> integers(input - 1 );
         std::iota(integers.begin(), integers.end(),2 );
         for (int i : integers)
         {
             integers_set.insert(i);
         }

        for (int i : integers_set)
        {
            int j = i*2;
            while(j < input+1)
            {
                integers_set.erase(j);
                j += i;
            }
        }
        std::vector<int> integers_out(integers_set.begin(), integers_set.end());
        //  std::remove_if(integers.begin(), integers.end(), IsEven);
         return integers_out;
     }
}  // namespace sieve
