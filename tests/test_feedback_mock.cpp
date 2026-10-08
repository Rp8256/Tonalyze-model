#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../Feedback.h"
#include "../FeedbackSink.h"

class MockFeedbackSink : public FeedbackSink {
public:
    MOCK_METHOD(void, record, (const std::string& comment), (override));
};

TEST(FeedbackTest, SubmitRecordsTheCommentExactlyOnce) {
    MockFeedbackSink mockSink;
    Feedback feedback("The pitch detection missed a note in the bridge.");
    EXPECT_CALL(mockSink, record("The pitch detection missed a note in the bridge."))
        .Times(1);
    feedback.submit(mockSink);
}
