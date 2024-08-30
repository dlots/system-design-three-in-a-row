#pragma once

#include <vector>

#include "coordinates.hpp"

namespace Toolkit {

template <typename T>
class Matrix {
public:
// Queries
    virtual const T& getElement() {}

// Commands
    virtual void clearMatrix() {}
    virtual void clearElement(Coordinates coordinates) {}
    virtual void swap(Coordinates first, Coordinates second) {}

// Command status queries

private:
    using Storage = std::vector<T>;
};

}