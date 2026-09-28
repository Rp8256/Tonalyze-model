#ifndef USER_H
#define USER_H

#include <string>

class User {

private:
	int userId;
	std::string firstName;
	std::string lastName;
	std::string email;
	std::string passwordHash;
	std::string phoneNumber;
	std::string createdAt;

public:
	boolean login();

	boolean hasNoShowRestriction();
};

#endif
