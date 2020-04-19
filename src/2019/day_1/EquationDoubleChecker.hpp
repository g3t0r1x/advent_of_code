/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2019__DAY_1__EQUATIONDOUBLECHECKER_HPP__
#define __SRC__2019__DAY_1__EQUATIONDOUBLECHECKER_HPP__

#include <vector>

#include "impl/Converter.hpp"

#include "utils/logger/Logger.hpp"

namespace year2019_day1
{

class EquationDoubleChecker
{
public:
    EquationDoubleChecker();
    uint64_t calculate(const std::vector<uint64_t>& masses);

private:
    impl::Fuel calculateRecursively(uint64_t mass);

    impl::Converter converter_;
    Logger logger_;
};

} // namespace year2019_day1

#endif // __SRC__2019__DAY_1__EQUATIONDOUBLECHECKER_HPP__
