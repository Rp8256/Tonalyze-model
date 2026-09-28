#ifndef UPLOADQUOTA_H
#define UPLOADQUOTA_H

class UploadQuota {

private:
	User user;
	Date rollingWindowStart;
	int cumulativeMinutes;
	Date cooldownUntil;

public:
	boolean checkQuota(int mins);

	void startCooldown();
};

#endif
