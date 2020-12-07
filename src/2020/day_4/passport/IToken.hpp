/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_4__PASSPORT__ITOKEN_HPP__
#define __SRC__2020__DAY_4__PASSPORT__ITOKEN_HPP__

#include <memory>
#include <string>

#include "Passport.hpp"

namespace year2020_day4
{
namespace passport
{

class IToken;
using TokenPtr = std::shared_ptr<IToken>;

class IToken
{
public:
    virtual ~IToken() = default;

    virtual void apply(const std::string& input) = 0;
    virtual void setNext(TokenPtr command) = 0;
};

} // namespace passport
} // namespace year2020_day4

#endif // __SRC__2020__DAY_4__PASSPORT__ITOKEN_HPP__
