#pragma once

#include "board.hpp"

namespace Gameplay {

class ManipulableBoard : public Board {
public:
    virtual ~ManipulableBoard() = default;

    // Queries
    
    // Commands

    // Pre-conditions:
    //   - the board is initialized
    //   - both tiles contain a gem
    // Post-condition:
    //   - two tiles are swapped
    virtual void swapAnyTiles(Coordinates first, Coordinates second) = 0;

    // Pre-conditions:
    //  - the board is initialized
    //  - both tiles contain a gem
    // Post-condition:
    //  - tile is empty
    virtual void removeGem(Coordinates coordinates) = 0;

// Command status queries

    virtual BoardCommandStatus getSwapAnyTilesStatus() = 0;

    virtual BoardCommandStatus getRemoveGemStatus() = 0;
};

using ManipulableBoardPointer = std::weak_ptr<ManipulableBoard>;

}
