#include "protein_translation.h"

namespace protein_translation {

std::map<std::string, std::string> codon_protein_map =
{   {"AUG", "Methionine"},
    {"UUU", "Phenylalanine"},
    {"UUC", "Phenylalanine"},
    {"UUA", "Leucine"},
    {"UUG", "Leucine"},
    {"UCU", "Serine"},
    {"UCC", "Serine"},
    {"UCA", "Serine"},
    {"UCG", "Serine"},
    {"UAU", "Tyrosine"},
    {"UAC", "Tyrosine"},
    {"UGU", "Cysteine"},
    {"UGC", "Cysteine"},
    {"UGG", "Tryptophan"},
    {"UAA", "STOP"},
    {"UAG", "STOP"},
    {"UGA", "STOP"},
    {"Methionine"    , "AUG" },
    {"Phenylalanine" , "UUU" },
    {"Phenylalanine" , "UUC" },
    {"Leucine"       , "UUA" },
    {"Leucine"       , "UUG" },
    {"Serine"        , "UCU" },
    {"Serine"        , "UCC" },
    {"Serine"        , "UCA" },
    {"Serine"        , "UCG" },
    {"Tyrosine"      , "UAU" },
    {"Tyrosine"      , "UAC" },
    {"Cysteine"      , "UGU" },
    {"Cysteine"      , "UGC" },
    {"Tryptophan"    , "UGG" },
    {"STOP"          , "UAA" },
    {"STOP"          , "UAG" },
    {"STOP"          , "UGA" }
};

std::vector<std::string> proteins(std::string rna_sequence)
{
    std::vector<std::string> output = {};
    std::string current_output = codon_protein_map.at(rna_sequence);
    if (current_output == "STOP")
    {
        return output;
    }
    else 
        output.push_back(current_output);
    return output;
}

}  // namespace protein_translation
