#include <iostream>
#include"A1.h"

int main()
{
	a1::Person* John = new a1::Person("Jeff", a1::__nation::de);
	a1::Person* Jeff = new a1::Person("John", a1::__nation::en);

	John->greet(Jeff);


	system("pause");
	return 0;
}