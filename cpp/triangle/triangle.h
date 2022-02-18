#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {

    enum class flavor
    {
        equilateral,
        isosceles,
        other
    };

    flavor kind(int side1, int side2, int side3);
}  // namespace triangle

#endif // TRIANGLE_H
