#include "secret_handshake.h"

namespace secret_handshake {
    std::vector<std::string> commands(int signal)
    {
        ++signal;
        return {"wink"};
    }
}  // namespace secret_handshake
