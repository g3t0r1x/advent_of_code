/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "TokenBase.hpp"

#include <algorithm>

#include "utils/string_ext/SplitBy.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

void TokenBase::apply(const std::string& input)
{
    string_ext::Tokens result = string_ext::SplitBy<Colon>(input);
    const auto& key = result[0];
    const auto& value = result[1];

    if (canHandle(key))
    {
        process(value);
        return;
    }

    if (next_)
    {
        next_->apply(input);
    }
}

void TokenBase::setNext(TokenPtr token)
{
    next_ = token;
}

ValidationDetail TokenBase::createValidationDetail(const std::string& value)
{
    return ValidationDetail{ value, isPrevalidated(value), isValidated(value) };
}

bool TokenBase::isNumber(const std::string& value) const
{
    return std::all_of(value.cbegin(), value.cend(),
        [](const char letter)
        {
            return std::isdigit(letter);
        });
}

} // namespace tokens
} // namespace passport
} // namespace year2020_day4
