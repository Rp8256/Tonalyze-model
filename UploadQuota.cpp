#include "UploadQuota.h"

UploadQuota::UploadQuota(long long cooldownUntilSeconds)
    : cooldownUntilSeconds(cooldownUntilSeconds) {}

bool UploadQuota::checkQuota(int mins) {
    return mins <= 10;
}

bool UploadQuota::isInCooldown(const Clock& clock) const {
    return clock.nowSeconds() < cooldownUntilSeconds;
}

void UploadQuota::startCooldown() {
    // TODO - set cooldownUntilSeconds from a real Clock in production code
}
