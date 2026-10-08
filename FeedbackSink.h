#ifndef FEEDBACKSINK_H
#define FEEDBACKSINK_H
#include <string>
class FeedbackSink {
public:
    virtual ~FeedbackSink() = default;
    virtual void record(const std::string& comment) = 0;
};
#endif
