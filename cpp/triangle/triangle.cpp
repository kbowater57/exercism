#include "triangle.h"

namespace triangle {

    flavor kind(int side1, int side2, int side3)
    {
        if(side1 == side2 and side2 == side3){
            return flavor::equilateral;
        }
        if(side1 == side2 or side1 == side3 or side2 == side3){
            return flavor::isosceles;
        }
        return flavor::other;
    };


}  // namespace triangle
