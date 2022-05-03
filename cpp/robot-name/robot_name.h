#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

#include <string>
#include <cstdlib>

namespace robot_name {
    class robot{
        public:
            robot()
            {
                name_ = generate_name();
            }
                
            std::string name () const{return name_;};

        private:
            std::string name_;
            std::string generate_name();
            std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    };
}  // namespace robot_name

#endif // ROBOT_NAME_H
