#include "allergies.h"

namespace allergies {
    std::unordered_set<std::string> allergy_test::get_allergies()
    {
        // bool allergic = score_ & (1 << position);
        return {};
    }
    
    bool allergy_test::is_allergic_to(std::string allergen)
    {

        // int position = allergen_map_.at(allergen);
        int position = std::find(allergen_vector_.begin(), allergen_vector_.end(),allergen) - allergen_vector_.begin();

        bool allergic = score_ & (1 << position);
        return allergic;
    }
}  // namespace allergies
