/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_4__PASSPORT__PASSPORT_HPP__
#define __SRC__2020__DAY_4__PASSPORT__PASSPORT_HPP__

#include <memory>
#include <string>
#include <vector>

#include "ValidationDetail.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{

class BirthYear;
class CountryID;
class ExpirationYear;
class EyeColor;
class HairColor;
class Height;
class IssueYear;
class PassportID;

} // namespace tokens

class Builder;

class Passport
{
public:
    Passport(const Passport& other);
    Passport& operator=(const Passport& other);
    Passport(Passport&& other);
    Passport& operator=(Passport&& other);

    static Builder create();

    bool isPrevalidated() const;
    bool isValidated() const;

private:
    Passport();

    ValidationDetails validationVector() const;

    ValidationDetail byr_;
    ValidationDetail cid_;
    ValidationDetail ecl_;
    ValidationDetail eyr_;
    ValidationDetail hcl_;
    ValidationDetail hgt_;
    ValidationDetail iyr_;
    ValidationDetail pid_;

    friend class Builder;
    friend class tokens::BirthYear;
    friend class tokens::CountryID;
    friend class tokens::ExpirationYear;
    friend class tokens::EyeColor;
    friend class tokens::HairColor;
    friend class tokens::Height;
    friend class tokens::IssueYear;
    friend class tokens::PassportID;
};

using PassportPtr = std::shared_ptr<Passport>;
using Passports = std::vector<PassportPtr>;

} // namespace passport
} // namespace year2020_day4

#endif // __SRC__2020__DAY_4__PASSPORT__PASSPORT_HPP__
