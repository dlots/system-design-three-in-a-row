#pragma once

#include "../stats_and_records/score.hpp"

#include "tile.hpp"

namespace Gameplay {

enum class GemType {
    Red = 0,
    Green,
    Blue,
    Yellow
};

GENERIC_COMMAND_STATUS(GemStatus);

using Score = StatsAndRecords::Score;

class Gem {
public:

// Queries
    bool isSameType(const Gem& other) const;
    Score addScore(const Score& score) const;

private:
    GemType mType;
    Score mScoreAward;
};

}