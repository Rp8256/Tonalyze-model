#ifndef DETECTIONRESULT_H
#define DETECTIONRESULT_H

class DetectionResult {

private:
	DetectionJob detection_job;
	std::vector<Instrument> instruments;
	std::vector<Note> notes;
	std::vector<LyricLine> lyric_lines;
	std::vector<Correction> corrections;
	std::vector<ExportFile> export_files;
	int resultId;
	boolean musicDetected;
	Date createdAt;
	DetectionJob detection_job;
	std::vector<LyricLine> lyric_lines;
	std::vector<ExportFile> export_files;

public:
	void generatePDF();

	void generateMIDI();
};

#endif
