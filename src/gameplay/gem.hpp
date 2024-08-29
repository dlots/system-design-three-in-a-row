#pragma once

#include "stats_and_records/score.hpp"
#include "stats_and_records/score_visitor.hpp"

#include "tile.hpp"

namespace Gameplay {

class Gem : public Tile {
public:
    virtual ~Gem() = default;

// Queries

// Commands
    virtual void acceptScoreVisitor(StatsAndRecords::ScoreVisitor visitor) = 0;
    virtual void acceptCombinationVisitor() = 0;

// Command status queries


};

}