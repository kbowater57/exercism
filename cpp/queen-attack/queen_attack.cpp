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

}  // namespace queen_attack
