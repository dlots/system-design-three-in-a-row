#pragma once

// Concatenates two tokens
#define CONCAT(a, b) a##_##b

// Expands the base name with each suffix
#define EXPAND1(name, suffix1) CONCAT(name, suffix1)
#define EXPAND2(name, suffix1, suffix2) EXPAND1(name, suffix1), CONCAT(name, suffix2)
#define EXPAND3(name, suffix1, suffix2, suffix3) EXPAND2(name, suffix1, suffix2), CONCAT(name, suffix3)
#define HIGHEST_LEVEL_EXPAND EXPAND3

// Main macro that calls the appropriate expand macro
#define EXPAND(name, ...) HIGHEST_LEVEL_EXPAND(name, __VA_ARGS__)

#define STATUS_BASE(name)      \
    enum name {                \
        CONCAT(name, Nil) = 0, \
        CONCAT(name, Ok)       \

#define STATUS_END };

#define GENERIC_COMMAND_STATUS(name) \
    STATUS_BASE(name)        \
    STATUS_END

#define COMMAND_STATUS_INTERNAL(name, ...) \
    STATUS_BASE(name),                     \
    __VA_ARGS__                            \
    STATUS_END

#define COMMAND_STATUS(name, ...) COMMAND_STATUS_INTERNAL(name, EXPAND(name, __VA_ARGS__))
