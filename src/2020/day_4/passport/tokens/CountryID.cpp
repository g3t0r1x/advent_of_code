/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "CountryID.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

CountryID::CountryID(Passport& passport)
    : passport_(passport)
{
}

bool CountryID::canHandle(const std::string& input) const
{
    return input == "cid";
}

void CountryID::process(const std::string& value)
{
    passport_.cid_ = createValidationDetail(value);
}

bool CountryID::isPrevalidated(const std::string& value) const
{
    return true;
}

bool CountryID::isValidated(const std::string& value) const
{
    return true;
}

} // namespace tokens
} // namespace passport
} // namespace year2020_day4
