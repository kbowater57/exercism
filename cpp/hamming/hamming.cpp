#include "hamming.h"

namespace hamming {
    int compute(std::string s1, std::string s2)
    {
        if(s1 == s2)
        {
            return 0;
        }

        int result = 0;
        for(unsigned int i = 0 ; i < s1.length() ; ++i)
        {
            result += s1[i] != s2[i];
        }
        return result;
    }
}  // namespace hamming
