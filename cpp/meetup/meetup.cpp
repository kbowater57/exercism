#include "meetup.h"

namespace meetup {
    boost::gregorian::date meetup::scheduler::monteenth() const
    {
        return boost::gregorian::date(2013, boost::gregorian::May, 13);
    }
}  // namespace meetup
