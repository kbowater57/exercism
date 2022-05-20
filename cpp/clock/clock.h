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

            explicit operator std::string() const;

            clock plus(int minutes_to_add);

            bool operator==(const clock clock2) const;
            bool operator!=(const clock clock2) const {return !(clock2 == *this);};

        private:
            int hour_;
            int minute_;
    };

}  // namespace date_independent

#endif // CLOCK_H
