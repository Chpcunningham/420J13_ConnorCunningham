#include "UserAccount.h"
#include <iostream>
#include <string>

UserAccount::UserAccount(int Id, const std::string& name, const std::string& pwd) 
{
	ID == Id;
	userName = name;
	password = pwd;
}

bool UserAccount::Login(const std::string& enteredUserName, const std::string& enteredPassword) 
{
	return (enteredUserName == userName && enteredPassword == password);
}

int UserAccount::getID()
{
	return ID;
}


