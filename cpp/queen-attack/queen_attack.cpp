#include "queen_attack.h"

namespace queen_attack {

    chess_board::chess_board(const std::pair<int, int>& white,
                             const std::pair<int, int>& black) :
        white_(white),
        black_(black)
        {
            if(white == black)
            {
                throw std::domain_error("The queens have to be in different places");
            }
        }

    chess_board::operator std::string() const
    {
        std::string board_string{
        "_ _ _ _ _ _ _ _\n"
        "_ _ _ _ _ _ _ _\n"
        "_ _ _ _ _ _ _ _\n"
        "_ _ _ _ _ _ _ _\n"
        "_ _ _ _ _ _ _ _\n"
        "_ _ _ _ _ _ _ _\n"
        "_ _ _ _ _ _ _ _\n"
        "_ _ _ _ _ _ _ _\n"};
        board_string[16*white_.first + 2*white_.second] = 'W';
        board_string[16*black_.first + 2*black_.second] = 'B';
        return board_string;
    }

    bool chess_board::can_attack() const
    {
        if(black_.first == white_.first or black_.second == white_.second)
        {
            return true;
        }

        // Find equations of diagonals which black can attack
        int m1 = 1;
        int m2 = -1;
        int c1 = black_.first - m1 * black_.second;
        int c2 = black_.first - m2 * black_.second;

        if( white_.first - m1*white_.second - c1 == 0 or
            white_.first - m2*white_.second - c2 == 0)
        {
            return true;
        }

        return false;
    }

}  // namespace queen_attack
