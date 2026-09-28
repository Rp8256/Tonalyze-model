#ifndef CORRECTION_H
#define CORRECTION_H

class Correction {

private:
	DetectionResult detection_result;
	int correctionId;
	String elementType;
	String originalValue;
	String correctedValue;
	Date correctedAt;
	DetectionResult detection_result;

public:
	void apply();
};

#endif
