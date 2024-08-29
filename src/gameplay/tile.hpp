#pragma once

namespace Gameplay {

class Tile {
public:
    virtual ~Tile() = default;

// Queries
    virtual char getSymbol() = 0;

// Commands

// Command status queries

};

class EmptyTile : public Tile {

};

}