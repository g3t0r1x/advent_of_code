/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Scanner.hpp"

#include <algorithm>

namespace year2020_day4
{
namespace passport
{

uint64_t Scanner::prevalidate(const Passports& passports) const
{
    return std::count_if(passports.cbegin(), passports.cend(),
        [](const auto& passport)
        {
            return passport->isPrevalidated();
        });
}

uint64_t Scanner::validate(const Passports& passports) const
{
    return std::count_if(passports.cbegin(), passports.cend(),
        [](const auto& passport)
        {
            return passport->isValidated();
        });
}

} // namespace passport
} // namespace year2020_day4
