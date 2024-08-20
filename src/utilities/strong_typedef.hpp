#pragma once

namespace Utilities {

template<typename T>
class StrongTypedef {
public:
    explicit StrongTypedef(T newValue) : value(newValue) {}

    T get() const { return value_; }
    T operator*() const { return value_; } 

private:
    T value;
};

}