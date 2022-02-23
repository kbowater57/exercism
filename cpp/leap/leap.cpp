#include "leap.h"

namespace leap {

bool is_leap_year(int year)
{
    return (year % 100 ? year % 4 == 0 : year % 400 == 0);
}

}  // namespace leap
