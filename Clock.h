#ifndef CLOCK_H
#define CLOCK_H
class Clock {
public:
    virtual ~Clock() = default;
    virtual long long nowSeconds() const = 0;
};
#endif
