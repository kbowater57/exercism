#include "triangle.h"

#include <exception>
#include <stdexcept>

namespace triangle {

    flavor kind(int side1, int side2, int side3)
    {
        if(side1 == 0 or side2 == 0 or side3 == 0)
        {
            throw std::domain_error("Zero size triangles are illegal!");
        }

        return kind(double(side1),double(side2),double(side3));
    }

    flavor kind(double side1, int side2, int side3)
    {
        return kind(double(side1),double(side2),double(side3));
    }

    flavor kind(double side1, double side2, double side3)
    {
        if(side1 < 0 or side2 < 0 or side3 < 0)
        {
            throw std::domain_error("Triangles can't have negative side lengths!");
        }

        if(side1 + side2 < side3 or side1 + side3 < side2 or side2 + side3 < side1)
        {
            throw std::domain_error("Triangles have to satisfy the triangle inequality!");
        }        

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
    }


}  // namespace triangle
