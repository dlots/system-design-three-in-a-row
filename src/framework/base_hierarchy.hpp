#pragma once

#include <string>

namespace Framework {

class General {

// Forbid other classes inherit General
protected:
    General() {}
    friend class Any;

public:
    virtual ~General() = default;

    virtual void copyFrom(const General& other) = 0;
    
    virtual General clone() = 0;

    virtual bool equals(const General& other) = 0;

    virtual std::string serialize() = 0;

    virtual void deserialize(const std::string& serializedData) = 0;

    virtual std::string print() = 0;
};

class Any : public General {
public:
    virtual ~Any() = default;
};

}
