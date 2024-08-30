#pragma once

#include "../gameplay/board.hpp"
#include "../gameplay/bonus.hpp"
#include "../gameplay/combination.hpp"
#include "../gameplay/coordinates.hpp"
#include "../gameplay/gem.hpp"
#include "../gameplay/tile_matrix.hpp"
#include "../gameplay/tile.hpp"
#include "../stats_and_records/best_score_list.hpp"
#include "../stats_and_records/history_list.hpp"
#include "../stats_and_records/history.hpp"
#include "../stats_and_records/leaderboard.hpp"
#include "../stats_and_records/player_name.hpp"
#include "../stats_and_records/record.hpp"
#include "../stats_and_records/score_visitor.hpp"
#include "../stats_and_records/score.hpp"
#include "../stats_and_records/turn.hpp"

namespace Framework {

class Void :
    private Gameplay::Board,
    private Gameplay::Bonus,
    private Gameplay::Combination,
    private Gameplay::Coordinates,
    private Gameplay::Gem,
    private Gameplay::TileMatrix,
    private Gameplay::Tile,
    private StatsAndRecords::BestScoreList,
    private StatsAndRecords::History,
    private StatsAndRecords::HistoryList,
    private StatsAndRecords::Leaderboard,
    private StatsAndRecords::PlayerName,
    private StatsAndRecords::Record,
    private StatsAndRecords::ScoreVisitor,
    private StatsAndRecords::Score,
    private StatsAndRecords::Turn {

public:
    virtual ~Void() = default;
    Void() = default;
};

}