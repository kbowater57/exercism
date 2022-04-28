#include "protein_translation.h"

namespace protein_translation {

std::map<std::string, std::string> codon_protein_map =
{   {"AUG","Methionine"}};


std::vector<std::string> proteins(std::string rna_sequence)
{
    std::vector<std::string> output = {};
    output.push_back(codon_protein_map.at(rna_sequence));
    return output;
}

}  // namespace protein_translation
