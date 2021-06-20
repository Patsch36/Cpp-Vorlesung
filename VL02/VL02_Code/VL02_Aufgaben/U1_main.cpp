// This is a personal academic project.Dear PVS - Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include "U1_ort.h"
#include "U1_sehenswuerdigkeiten.h"
#include "U1_restaurants.h"

int main()
{
	U1_ort* orte[3];
	orte[0] = new U1_ort("Stuttgart", { 1, 2 });
	orte[1] = new U1_sehenswuerdigkeiten("Eiffelturm", { 5, 6 }, "ganz Paris");
	orte[2] = new U1_restaurants("La Mange", { 6, 6 }, "die besten Baguette");

	for (auto _ort : orte)
	{
		_ort->visit();
	}

	for (auto _ort : orte)
	{
		delete(_ort);
		_ort = nullptr;
	}

	return 0;
}