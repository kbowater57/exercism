#include "grade_school.h"

namespace grade_school {

    // school()
    // {
    //     std::map<int, std::vector<std::string>> roster_{};
    // }
    std::map<int, std::vector<std::string>> school::roster() const
    {
        return school::roster_;
    }

}  // namespace grade_school
