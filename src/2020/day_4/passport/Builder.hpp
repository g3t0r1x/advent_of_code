/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_4__PASSPORT__BUILDER_HPP__
#define __SRC__2020__DAY_4__PASSPORT__BUILDER_HPP__

#include "Passport.hpp"

#include "IToken.hpp"

namespace year2020_day4
{
namespace passport
{

class Builder
{
public:
    Builder();
    PassportPtr apply(const std::vector<std::string>& input);

protected:
    Passport& passport_;

private:
    Passport p_;
    TokenPtr passportTokensChain_;
};

} // namespace passport
} // namespace year2020_day4

#endif // __SRC__2020__DAY_4__PASSPORT__BUILDER_HPP__
