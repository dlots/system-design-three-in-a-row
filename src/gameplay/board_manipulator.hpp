/**
 * @file board_manipulator.hpp
 * @brief This file contains the definition of the BoardManipulator class.
 */
#pragma once

#include "../framework/composite.hpp"
#include "manipulable_board.hpp"

namespace Gameplay {

using Score = StatsAndRecords::Score;
using ScoreMultiplier = StatsAndRecords::ScoreMultiplier;

/**
 * @class BoardManipulator
 * @brief A gameplay element which has elevated access to the board.
 * 
 * Such gameplay elements include bonuses and combinations.
 */
class BoardManipulator {
public:
    virtual ~BoardManipulator() = default;

    /**
     * @brief Apply manipulator's effects to the board.
     *
     * This method is called by the board to apply the effect of the manipulator, starting on certain coordinates.
     * @param coordinates Starting coordinates to apply the effect.
     */
    virtual void apply(const Coordinates& coordinates) const = 0;
};

// TODO: move rest to .cpp
/**
 * @class CompositeBoardManipulator
 * @brief Collection of manipulators behaving as one entity.
 * 
 * This appears as a single manipulator, so the board does not have to manage a collection.
 */
class CompositeBoardManipulator : public BoardManipulator, public Framework::Composite<BoardManipulator> {
    /**
     * @brief Apply all manipulators
     *
     * This method is called by the board to apply the effect of all manipualtors, starting on certain coordinates.
     * @param coordinates Starting coordinates to apply the effect.
     */
    virtual void apply(const Coordinates& coordinates) const final {
        applyToAll([&coordinates](const std::unique_ptr<BoardManipulator>& manipulator){ manipulator->apply(coordinates); });
    }
};

/**
 * @class BoardManipulatorImpl
 * @brief Implements board manipulator.
 */
class BoardManipulatorImpl : public BoardManipulator {
    static constexpr const ScoreMultiplier kDefaultScoreMultiplayer{};

protected:
    BoardManipulatorImpl(ManipulableBoardPointer board, ScoreMultiplier multiplier) :
        mBoard{board},
        mMultiplier{multiplier} {
    }

    BoardManipulatorImpl(ManipulableBoardPointer board)
        : BoardManipulatorImpl(board, kDefaultScoreMultiplayer) {
    }

    virtual const Score changeBoardAndCalculateScore(Coordinates coordinates) const = 0;

    virtual void apply(const Coordinates& coordinates) const final {
        const Score awardedScore = changeBoardAndCalculateScore(coordinates);
        sendScoreToHistory(mMultiplier.multiplyScore(awardedScore));
    }

private:
    void sendScoreToHistory(const Score& score) const {}

protected:
    const ManipulableBoardPointer mBoard;
    const ScoreMultiplier mMultiplier;
};

using BoardManipulatorPointer = std::weak_ptr<BoardManipulator>;

}
