/**
 * @file board_impl.hpp
 * @brief This file contains the definition of the BoardImpl class.
 */
#pragma once

#include <memory>

#include "combination.hpp"
#include "manipulable_board.hpp"
#include "bonus.hpp"

namespace Gameplay {

/**
 * @class BoardImpl
 * @brief Implements game board
 */
class BoardImpl : public ManipulableBoard {
public:
    virtual ~BoardImpl() = default;

    /**
     * @brief Constructor.
     *
     * Construct the board and initialize the combination which will be checked after every turn.
     * @param combination A combination to initialize the class.
     */
    BoardImpl(std::unique_ptr<BoardManipulator> combination);

    virtual void applyBonus(const BoardManipulator& bonus, const Coordinates& coordinates) const final;

private:
    std::unique_ptr<BoardManipulator> mCombination; /** Combination to check after every turn. */
};

}