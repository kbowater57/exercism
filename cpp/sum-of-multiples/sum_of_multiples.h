#if !defined(SUM_OF_MULTIPLES_H)
#define SUM_OF_MULTIPLES_H

#include <list>
#include <cmath>
#include <set>
#include <numeric>


namespace sum_of_multiples {
    int to(std::list<int> multiples, int limit);
    int sum_of_multiples(int factor, int limit);
    int dumb_sum(std::list<int> multiples, int limit);
}  // namespace sum_of_multiples

#endif // SUM_OF_MULTIPLES_H
