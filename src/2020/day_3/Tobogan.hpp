/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_3__TOBOGAN_HPP__
#define __SRC__2020__DAY_3__TOBOGAN_HPP__

#include "ITobogan.hpp"

#include "utils/logger/Logger.hpp"

namespace year2020_day3
{

class Tobogan : public ITobogan
{
public:
    explicit Tobogan(const Coords& position);

    void reset(const Coords& position) override;
    Coords position() const override;
    void move(const Coords& slope) override;
    void encounter(const squares::Empty& empty) override;
    void encounter(const squares::Tree& tree) override;
    uint64_t encounters() override;

private:
    Coords position_;
    uint64_t encounters_;
    Logger logger_;
};

} // namespace year2020_day3

#endif // __SRC__2020__DAY_3__TOBOGAN_HPP__
