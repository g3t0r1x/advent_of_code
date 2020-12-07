/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Builder.hpp"

#include "Tokens.hpp"
#include "tokens/BirthYear.hpp"
#include "tokens/CountryID.hpp"
#include "tokens/ExpirationYear.hpp"
#include "tokens/EyeColor.hpp"
#include "tokens/HairColor.hpp"
#include "tokens/Height.hpp"
#include "tokens/IssueYear.hpp"
#include "tokens/PassportID.hpp"

#include "utils/string_ext/SplitBy.hpp"

namespace year2020_day4
{
namespace passport
{

Builder::Builder()
    : passport_(p_)
{
    passportTokensChain_ = Tokens::makeChain()
        .withToken(std::make_shared<tokens::BirthYear>(passport_))
        .withToken(std::make_shared<tokens::CountryID>(passport_))
        .withToken(std::make_shared<tokens::ExpirationYear>(passport_))
        .withToken(std::make_shared<tokens::EyeColor>(passport_))
        .withToken(std::make_shared<tokens::HairColor>(passport_))
        .withToken(std::make_shared<tokens::Height>(passport_))
        .withToken(std::make_shared<tokens::IssueYear>(passport_))
        .withToken(std::make_shared<tokens::PassportID>(passport_));
}

PassportPtr Builder::apply(const std::vector<std::string>& input)
{
    for (const auto& element : input)
    {
        passportTokensChain_->apply(element);
    }
    return std::make_shared<Passport>(p_);
}

} // namespace passport
} // namespace year2020_day4