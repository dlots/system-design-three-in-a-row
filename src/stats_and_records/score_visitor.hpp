#pragma once

#include "utilities/visitor.hpp"
#include "gameplay/gem.hpp"
#include "score.hpp"

namespace StatsAndRecords {

class ScoreVisitor : public Utilities::Visitor<Gameplay::Gem, Score> {
    
}

}