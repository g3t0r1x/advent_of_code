/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Passport.hpp"

#include <algorithm>

#include "Builder.hpp"

namespace year2020_day4
{
namespace passport
{

Passport::Passport()
    : byr_{"", false, false}
    , cid_{"", true, true}
    , ecl_{"", false, false}
    , eyr_{"", false, false}
    , hcl_{"", false, false}
    , hgt_{"", false, false}
    , iyr_{"", false, false}
    , pid_{"", false, false}
{
}

Passport::Passport(const Passport& other) = default;
Passport& Passport::operator=(const Passport& other) = default;
Passport::Passport(Passport&& other) = default;
Passport& Passport::operator=(Passport&& other) = default;

Builder Passport::create()
{
    return Builder();
}

bool Passport::isPrevalidated() const
{
    const auto data = validationVector();
    return std::all_of(data.cbegin(), data.cend(),
        [](const auto& d)
        {
            return d.isPrevalidated;
        });
}

bool Passport::isValidated() const
{
    const auto data = validationVector();
    return std::all_of(data.cbegin(), data.cend(),
        [](const auto& d)
        {
            return d.isPrevalidated && d.isValidated;
        });
}

ValidationDetails Passport::validationVector() const
{
    return { byr_, cid_, ecl_, eyr_, hcl_, hgt_, iyr_, pid_ };
}


} // namespace passport
} // namespace year2020_day4