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
        return sum;
    }
}  // namespace sum_of_multiples
