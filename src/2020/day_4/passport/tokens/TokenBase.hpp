/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_4__PASSPORT__TOKENS__TOKENBASE_HPP__
#define __SRC__2020__DAY_4__PASSPORT__TOKENS__TOKENBASE_HPP__

#include "../IToken.hpp"
#include "../ValidationDetail.hpp"

#include "utils/string_ext/Delimiter.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

class TokenBase : public IToken
{
public:
    void apply(const std::string& input) override final;
    void setNext(TokenPtr token) override final;

protected:
    ValidationDetail createValidationDetail(const std::string& value);
    bool isNumber(const std::string& value) const;

    virtual bool canHandle(const std::string& key) const = 0;
    virtual void process(const std::string& value) = 0;
    virtual bool isPrevalidated(const std::string& value) const = 0;
    virtual bool isValidated(const std::string& value)const = 0;

    std::string value_;

private:
    struct Colon : string_ext::Delimiter<':'> {};
    TokenPtr next_;
};

} // namespace tokens
} // namespace passport
} // namespace year2020_day4

#endif // __SRC__2020__DAY_4__PASSPORT__TOKENS__TOKENBASE_HPP__
