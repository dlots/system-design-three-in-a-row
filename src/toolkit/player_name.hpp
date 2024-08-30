#pragma once

namespace StatsAndRecords {

class PlayerName {
public:
    virtual ~PlayerName() = default;

    virtual const PlayerName* concatenate(const PlayerName& other) const = 0;
    virtual bool equals(const PlayerName& other) const = 0;
    virtual const char* getValue() const = 0;
    virtual const PlayerName* clone() const = 0;
};

}
