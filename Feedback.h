#ifndef FEEDBACK_H
#define FEEDBACK_H

class Feedback {

private:
	User user;
	int feedbackId;
	int accuracyRating;
	String comment;
	Date submittedAt;

public:
	void submit();
};

#endif
