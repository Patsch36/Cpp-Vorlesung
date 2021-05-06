#pragma once
#include <string>
#include<iostream>

namespace a1 {
	enum class __nation {de = 0, en = 1, fr = 2, it = 3};

	class Person
	{
		std::string _name;
		__nation _nation;
		const static std::string _greeting[4];


	public:
		// Constructor
		Person(std::string name, __nation nation);

		// Greet other person- be gentile!
		void greet(Person* Other);

		// name- getter
		std::string getName();
	};

}

