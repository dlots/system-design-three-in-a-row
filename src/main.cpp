#include "gameplay/board_impl.hpp"
#include "gameplay/combination.hpp"

int main(int argc, char *argv[])
{
    Gameplay::CompositeBoardManipulator compositeCombination{};
    auto combination = std::make_unique<Gameplay::HorizontalLineCombination>(Gameplay::ManipulableBoardPointer{}, StatsAndRecords::ScoreMultiplier{});
    compositeCombination.addElement(std::move(combination));
    return 0;
}