#include "collatz_conjecture.h"

namespace collatz_conjecture {
    unsigned steps (unsigned int input)
    {
        unsigned steps = 0;
        while (input != 1)
        {
            input = (input % 2) ? 3*input + 1 : input /= 2;
            // if (input % 2) ? input = 3*input + 1 : input /= 2;
            ++steps;
        }
        return steps;
    }
}  // namespace collatz_conjecture
