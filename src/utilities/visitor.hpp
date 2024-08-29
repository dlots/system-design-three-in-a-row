#pragma once

namespace Utilities {

template <class T, typename Result>
class Visitor {
public:
    virtual ~Visitor() = default;

// Queries
    virtual Result getVisitResult() = 0;

// Commands
    virtual void visit(T& t) = 0;

// Command status queries
    virtual int getVisitStatus() = 0;
};

}
