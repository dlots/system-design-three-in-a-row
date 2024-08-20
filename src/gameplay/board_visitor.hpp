#pragma once

#include "visitor.hpp"

#include "board.hpp"

namespace Gameplay {

class BoardVisitor : public Utilities::Visitor<Board, BoardCommand>{
public:
    virtual ~BoardVisitor() = default;
};

}