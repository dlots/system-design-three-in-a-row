#pragma once

#include "board_visitor.hpp"

namespace Gameplay {

class Bonus : public BoardVisitor {
public:
    virtual ~Bonus() = default;
};

}
