#include "two_fer.h"

namespace two_fer
{
     std::string two_fer(std::string input)
     {
         if(input != "")
         {
             return "One for " + input + ", one for me.";
         }
         return "One for you, one for me.";
     }
} // namespace two_fer

