#ifndef UPLOADQUOTA_H
#define UPLOADQUOTA_H
#include <string>
#include "User.h"
#include "Clock.h"
class UploadQuota {
private:
    User user;
    std::string rollingWindowStart;
    long long cooldownUntilSeconds;
public:
    UploadQuota(long long cooldownUntilSeconds = 0);
    bool checkQuota(int mins);
    bool isInCooldown(const Clock& clock) const;
    void startCooldown();
};
#endif
