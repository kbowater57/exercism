#include "triangle.h"

namespace triangle {

    flavor kind(int side1, int side2, int side3)
    {
        if(side1 == side2 && side2 == side3){
            return flavor::equilateral;
        }
        return flavor::other;
    };


}  // namespace triangle
