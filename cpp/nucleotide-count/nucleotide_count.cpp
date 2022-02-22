#include "nucleotide_count.h"

namespace nucleotide_count {
    counter::counter(std::string strand)
    {   
        if( strand.find_first_not_of("ATCG") != std::string::npos)
        {
            throw std::invalid_argument("That's an invalid nucleotide!");
        }
        counts_ = {{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0}};

        if(strand.length() != 0)
        {
            for ( auto &pair : counts_)
            {
                pair.second = std::count(strand.begin(), strand.end(), pair.first);
            }
        }
    }

    std::map<char, signed int> counter::nucleotide_counts() const
    {
        return  counts_;
    }

    int counter::count(const char ch) const
    {
        if( std::string(1,ch).find_first_not_of("ATCG") != std::string::npos)
        {
            throw std::invalid_argument("That isn't a nucleotide!");
        }
        return counts_.at(ch);
    }
}  // namespace nucleotide_count
