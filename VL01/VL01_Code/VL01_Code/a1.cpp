#include <iostream>
#include <random>
#include <string>

#include <time.h>

#define WORKERAMOUNT 10

typedef enum class _sex {FEMALE = 0, MALE = 1, DIVERSE = 2};

typedef struct _worker {
	int ID;
	std::string name;
	std::string forename;
	int weight;
	_sex sex;
};

std::string forenames[WORKERAMOUNT] = { "Jeff", "Erik", "Carl", "Daniel", "Lucas", "Dennis", "Dominic", "Hannah", "Mia", "Marie" };
std::string names[WORKERAMOUNT] = { "Mueller", "Meier", "Hinze", "Fischer", "Kunze", "Maier", "Bichler", "Hinter", "Berghammer", "Sacher" };
_sex sexes[WORKERAMOUNT] = { _sex::MALE, _sex::MALE, _sex::MALE, _sex::MALE, _sex::MALE, _sex::MALE, _sex::MALE, _sex::FEMALE, _sex::FEMALE, _sex::FEMALE };


int main_a1() {

	srand(time(NULL));

	// ===== Generation ===============================================================
	_worker* worker[10];
	int i = 0;

	for (auto &w : worker) {
		w = new _worker();
		w->ID = rand() % 1000000;
		w->name = names[i];
		w->forename = forenames[i];
		w->weight = rand() % 100;
		w->sex = sexes[i];
		i++;
	}

	// ===== output ===================================================================
	std::string greeting = "Guten Morgen";

	for (auto &w : worker) {
		if (w->sex == _sex::MALE)
			std:: cout << greeting << " Herr " << w->name << std::endl;
		else if (w->sex == _sex::FEMALE)
			std::cout << greeting << " Frau " << w->name << std::endl;
		if (w->sex == _sex::DIVERSE)
			std::cout << greeting << " Enby " << w->name << std::endl;
	}

    system("pause");
	return 0;
}