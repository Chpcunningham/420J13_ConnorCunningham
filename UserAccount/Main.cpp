#include "UserAccount.h"
#include <iostream>
#include <limits>
#include <string>


void ClearInputError(const std::string& errorMessage) 
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << errorMessage << std::endl;
}

int main()
{
	int userId;
	std::string username;
	std::string password;

	while (true) 
	{
		std::cout << "Please Enter User ID: ";
		std::cin >> userId;
		if (std::cin.fail())
		{
			ClearInputError("Please Enter a valid numerical ID!");
			continue;
		}
		break;
	}
	std::cin.ignore();

	std::cout << "Please choose a username: ";
	std::getline(std::cin, username);

	std::cout << "Please choose your password: ";
	std::getline(std::cin, password);

	UserAccount accountInfo(userId, username, password);


	std::cout << "\nThank you! \nPlease login: ";
	bool loginSucceded = false;
	std::string enteredUserName, enteredPassword;

	do 
	{
		std::cout << "Please Enter your UserName: ";
		std::getline(std::cin, enteredUserName);

		std::cout << "Please Enter your Password: ";
		std::getline(std::cin, enteredPassword);

		if (accountInfo.Login(enteredUserName, enteredPassword)) 
		{
			int a = accountInfo.getID();
			std::string id = std::to_string(a);
			loginSucceded = true;
			std::cout << " Login Succesful! User ID: " + id;
		}
		else 
		{
			std::cout << "Username or Password was incorrect! Try Again!\n";
		}
	} while (!loginSucceded);

	

}
	