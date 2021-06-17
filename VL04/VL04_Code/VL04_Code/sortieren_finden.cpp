#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

class data {
public:
	int _i;
	data(int i) : _i(i) {}
	bool operator< (const data* other)
	{
		return this->_i < other->_i;
	}
};

bool isDataLessThanData(data* d1, data* d2)
{
	return *d1 < d2;
}


int main()
{

	std::vector<data*> vec = { new data(3), new data(5), new data(2), new data(4), new data(1) };

	std::sort(vec.begin(), vec.end(), isDataLessThanData);

	for (const data* i : vec)
	{
		std::cout << i->_i << std::endl;
	}
	std::cout << std::endl;


	vec = { new data(3), new data(5), new data(2), new data(4), new data(1) };

	int firstnumber = 3;
	// Alternativ statt & firstnumber
	std::sort(vec.begin(), vec.end(), [&](data* d1, data* d2) {
		if (d1->_i == firstnumber)
			return true;
		if (d2->_i == firstnumber)
			return false;
		return d1->_i > d2->_i;
		});

	for (const data* i : vec)
	{
		std::cout << i->_i << std::endl;
	}



	vec = { new data(3), new data(5), new data(2), new data(4), new data(1) };

	/*auto drei = std::find_if(vec.begin(), vec.end(), [](const data& d) {
		return d._i == 3;
		});*/
	auto drei = std::find_if(vec.begin(), vec.end(), [](const data *d) {
			return d->_i == 3;
		});

	if (drei != vec.end())
		std::cout << "Found 3!" << std::endl;


	auto sum = [](int result, const data& d) {
		return result += d._i;
	};
	/*auto sum = [](int result, const data* d) {
		return result += d->_i;
	};*/

	int sumOfNumbers = std::accumulate(vec.begin(), vec.end(), 0, sum);
	std::cout << sumOfNumbers << std::endl;

	return 0;
}