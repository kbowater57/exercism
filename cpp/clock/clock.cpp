#include "clock.h"

namespace date_independent {
    std::string clock::at(int hour, int minute)
    {
        if( hour < 0)
        {
            hour = 24 + (hour % 24);
        }
        int modified_hour = (hour + minute / 60)% 24;
        std::string hour_component = std::to_string(modified_hour);
        if( modified_hour < 10)
        {
            hour_component = "0" + hour_component;
        }
        
        int modified_minute = minute % 60;
        std::string minute_component = std::to_string(modified_minute);
        if( modified_minute < 10)
        {
            minute_component = "0" + minute_component;
        }
        return hour_component + ":" + minute_component;
    }
}  // namespace date_independent
