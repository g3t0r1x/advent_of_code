/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Batch.hpp"

#include "passport/Builder.hpp"

namespace year2020_day4
{

Batch::Batch(const std::vector<std::string>& input)
{
    SinglePassportBatch data;

    for(const auto& element : input)
    {
        if (element.empty())
        {
            passportsBatch_.push_back(data);
            data.clear();
            continue;
        }

        data.push_back(element);
    }
}

passport::Passports Batch::convertToPassports()
{
    passport::Passports result;

    for (const auto& singlePassportBatch : passportsBatch_)
    {
        const auto passport = passport::Passport::create().apply(singlePassportBatch);
        result.push_back(passport);
    }

    return result;
}

} // namespace year2020_day4
