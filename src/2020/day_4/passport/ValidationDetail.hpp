/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_4__PASSPORT__VALIDATIONDETAIL_HPP__
#define __SRC__2020__DAY_4__PASSPORT__VALIDATIONDETAIL_HPP__

#include <string>
#include <vector>

namespace year2020_day4
{
namespace passport
{

struct ValidationDetail
{
    std::string data;
    bool isPrevalidated;
    bool isValidated;
};

using ValidationDetails = std::vector<ValidationDetail>;

} // namespace passport
} // namespace year2020_day4

#endif // __SRC__2020__DAY_4__PASSPORT__VALIDATIONDETAIL_HPP__
