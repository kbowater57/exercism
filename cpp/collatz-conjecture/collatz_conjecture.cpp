#include "collatz_conjecture.h"

namespace collatz_conjecture {
    unsigned steps (unsigned int input)
    {
        if (input < 1){ throw std::domain_error("Invalid input");}

        unsigned steps = 0;
        while (input != 1)
        {
            input = (input % 2) ? 3*input + 1 : input /= 2;
            // if (input % 2) ? input = 3*input + 1 : input /= 2;
            ++steps;
        }
        return steps;
    }

    unsigned steps (int input){
        if (input < 1){ throw std::domain_error("Invalid input");}

        return steps((unsigned int)input);
    }
}  // namespace collatz_conjecture
