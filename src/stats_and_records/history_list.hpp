#pragma once

#include "turn.hpp"

namespace StatsAndRecords {

class TurnList {
public:
    virtual void addTurn(const Turn& turn) = 0;

    virtual const Turn nextTurn(const Turn& turn) = 0;

    virtual void removeLastTurn() = 0;

    virtual void getTotalScore(const Turn& turn) = 0;

    virtual void size() = 0;
};

}