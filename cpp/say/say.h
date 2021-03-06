#if !defined(SAY_H)
#define SAY_H

#include <string>

namespace say {
    std::string in_english(unsigned long long number);
    std::string units(unsigned long long number);
    std::string teens(unsigned long long number);
    std::string tens(unsigned long long number);
    std::string hundreds(unsigned long long number);
    std::string three_digits(unsigned long long number);
}  // namespace say

#endif // SAY_H
