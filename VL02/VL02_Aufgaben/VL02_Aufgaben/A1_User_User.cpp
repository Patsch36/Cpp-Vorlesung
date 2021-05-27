#include "A1_User_User.h"

int A1_User_User::_id = 0;

A1_User_User::A1_User_User(std::string name) : _name(name)
{
	_userID = _id;
	_id++;
}

void A1_User_User::printData()
{
	std::cout << "Name:\t" << _name << std::endl << "ID:\t" << _userID << std::endl;
}
