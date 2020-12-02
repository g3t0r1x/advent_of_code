/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_2__PASSWORDS_HPP__
#define __SRC__2020__DAY_2__PASSWORDS_HPP__

#include <vector>

#include "IStrategy.hpp"
#include "PasswordData.hpp"
#include "utils/logger/Logger.hpp"

namespace year2020_day2
{

class Passwords
{
public:
    explicit Passwords(const std::vector<password::Data>& passwords);

    void setStrategy(StrategyPtr strategy);
    uint64_t countValid();

private:
    std::vector<password::Data> passwords_;
    StrategyPtr strategy_;
    Logger logger_;
};

} // namespace year2020_day2

#endif // __SRC__2020__DAY_2__PASSWORDS_HPP__
