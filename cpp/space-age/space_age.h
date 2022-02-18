#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
    class space_age{
        private:
            int seconds_{};
        
        public:
            space_age(int seconds){seconds_ = seconds;};
            float seconds() const {return seconds_;}; 
    };
}  // namespace space_age

#endif // SPACE_AGE_H
