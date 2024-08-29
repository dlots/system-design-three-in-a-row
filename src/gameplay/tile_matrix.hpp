#pragma once

#include <vector>

#include "coordinates.hpp"
#include "Tile.hpp"

namespace Gameplay {

using Matrix = std::vector<std::vector<Tile>>;

class TileMatrix {
public:
    virtual ~TileMatrix() = default;

// Queries
    virtual Tile getTile() = 0;

// Commands
    virtual void clearMatrix() = 0;
    virtual void clearTile() = 0;
    virtual void swap(Coordinates first, Coordinates second);

// Command status queries


};

}