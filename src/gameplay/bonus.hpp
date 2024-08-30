#pragma once

#include "board_manipulator.hpp"

namespace Gameplay {

class BonusImpl : public BoardManipulatorImpl {
    virtual ~BonusImpl() = default;

    explicit BonusImpl(ManipulableBoardPointer board) :
        BoardManipulatorImpl(board) {
    }
};

class ClearBoardBonus final : public BonusImpl {
public:
    virtual ~ClearBoardBonus() = default;
    using BonusImpl::BonusImpl;

    virtual const Score changeBoardAndCalculateScore(Coordinates coordinates) const final {

    }
};

class DeleteGemTypeBonus final : public BonusImpl {
public:
    virtual ~DeleteGemTypeBonus() = default;
    using BonusImpl::BonusImpl;

    virtual const Score changeBoardAndCalculateScore(Coordinates coordinates) const final {

    }
};

class ClearRowBonus final : public BonusImpl {
public:
    virtual ~ClearRowBonus() = default;
    using BonusImpl::BonusImpl;

    virtual const Score changeBoardAndCalculateScore(Coordinates coordinates) const final {

    }
};

class ClearColumnBonus final : public BonusImpl {
public:
    virtual ~ClearColumnBonus() = default;
    using BonusImpl::BonusImpl;

    virtual const Score changeBoardAndCalculateScore(Coordinates coordinates) const final {

    }
};

}
