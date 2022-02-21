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

    void school::add(const std::string name, const int grade)
    {
        roster_[grade].push_back(name);
        std::sort(roster_[grade].begin(), roster_[grade].end());
    }

    std::vector<std::string> school::grade (const int grade)
    {
        return roster_[grade];
    }

}  // namespace grade_school
