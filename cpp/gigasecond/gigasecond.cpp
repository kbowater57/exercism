#include "gigasecond.h"

namespace gigasecond {
    boost::posix_time::ptime advance(boost::posix_time::ptime input){
        input = input + boost::posix_time::seconds(1000000000);
        return input;
    }
}  // namespace gigasecond
