#pragma once

#include <vector>

#include "base_status_enum.hpp"
#include "composite.hpp"

namespace Framework {

GENERIC_COMMAND_STATUS(GenericVisitStatus);

template <typename T, typename Result>
class Visitor {
public:
    virtual ~Visitor() = default;

    Visitor() : mResult{} {
        static_assert(std::is_default_constructible<Result>::value, "Result is not default constructible");
    }

    Visitor(Result result) : mResult{result} {
    }

// Queries
    Result getResult() {
        return mResult;
    }

// Commands
    virtual void visit(T& t) {}

// Command status queries
    GenericVisitStatus getVisitStatus() { return mVisitStatus; };

private:
    GenericVisitStatus mVisitStatus;
    Result mResult;
};

}
