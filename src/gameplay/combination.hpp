#pragma once

#include "command_provider.hpp"
#include "score.hpp"
#include "board.hpp"

namespace Gameplay {

class Combination : public Utilities::CommandProvider<Board> {
public:
    virtual ~Combination() = default;

    virtual StatsAndRecords::ScoreMultiplier getScoreMultiplier() = 0;
};

}
