#include "allergies.h"

namespace allergies {
    std::unordered_set<std::string> allergy_test::get_allergies()
    {
        std::unordered_set<std::string> allergic_set;
        for(unsigned int position = 0; position < allergen_vector_.size(); ++position)
        {
            bool allergic = score_ & (1 << position);
            if(allergic)
            {
                allergic_set.emplace(allergen_vector_[position]);
            }
        }
        return allergic_set;
    }
    
    bool allergy_test::is_allergic_to(std::string allergen)
    {
        int position = std::find(allergen_vector_.begin(), allergen_vector_.end(), allergen) - allergen_vector_.begin();

        bool allergic = score_ & (1 << position);
        return allergic;
    }
}  // namespace allergies
