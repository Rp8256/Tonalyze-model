#ifndef DETECTIONJOB_H
#define DETECTIONJOB_H

class DetectionJob {

private:
	AudioFile audio_file;
	DetectionResult detection_result;
	int jobId;
	String status;
	int queuePosition;
	Date startedAt;
	Date completedAt;
	AudioFile audio_file;
	DetectionResult detection_result;

public:
	void enqueue();

	void process();

	String getStatus();
};

#endif
