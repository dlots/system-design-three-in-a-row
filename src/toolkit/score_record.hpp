#pragma once

namespace StatsAndRecords {

class ScoreRecord {
    virtual bool isSamePlayer(const ScoreRecord& record) = 0;
};

}