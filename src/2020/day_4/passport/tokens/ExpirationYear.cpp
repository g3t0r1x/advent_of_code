/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "ExpirationYear.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

ExpirationYear::ExpirationYear(Passport& passport)
    : passport_(passport)
{
}

bool ExpirationYear::canHandle(const std::string& input) const
{
    return input == "eyr";
}

void ExpirationYear::process(const std::string& value)
{
    passport_.eyr_ = createValidationDetail(value);
}

bool ExpirationYear::isPrevalidated(const std::string& value) const
{
    return not value.empty();
}

bool ExpirationYear::isValidated(const std::string& value) const
{
    if (not isNumber(value))
    {
        return false;
    }

    int num = std::stoi(value);

    return value.size() == 4 && num >= 2020 && num <= 2030;
}

} // namespace tokens
} // namespace passport
} // namespace year2020_day4
