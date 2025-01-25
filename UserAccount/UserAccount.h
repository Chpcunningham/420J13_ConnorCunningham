#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <string>

class UserAccount 
{
private:
	int ID;
	std::string userName;
	std::string password;

public:
	UserAccount(int ID, const std::string& name, const std::string& pwd);

	bool Login(const std::string& enteredUserName, const std::string& enteredPassword);
	
	int getID();
};
#endif // USERACCOUNT_H
