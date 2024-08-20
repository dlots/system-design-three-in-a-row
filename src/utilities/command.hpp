#pragma once

namespace Utilities {

template <typename CommandType, typename CommandData>
class Command {
public:
    explicit Command(CommandType type_, CommandData data_) : type(type_), data(data_) {}
    CommandType getType();
    CommandData getData();

private:
    CommandType type;
    CommandData data;
};

}