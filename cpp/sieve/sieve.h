#if !defined(SIEVE_H)
#define SIEVE_H

#include <vector>
#include <set>
#include <numeric>
#include <algorithm>

namespace sieve {
    std::vector<int> primes(int);
    bool IsEven (int i);
}  // namespace sieve

#endif // SIEVE_H
