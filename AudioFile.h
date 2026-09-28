#ifndef AUDIOFILE_H
#define AUDIOFILE_H

class AudioFile {

private:
	User user;
	DetectionJob detection_job;
	int fileId;
	String fileName;
	String format;
	int durationSec;
	Date uploadTimestamp;
	String source;
	DetectionJob detection_job;

public:
	boolean validateFormat();
};

#endif
