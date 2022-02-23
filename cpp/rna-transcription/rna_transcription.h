#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H

#include <string>
#include <algorithm>

namespace rna_transcription {
    char to_rna(char nucleotide);
    std::string to_rna(std::string dna);
}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H
