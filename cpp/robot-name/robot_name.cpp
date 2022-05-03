#include "robot_name.h"

namespace robot_name {
    std::string robot::generate_name()
    {
        std::string first_char = std::string(1,alphabet[rand() % 26]);
        std::string second_char = std::string(1,alphabet[rand() % 26]);
        std::string first_num = std::string(1,alphabet[rand() % 10 + 26]);
        std::string second_num = std::string(1,alphabet[rand() % 10 + 26]);
        std::string third_num = std::string(1,alphabet[rand() % 10 + 26]);
        return first_char + second_char + first_num + second_num + third_num;
        
    }
}  // namespace robot_name
