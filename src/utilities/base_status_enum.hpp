#pragma once

#define DECLARE_STATUS(name, ...) \
    enum class name {             \
        Nil = 0,                  \
        Ok,                       \
        __VA_ARGS__               \
    };
