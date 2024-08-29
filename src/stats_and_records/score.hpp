#pragma once

#include <cstdint>

namespace StatsAndRecords {

class ScoreMultiplier {
    virtual ~ScoreMultiplier() = default;
};

class Score {
public:
    virtual ~Score() = default;

    virtual const Score increase(const Score& reward) const = 0;
    virtual const Score decrease(const Score& penalty) const = 0;
    virtual const Score adjustByMultiplier(const ScoreMultiplier multiplier) const = 0;

    virtual bool equals(const Score& other) const = 0;
    virtual bool isLessThan(const Score& other) const = 0;
    virtual bool isGreaterThan(const Score& other) const = 0;

    virtual int64_t getValue() const = 0;

    virtual const Score* clone() const = 0;
};

}