#if !defined(CLOCK_H)
#define CLOCK_H

#include <string>

namespace date_independent {

    class clock
    {
        public:
            static clock at(int hour, int minute);

            clock(int hour, int minute)
            {
                hour_ = hour;
                minute_ = minute;
            };

            explicit operator std::string() const 
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
            
        private:
            int hour_;
            int minute_;
    };
    // struct clock
    // {
    //     int hour;
    //     int minute;

    //     std::string at(int hour, int minute);        
    // };
    // std::string at(int hour, int minute);
    // std::string plus(int mins_to_add);
    // }

}  // namespace date_independent

#endif // CLOCK_H
