/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Height.hpp"

#include <regex>

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

Height::Height(Passport& passport)
    : passport_(passport)
{
}

bool Height::canHandle(const std::string& input) const
{
    return input == "hgt";
}

void Height::process(const std::string& value)
{
    passport_.hgt_ = createValidationDetail(value);
}

bool Height::isPrevalidated(const std::string& value) const
{
    return not value.empty();
}

bool Height::isValidated(const std::string& value) const
{
    if (std::regex_match(value, std::regex("\\d{3}cm")))
    {
        int num = std::stoi(value);
        return value.size() == 5 && num >= 150 && num <= 193;
    }

    if (std::regex_match(value, std::regex("\\d{2}in")))
    {
        int num = std::stoi(value);
        return value.size() == 4 && num >= 59 && num <= 76;
    }

    return false;
}

} // namespace tokens
} // namespace passport
} // namespace year2020_day4
