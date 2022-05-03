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
                int product = i*j;
                if (common_multiples.find(product) == common_multiples.end())
                {
                    common_multiples.emplace(product);
                    sum -= sum_of_multiples(product, limit);
                }
            }
        }
        return sum;
    }
}  // namespace sum_of_multiples
