#pragma once

#include <concepts>

namespace Utilities {

template <typename T>
concept HasCommandData = requires { typename T::CommandData; };

template <typename T>
concept HasCommandType = requires { typename T::CommandType; };

template <typename T>
concept ImplementsCommand = HasCommandData<T> && HasCommandType<T>;

template <ImplementsCommand Derived>
class Executor {
public:
    virtual ~Executor() = default;
    Executor() {
        static_assert(ImplementsCommand<Derived>);
    }
};

}