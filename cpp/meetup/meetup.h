#if !defined(MEETUP_H)
#define MEETUP_H

#include <boost/date_time/gregorian/gregorian.hpp>
namespace meetup {
    class scheduler
    {
        public:
            scheduler(boost::gregorian::greg_month month, int year)
            {
                date_ = boost::gregorian::date(year, month, 1);
            };

            boost::gregorian::date monteenth() const;

        private:
            boost::gregorian::date date_;
    };
}  // namespace meetup

#endif // MEETUP_H
