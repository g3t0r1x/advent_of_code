/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_4__PASSPORT__TOKENS__COUNTRYID_HPP__
#define __SRC__2020__DAY_4__PASSPORT__TOKENS__COUNTRYID_HPP__

#include "TokenBase.hpp"

#include "../Passport.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

class CountryID : public TokenBase
{
public:
    CountryID(Passport& passport);

    bool canHandle(const std::string& input) const override;
    void process(const std::string& value) override;
    bool isPrevalidated(const std::string& value) const override;
    bool isValidated(const std::string& value) const override;

private:
    Passport& passport_;
};

} // namespace tokens
} // namespace passport
} // namespace year2020_day4

#endif // __SRC__2020__DAY_4__PASSPORT__TOKENS__COUNTRYID_HPP__
