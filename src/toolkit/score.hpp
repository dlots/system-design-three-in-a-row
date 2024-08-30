#pragma once

#include <cstdint>

namespace StatsAndRecords {

class Score {
public:
    virtual const Score increase(const Score& reward) const {}
    virtual const Score decrease(const Score& penalty) const {}

    virtual bool equals(const Score& other) const {}
    virtual bool isLessThan(const Score& other) const {}
    virtual bool isGreaterThan(const Score& other) const {}

    virtual int64_t getValueToShowInInterface() const {}

    virtual const Score* clone() const {}
};

class ScoreMultiplier {
public:
    virtual const Score multiplyScore(const Score& score) const {}
};

}