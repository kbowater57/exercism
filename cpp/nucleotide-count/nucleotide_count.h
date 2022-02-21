#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <algorithm>
#include <map>
#include <string>

namespace nucleotide_count {
    class counter
    {
        private:
            std::map<char, int> counts_;

        public:
            counter(std::string strand);
            std::map<char, int> nucleotide_counts() const;
            int count(const char ch) const;
    };
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H
