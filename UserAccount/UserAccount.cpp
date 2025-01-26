#include "UserAccount.h"
#include <iostream>
#include <string>

UserAccount::UserAccount(int id, const std::string& userName, const std::string& password) 
{
	ID = id;
	UserAccount::userName = userName;
	UserAccount::password = password;
}

bool UserAccount::Login(const std::string& enteredUserName, const std::string& enteredPassword) 
{
	return (enteredUserName == userName && enteredPassword == password);
}

int UserAccount::getID()
{
	return ID;
}


