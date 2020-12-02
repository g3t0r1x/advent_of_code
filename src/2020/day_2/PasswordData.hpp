/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_2__PASSWORDDATA_HPP__
#define __SRC__2020__DAY_2__PASSWORDDATA_HPP__

#include <string>

namespace year2020_day2
{
namespace password
{

struct Policy
{
    int num1;
    int num2;
    char letter;
};

struct Data
{
    Policy policy;
    std::string password;
};

} // password
} // namespace year2020_day2

#endif // __SRC__2020__DAY_2__PASSWORDDATA_HPP__
