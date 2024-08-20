#pragma once

#include <vector>

#include "utilities/base_status_enum.hpp"

#include "bonus.hpp"
#include "combination.hpp"
#include "coordinates.hpp"
#include "tile.hpp"

namespace Gameplay {

DECLARE_STATUS(BoardCommandStatus,
    NotInitialized, // Board is not initialized
    NotAdjacent,    // Tiles are not adjacent
    EmptyTile       // One of the tiles is empty
);

enum class CombinationAction {
    SWAP,
    REMOVE
};

using CoordinatesList = std::vector<Coordinates>;

using BoardCommand = Utilities::Command<CombinationAction, CoordinatesList>;

// Board interface for all users
class Board {
public:
    virtual ~Board() = default;

// Queries

    virtual const Tile& getTile(Coordinates coordinates) const = 0;
    
// Commands

    // Pre-conditions:
    //   - the board is initialized
    //   - tiles are adjacent
    //   - both tiles contain a gem
    // Post-condition:
    //   - two tiles are swapped
    virtual void swapTiles(Coordinates first, Coordinates second) = 0;

    virtual void registerCombination(Combination& combination) = 0;

    virtual void searchForFirstCombination() = 0;

    virtual void searchForAllCombinations() = 0;

    virtual void applyBonus(Bonus& bonus) = 0;

// Command status queries

    virtual BoardCommandStatus getSwapTilesStatus() = 0;
};

class BoardImpl : public Board {
public:
    virtual ~BoardImpl() = 0;

    virtual void applyBonus(Bonus& bonus) override {
        bonus.visit(*this);
    };
};

}
