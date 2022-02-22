#include "rna_transcription.h"

namespace rna_transcription {
    char to_rna(char nucleotide)
    {
        return to_rna(std::string(1,nucleotide))[0];
    }

    std::string to_rna(std::string strand)
    {

        for (unsigned int i = 0 ; i < strand.length() ; ++i)
        {
            if(strand[i] == 'C')
            {
                strand[i] = 'G';
            }
            else if(strand[i] == 'G')
            {
                strand[i] = 'C';
            }
            else if(strand[i] == 'A')
            {
                strand[i] = 'U';
            }                        
            else if(strand[i] == 'T')
            {
                strand[i] = 'A';
            }            
        }
        return strand;
    }
}  // namespace rna_transcription
