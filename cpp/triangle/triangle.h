#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {

    enum class flavor
    {
        equilateral,
        isosceles,
        scalene,
        other
    };

    flavor kind(int side1, int side2, int side3);
    flavor kind(double side1, double side2, double side3);
    flavor kind(double side1, int side2, int side3);
}  // namespace triangle

#endif // TRIANGLE_H
