#include "clock.h"

namespace date_independent {
    clock clock::at(int hour, int minute)
    {
        int total_minutes = 60 * hour + minute;
        int total_hours = total_minutes / 60;

        int total_minutes_mod_60 = total_minutes % 60;
        if( total_minutes_mod_60 < 0)
        {
            total_hours -= 1;
            total_minutes_mod_60 = 60 + (total_minutes_mod_60 % 60);
        }
        int total_hours_mod_24 = total_hours % 24;
        if( total_hours_mod_24 < 0)
        {
            total_hours_mod_24 = 24 + (total_hours_mod_24 % 24);
        }
        
        return clock (total_hours_mod_24, total_minutes_mod_60);
    }

    clock::operator std::string() const 
    {
        std::string hour_component = std::to_string(hour_);
        if( hour_ < 10)
        {
            hour_component = "0" + hour_component;
        }

        std::string minute_component = std::to_string(minute_);
        if( minute_ < 10)
        {
            minute_component = "0" + minute_component;
        }

        return hour_component + ":" + minute_component;
    }

    clock clock::plus(int minutes_to_add)
    {
        return clock::at(hour_,minute_ + minutes_to_add);
    }

    bool clock::operator==(const clock clock2) const
    {
        return (hour_ == clock2.hour_ and minute_ == clock2.minute_);
    }

}  // namespace date_independent
