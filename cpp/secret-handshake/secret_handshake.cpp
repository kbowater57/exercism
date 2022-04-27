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
        }
        return output;
    }
}  // namespace secret_handshake
