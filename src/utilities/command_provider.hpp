#pragma once

#include "command.hpp"
#include "visitor.hpp"

namespace Utilities {

template <typename Executor>
class CommandProvider : public Utilities::Visitor<Executor, Command<Executor>>{
public:
    virtual ~CommandProvider() = default;

    // Visits a board and provides command for board to execute
};

}