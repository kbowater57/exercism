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
        if(side1 != side2 and side1 != side3 and side2 != side3){
            return flavor::scalene;
        }
        return flavor::other;
    };


}  // namespace triangle
