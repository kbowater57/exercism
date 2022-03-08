#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include <utility>
#include <stdexcept>

namespace queen_attack {
    class chess_board
    {
        private:
            std::pair<int, int> white_;
            std::pair<int, int> black_;

        public:
            auto white() const {return white_;}
            auto black() const {return black_;}

            chess_board(const std::pair<int, int>& white = std::make_pair(0,3),
                        const std::pair<int, int>& black = std::make_pair(7,3))
                         :

                white_(white),
                black_(black)
                {
                    if(white == black)
                    {
                        throw std::domain_error("The queens have to be in different places");
                    }
                }
    };
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H
