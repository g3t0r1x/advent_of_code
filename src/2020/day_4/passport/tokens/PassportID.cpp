/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "PassportID.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

PassportID::PassportID(Passport& passport)
    : passport_(passport)
{
}

bool PassportID::canHandle(const std::string& input) const
{
    return input == "pid";
}

void PassportID::process(const std::string& value)
{
    passport_.pid_ = createValidationDetail(value);
}

bool PassportID::isPrevalidated(const std::string& value) const
{
    return not value.empty();
}

bool PassportID::isValidated(const std::string& value) const
{
    return isNumber(value) && value.size() == 9;
}

} // namespace tokens
} // namespace passport
} // namespace year2020_day4
