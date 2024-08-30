#pragma once

namespace Toolkit {

class Row {
    
};

class Column {

};

class Coordinates {
public:
    virtual Row getRow() {}
    virtual Column getColumn() {}
};

}