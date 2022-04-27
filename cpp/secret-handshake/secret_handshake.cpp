#include "secret_handshake.h"

namespace secret_handshake {
    std::vector<std::string> commands(int signal)
    {
        std::vector<std::string> output;
        for(int position = 0 ; position < 5 ; ++position)
        {
            bool bit = signal & (1 << position);
            if(position == 0 and bit == 1)
            {
                output.push_back("wink");
            }

            if(position == 1 and bit == 1)
            {
                output.push_back("double blink");
            }

            if(position == 2 and bit == 1)
            {
                output.push_back("close your eyes");
            }

            if(position == 3 and bit == 1)
            {
                output.push_back("jump");
            }
        }
        return output;
    }
}  // namespace secret_handshake
