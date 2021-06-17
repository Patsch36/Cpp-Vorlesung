#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main()
{

	std::vector<int> vec = { 1, 2, 3, 4, 5 };

	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		std::cout << *it << std::endl;
	}

	//Konst, um nichts zu kopieren
	for (const int & i : vec)
	{
		std::cout << i << std::endl;
	}

	return 0;
}