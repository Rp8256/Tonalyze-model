#ifndef SYSTEMCLOCK_H
#define SYSTEMCLOCK_H
#include "Clock.h"
class SystemClock : public Clock {
public:
    long long nowSeconds() const override;
};
#endif
