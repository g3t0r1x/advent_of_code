/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "HairColor.hpp"

#include <algorithm>

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

HairColor::HairColor(Passport& passport)
    : passport_(passport)
{
}

bool HairColor::canHandle(const std::string& input) const
{
    return input == "hcl";
}

void HairColor::process(const std::string& value)
{
    passport_.hcl_ = createValidationDetail(value);
}

bool HairColor::isPrevalidated(const std::string& value) const
{
    return not value.empty();
}

bool HairColor::isValidated(const std::string& value) const
{
    return value.size() == 7
        && value[0] == '#'
        && isHex(value.substr(1));
}

bool HairColor::isHex(const std::string& value) const
{
    return std::all_of(value.cbegin(), value.cend(),
        [](const char letter)
        {
            return std::isxdigit(letter);
        });
}

} // namespace tokens
} // namespace passport
} // namespace year2020_day4
