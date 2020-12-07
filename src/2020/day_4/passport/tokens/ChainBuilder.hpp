/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_4__PASSPORT__TOKENS__CHAINBUILDER_HPP__
#define __SRC__2020__DAY_4__PASSPORT__TOKENS__CHAINBUILDER_HPP__

#include "../IToken.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

class ChainBuilder
{
public:
    ChainBuilder& withToken(TokenPtr token);
    operator TokenPtr();

private:
    std::vector<TokenPtr> tokens_;
};

} // namespace tokens
} // namespace passport
} // namespace year2020_day4

#endif // __SRC__2020__DAY_4__PASSPORT__TOKENS__CHAINBUILDER_HPP__
