#ifndef NOTE_H
#define NOTE_H

class Note {

private:
	DetectionResult detection_result;
	String pitch;
	int startTimeSec;
	int durationSec;
	boolean isPitched;
	float confidenceScore;
	DetectionResult detection_result;
};

#endif
