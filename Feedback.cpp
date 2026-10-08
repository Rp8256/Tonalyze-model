#include "Feedback.h"

Feedback::Feedback(std::string comment) : comment(std::move(comment)) {}

void Feedback::submit(FeedbackSink& sink) {
    sink.record(comment);
}
