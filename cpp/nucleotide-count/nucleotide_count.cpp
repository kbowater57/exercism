#include "nucleotide_count.h"

namespace nucleotide_count {
    counter::counter(std::string strand)
    {   
        counts_ = {{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0}};

        if(strand.length() != 0){
            for ( const char& ch : "ATCG")
            {
                counts_[ch] += std::count(strand.begin(), strand.end(), ch);
            }
        }
    }

    std::map<char, int> counter::nucleotide_counts() const
    {
        return  counts_;
    }

    int counter::count(const char ch) const
    {
        return counts_.at(ch);
    }
}  // namespace nucleotide_count
