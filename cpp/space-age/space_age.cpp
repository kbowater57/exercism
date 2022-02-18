#include "space_age.h"

namespace space_age 
{
    float space_age::on_earth() const
    {
        return seconds_/earth_year_in_seconds;
    }

    float space_age::on_mercury() const
    {
        return space_age::on_earth()/mercury_year;
    }

    float space_age::on_venus() const
    {
        return space_age::on_earth()/venus_year;
    }

    float space_age::on_mars() const
    {
        return space_age::on_earth()/mars_year;
    }

    float space_age::on_jupiter() const
    {
        return space_age::on_earth()/jupiter_year;
    }

    float space_age::on_saturn() const
    {
        return space_age::on_earth()/saturn_year;
    }

    float space_age::on_uranus() const
    {
        return space_age::on_earth()/uranus_year;
    }

    float space_age::on_neptune() const
    {
        return space_age::on_earth()/neptune_year;
    }

}  // namespace space_age
