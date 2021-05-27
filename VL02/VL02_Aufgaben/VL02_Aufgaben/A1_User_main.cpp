#include "A1_User_User.h"
#include <array>

int main()
{
	std::array<std::string, 10> names = { "Peter", "Claudia", "Marie", "Lissie", "Clemens", "Luisa" , "Mia", "Micky", "Juergen", "Johann" };
	std::array<A1_User_User*, names.size()> users;
	int counter = 0;

	for (auto name : names)
	{
		users[counter] = new A1_User_User(name);
		counter++;
	}

	for (auto user : users)
		user->printData();

	return 0;
}

