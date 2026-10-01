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
    void signUp();
    void logIn();
    void logOut();
    void updateTheme(std::string theme);
    void clearHistory();
    bool login(std::string email, std::string password);
    bool hasNoShowRestriction();
};

#endif
