#include "allergies.h"

namespace allergies {
    bool allergy_test::is_allergic_to(std::string allergen)
    {
        const std::map<std::string, int> allergen_map = 
        {
            {"eggs", 0},
            {"peanuts", 1},
            {"shellfish", 2},
            {"strawberries", 3},
            {"tomatoes", 4},
            {"chocolate", 5},
            {"pollen", 6},
            {"cats", 7}
        };

        int position = allergen_map.at(allergen);

        bool allergic = score_ & (1 << position);
        return allergic;
        // const std::vector<std::string> allergen_list{"eggs", "peanuts"}
        // for(int position = 0 ; position < 8 ; ++position)
        // {

            // if(position == 1 and bit == 1)
            // {
            //     output.push_back("double blink");
            // }

            // if(position == 2 and bit == 1)
            // {
            //     output.push_back("close your eyes");
            // }

            // if(position == 3 and bit == 1)
            // {
            //     output.push_back("jump");
            // }

            // if(position == 4 and bit == 1)
            // {
            //     std::reverse(output.begin(), output.end());
            // }

        // }
        return false;
    }
}  // namespace allergies
