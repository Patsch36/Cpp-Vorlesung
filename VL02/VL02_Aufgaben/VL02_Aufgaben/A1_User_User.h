#pragma once
#include <string>
#include <iostream>

class A1_User_User
{
	std::string _name;
	static int _id;
	int _userID;
public:
	// Cunstructor
	A1_User_User(std::string name = "Hans");

	// print user-data
	void printData();

};

