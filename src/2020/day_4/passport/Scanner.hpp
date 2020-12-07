/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_4__PASSPORT__SCANNER_HPP__
#define __SRC__2020__DAY_4__PASSPORT__SCANNER_HPP__

#include <cstdint>

#include "Passport.hpp"

namespace year2020_day4
{
namespace passport
{

class Scanner
{
public:
    uint64_t prevalidate(const Passports& passports) const;
    uint64_t validate(const Passports& passports) const;
};

} // namespace passport
} // namespace year2020_day4

#endif // __SRC__2020__DAY_4__PASSPORT__SCANNER_HPP__
