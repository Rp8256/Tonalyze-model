#ifndef FEEDBACK_H
#define FEEDBACK_H
#include <string>
#include "User.h"
#include "FeedbackSink.h"
class Feedback {
private:
    User user;
    std::string comment;
    std::string submittedAt;
public:
    Feedback(std::string comment);
    void submit(FeedbackSink& sink);
};
#endif
