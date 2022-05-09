#include "clock.h"

namespace date_independent {
    clock clock::at(int hour, int minute)
    {
        int total_minutes = 60 * hour + minute;
        int total_hours = total_minutes / 60;
        int total_hours_mod_24 = total_hours % 24;
        int total_minutes_mod_60 = total_minutes % 60;
        if( total_minutes_mod_60 < 0)
        {
            total_hours_mod_24 -= 1;
            total_minutes_mod_60 = 60 + (total_minutes_mod_60 % 60);
        }

        if( total_hours_mod_24 < 0)
        {
            total_hours_mod_24 = 24 + (total_hours_mod_24 % 24);
        }
        
        return clock (total_hours_mod_24, total_minutes_mod_60);
    }

    // std::string plus(int mins_to_add)
    // {
    //     int hours ;
    // }
}  // namespace date_independent
