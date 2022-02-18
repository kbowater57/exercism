#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
    class space_age{
        private:
            float seconds_{};
            const float mercury_year = 0.2408467;
            const float venus_year = 0.61519726;
            const float mars_year = 1.8808158;
            const float jupiter_year = 11.862615;
            const float saturn_year = 29.447498;
            const float uranus_year = 84.016846;
            const float neptune_year = 164.79132;

            const float earth_year_in_seconds = 31557600;
        
        public:
            space_age(float seconds){seconds_ = seconds;};
            float seconds() const {return seconds_;}; 
            float on_mercury() const;
            float on_venus() const;
            float on_earth() const;
            float on_mars() const;
            float on_jupiter() const;
            float on_saturn() const;
            float on_uranus() const;
            float on_neptune() const;
            
    };
}  // namespace space_age

#endif // SPACE_AGE_H
