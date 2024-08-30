#pragma once

#include "../framework/base_hierarchy.hpp"
#include "../framework/base_status_enum.hpp"
#include "../toolkit/coordinates.hpp"
#include "tile.hpp"

namespace Gameplay {

class BoardManipulator;

COMMAND_STATUS(BoardCommandStatus,
    NotInitialized, // Board is not initialized
    NotAdjacent,    // Tiles are not adjacent
    EmptyTile       // One of the tiles is empty
);

using Coordinates = Toolkit::Coordinates;

// Board interface for all users
class Board : public Framework::Any {
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

    virtual void searchForFirstCombination() = 0;

    virtual void searchForAllCombinations() = 0;

    virtual void applyBonus(const BoardManipulator& bonus, const Coordinates& coordinates) = 0;

// Command status queries

    virtual BoardCommandStatus getSwapTilesStatus() = 0;
};

}
