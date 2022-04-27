#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>

namespace allergies {
    class allergy_test
    {
        public:
            int score_;

            allergy_test(int score)
            {
                score_ = score;
            }

            bool is_allergic_to(std::string);
    };
}  // namespace allergies

#endif // ALLERGIES_H
