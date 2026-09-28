#ifndef PERMISSIONREQUEST_H
#define PERMISSIONREQUEST_H

class PermissionRequest {

private:
	User user;
	String type;
	boolean granted;
	Date requestedAt;

public:
	void request();
};

#endif
