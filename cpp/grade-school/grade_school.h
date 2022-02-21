#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <algorithm>
#include <map>
#include <string>
#include <vector>

namespace grade_school {
    class school
    {
        private:
            std::map<int, std::vector<std::string>> roster_;

        public:
            std::map<int, std::vector<std::string>> roster() const;

            school(std::map<int, std::vector<std::string>> roster = {}){roster_ = roster;};

            void add(const std::string name, const int grade);
            std::vector<std::string> grade (const int grade);
        

    };
}  // namespace grade_school

#endif // GRADE_SCHOOL_H
