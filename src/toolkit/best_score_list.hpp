#pragma once

#include <stddef.h>

#include "score.hpp"
#include "score_record.hpp"

namespace StatsAndRecords {

class BestScoreList {
public:
    virtual ~BestScoreList() = default;

    virtual void addScore(ScoreRecord& score) = 0;

    virtual size_t size() const = 0;

    virtual void clear() = 0;

    virtual const BestScoreList getBestScore() const = 0;
};

}