#include "space_age.h"

namespace space_age 
{
    float space_age::on_earth() const
    {
        return seconds_/earth_year_in_seconds;
    }
}  // namespace space_age
