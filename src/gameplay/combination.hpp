#pragma once

#include "../stats_and_records/score.hpp"
#include "../toolkit/coordinates.hpp"
#include "board_manipulator.hpp"
#include "manipulable_board.hpp"

namespace Gameplay {

using Coordinates = Toolkit::Coordinates;

class CombinationImpl : public BoardManipulatorImpl {
public:
    virtual ~CombinationImpl() = default;

    explicit CombinationImpl(ManipulableBoardPointer board, StatsAndRecords::ScoreMultiplier multiplier) :
        BoardManipulatorImpl(board, multiplier) {
    }
};

class HorizontalLineCombination : public CombinationImpl {
public:
    virtual ~HorizontalLineCombination() = default;
    using CombinationImpl::CombinationImpl;

    virtual const Score changeBoardAndCalculateScore(Coordinates coordinates) const final {

    }
};

class VerticalLineCombination : public CombinationImpl {
public:
    virtual ~VerticalLineCombination() = default;
    using CombinationImpl::CombinationImpl;

    virtual const Score changeBoardAndCalculateScore(Coordinates coordinates) const final {

    }
};

}
