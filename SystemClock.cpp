#include "SystemClock.h"
#include <ctime>

long long SystemClock::nowSeconds() const {
    return static_cast<long long>(std::time(nullptr));
}
