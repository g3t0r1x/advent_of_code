/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_5__BISECTDATA_HPP__
#define __SRC__2020__DAY_5__BISECTDATA_HPP__

#include <cstdint>

namespace year2020_day5
{

class BisectData
{
public:
    explicit BisectData(const uint64_t max);

    void low();
    void high();

    operator uint64_t();

private:
    uint64_t size();

    uint64_t min_;
    uint64_t max_;
};

} // namespace year2020_day5

#endif // __SRC__2020__DAY_5__BISECTDATA_HPP__
