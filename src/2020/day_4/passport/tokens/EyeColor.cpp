/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "EyeColor.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

EyeColor::EyeColor(Passport& passport)
    : passport_(passport)
{
}

bool EyeColor::canHandle(const std::string& input) const
{
    return input == "ecl";
}

void EyeColor::process(const std::string& value)
{
    passport_.ecl_ = createValidationDetail(value);
}

bool EyeColor::isPrevalidated(const std::string& value) const
{
    return not value.empty();
}

bool EyeColor::isValidated(const std::string& value) const
{
    return value == "amb"
        || value == "blu"
        || value == "brn"
        || value == "gry"
        || value == "grn"
        || value == "hzl"
        || value == "oth";
}

} // namespace tokens
} // namespace passport
} // namespace year2020_day4
