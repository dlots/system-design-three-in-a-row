#pragma once

namespace Utilities {

template <typename Executor>
class Command {
public:
    using CommandType = typename Executor::CommandType;
    using CommandData = typename Executor::CommandData;

    explicit Command(CommandType type_, CommandData data_) : type(type_), data(data_) {}
    
    void execute(Executor& executor);

private:
    CommandType type;
    CommandData data;
};

class CommandList {

};

}