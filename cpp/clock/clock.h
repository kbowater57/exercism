#if !defined(CLOCK_H)
#define CLOCK_H

#include <string>

namespace date_independent {
    namespace clock{
    // class clock
    // {
    //     public:
    //         std::string at(int hour, int minute);
    // };
    // struct clock
    // {
    //     int hour;
    //     int minute;

    //     std::string at(int hour, int minute);        
    // };
    std::string at(int hour, int minute); 
    }

}  // namespace date_independent

#endif // CLOCK_H
