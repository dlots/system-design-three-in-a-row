#pragma once

#include "utilities/strong_typedef.hpp"

using Utilities::StrongTypedef;

namespace Gameplay {

using Row = StrongTypedef<size_t>;
using Column = StrongTypedef<size_t>;

class Coordinates {
public:
    virtual Row getRow() = 0;
    virtual Column getColumn() = 0;
};

}