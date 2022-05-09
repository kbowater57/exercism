#include "clock.h"

namespace date_independent {
    std::string clock::at(int hour, int minute)
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
        // if( minute < 0)
        // {
        //     minute = 60 + (minute % 60);
        // }
        // int modified_hour = (hour + minute / 60)% 24;
        std::string hour_component = std::to_string(total_hours_mod_24);
        if( total_hours_mod_24 < 10)
        {
            hour_component = "0" + hour_component;
        }
        
        // int modified_minute = minute % 60;
        std::string minute_component = std::to_string(total_minutes_mod_60);
        if( total_minutes_mod_60 < 10)
        {
            minute_component = "0" + minute_component;
        }
        return hour_component + ":" + minute_component;
    }
}  // namespace date_independent
