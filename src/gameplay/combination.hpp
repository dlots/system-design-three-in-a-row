#pragma once

#include "board_visitor.hpp"

namespace Gameplay {

class Combination : public BoardVisitor {
public:
    virtual ~Combination() = default;
};

}
