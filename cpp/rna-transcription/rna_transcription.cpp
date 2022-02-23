#include "rna_transcription.h"

namespace rna_transcription {
    char to_rna(char nucleotide)
    {
        // return to_rna(std::string(1,nucleotide))[0];
        switch (nucleotide)
        {
            case 'C':
                return 'G';
            case 'G':
                return 'C';
            case 'A':
                return 'U';
            case 'T':
                return 'A';
        }
        return {};
    }

    std::string to_rna(std::string dna)
    {
        std::transform(dna.begin(), dna.end(), dna.begin(), (char(*)(char)) to_rna);
        return dna;
    }
}  // namespace rna_transcription
