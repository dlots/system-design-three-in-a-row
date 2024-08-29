#pragma once
#include "Score.h"
#include <string>

namespace StatsAndRecords {

class BestScoreList {
public:
    virtual ~BestScoreList() = default;

    virtual void addScore(const std::string& name, const Score* score) = 0;
    virtual const Score* getScoreAt(int index) const = 0;
    virtual const std::string& getNameAt(int index) const = 0;
    virtual int getSize() const = 0;
    virtual void clear() = 0;
    virtual const Score* getBestScore() const = 0;
    virtual const std::string& getBestScoreName() const = 0;
};

}