/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_4__BATCH_HPP__
#define __SRC__2020__DAY_4__BATCH_HPP__

#include <string>
#include <vector>

#include "passport/Passport.hpp"

namespace year2020_day4
{

using SinglePassportBatch = std::vector<std::string>;

class Batch
{
public:
    Batch(const std::vector<std::string>& input);
    passport::Passports convertToPassports();

private:
    std::vector<SinglePassportBatch> passportsBatch_;
};

} // namespace year2020_day4

#endif // __SRC__2020__DAY_4__BATCH_HPP__
