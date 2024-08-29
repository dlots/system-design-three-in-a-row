#pragma once

namespace Gameplay {

class Row {
    
};

class Column {

};

class Coordinates {
public:
    virtual Row getRow() = 0;
    virtual Column getColumn() = 0;
};

}