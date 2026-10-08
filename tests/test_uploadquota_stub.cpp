#include <gtest/gtest.h>
#include "../UploadQuota.h"
#include "../Clock.h"

class FixedClock : public Clock {
public:
    explicit FixedClock(long long fixedTime) : fixedTime(fixedTime) {}
    long long nowSeconds() const override { return fixedTime; }
private:
    long long fixedTime;
};

TEST(UploadQuotaCooldownTest, StillInCooldownBeforeExpiry) {
    UploadQuota quota(/*cooldownUntilSeconds=*/1000);
    FixedClock beforeExpiry(500);
    EXPECT_TRUE(quota.isInCooldown(beforeExpiry));
}

TEST(UploadQuotaCooldownTest, CooldownExpiredAfterDeadline) {
    UploadQuota quota(/*cooldownUntilSeconds=*/1000);
    FixedClock afterExpiry(1500);
    EXPECT_FALSE(quota.isInCooldown(afterExpiry));
}
