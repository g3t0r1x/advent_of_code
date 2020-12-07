/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "BirthYear.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

BirthYear::BirthYear(Passport& passport)
    : passport_(passport)
{
}

bool BirthYear::canHandle(const std::string& input) const
{
    return input == "byr";
}

void BirthYear::process(const std::string& value)
{
    passport_.byr_ = createValidationDetail(value);
}

bool BirthYear::isPrevalidated(const std::string& value) const
{
    return not value.empty();
}

bool BirthYear::isValidated(const std::string& value) const
{
    if (not isNumber(value))
    {
        return false;
    }

    int num = std::stoi(value);

    return value.size() == 4 && num >= 1920 && num <= 2002;
}

} // namespace tokens
} // namespace passport
} // namespace year2020_day4
