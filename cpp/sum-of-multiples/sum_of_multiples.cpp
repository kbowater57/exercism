#include "sum_of_multiples.h"

namespace sum_of_multiples {
    int sum_of_multiples(int factor, int limit)
    {
        if(limit == 0){ return 0;}
        double quotient = floor(((limit - 1)/factor));
        return int(0.5 * quotient * (quotient+1) * factor);
    }

    int to(std::list<int> multiples, int limit)
    {
        int sum = 0;
        for(int multiple : multiples)
        {
            sum += sum_of_multiples(multiple, limit);
        }

        std::set<int> common_multiples;
        for(int i : multiples)
        {
            for(int j : multiples)
            {
                if (i == j) {continue;}
                int lcm = std::lcm(i,j);
                if (lcm > limit - 1){continue;}
                if (common_multiples.find(lcm) == common_multiples.end())
                {
                    common_multiples.emplace(lcm);
                    sum -= sum_of_multiples(lcm, limit);
                }
            }
        }
        return sum;
    }
}  // namespace sum_of_multiples
