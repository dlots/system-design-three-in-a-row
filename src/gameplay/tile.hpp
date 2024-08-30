#pragma once

#include <optional>

#include "../toolkit/matrix.hpp"
#include "gem.hpp"

namespace Gameplay {

class Tile {
public:
    virtual ~Tile() = default;

// Commands

// Command status queries

private:
    std::optional<Gem> mGem;
};

using TileMatrix = Toolkit::Matrix<Tile>;

}