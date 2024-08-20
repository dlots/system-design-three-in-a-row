#pragma once

namespace Gameplay {

class Gem {
public:
    virtual ~Gem() = default;

// Queries
    virtual char getSymbol() = 0;
    virtual Score getScore() = 0;

// Commands

// Command status queries


};

}