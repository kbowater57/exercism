#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>

namespace allergies {
    class allergy_test
    {
        public:
            bool is_allergic_to(std::string allergen);
            std::unordered_set<std::string> get_allergies();

            allergy_test(int score)
            {
                score_ = score;
            }
        
        private:

            const std::vector<std::string> allergen_vector_ =
            { "eggs", "peanuts", "shellfish", "strawberries", "tomatoes",
              "chocolate", "pollen", "cats"};

            int score_;
    };
}  // namespace allergies

#endif // ALLERGIES_H
