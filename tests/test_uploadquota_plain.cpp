#include <gtest/gtest.h>
#include "../UploadQuota.h"

TEST(UploadQuotaTest, AllowsUploadsWithinTenMinuteCap) {
    UploadQuota quota;
    EXPECT_TRUE(quota.checkQuota(5));
    EXPECT_TRUE(quota.checkQuota(10));
}

TEST(UploadQuotaTest, RejectsUploadsOverTenMinuteCap) {
    UploadQuota quota;
    EXPECT_FALSE(quota.checkQuota(11));
    EXPECT_FALSE(quota.checkQuota(45));
}
