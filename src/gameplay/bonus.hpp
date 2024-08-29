#pragma once

#include "board.hpp"
#include "command_provider.hpp"

namespace Gameplay {

class Board;

class Bonus : public Utilities::CommandProvider<Board> {
public:
    virtual ~Bonus() = default;
};

}
