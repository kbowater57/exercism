#include "difference_of_squares.h"

namespace difference_of_squares {
    int square_of_sum( int input)
    {
        return pow(((input *(input+1))/2),2);
    }

    int sum_of_squares( int input)
    {
        return (input*(input+1)*((2*input) + 1))/6;
    }

    int difference( int input)
    {
        return square_of_sum(input) - sum_of_squares(input);
    }
}  // namespace difference_of_squares
