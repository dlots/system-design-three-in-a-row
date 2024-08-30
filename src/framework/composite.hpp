#pragma once

#include <functional>

namespace Framework {

template <typename T>
class Composite {
public:
    virtual ~Composite() = default;

    void applyToAll(const std::function<void(const std::unique_ptr<T>& t)>& operation) const {
        std::for_each(mElements.begin(), mElements.end(), operation);
    }

    void addElement(std::unique_ptr<T> t) {
        mElements.push_back(std::move(t));
    }

private:
    std::vector<std::unique_ptr<T>> mElements;

};

}