#ifndef USER_H
#define USER_H

class User {

private:
	int userId;
	String firstName;
	String lastName;
	String email;
	String passwordHash;
	String phoneNumber;
	DateTime createdAt;

public:
	boolean login();

	boolean hasNoShowRestriction();
};

#endif
