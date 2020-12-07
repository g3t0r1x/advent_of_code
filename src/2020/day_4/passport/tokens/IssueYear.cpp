/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "IssueYear.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

IssueYear::IssueYear(Passport& passport)
    : passport_(passport)
{
}

bool IssueYear::canHandle(const std::string& input) const
{
    return input == "iyr";
}

void IssueYear::process(const std::string& value)
{
    passport_.iyr_ = createValidationDetail(value);
}

bool IssueYear::isPrevalidated(const std::string& value) const
{
    return not value.empty();
}

bool IssueYear::isValidated(const std::string& value) const
{
    if (not isNumber(value))
    {
        return false;
    }

    int num = std::stoi(value);

    return value.size() == 4 && num >= 2010 && num <= 2020;
}

} // namespace tokens
} // namespace passport
} // namespace year2020_day4
