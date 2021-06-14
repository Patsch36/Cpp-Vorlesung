#pragma once
#include <memory>

class A2_Kanuteam
{
	static int _counter;
	int _personen = 0;
	A2_Person _mitglieder[5];
	A2_Kanu* _boot;
public:
	A2_Kanuteam(A2_Kanu* boot, A2_Person person);
	~A2_Kanuteam();

};

class A2_Kanu
{
	static int _counter;
	A2_Kanuteam* _team;
	bool _existing_team = false;
public:
	A2_Kanu(A2_Kanuteam* team);
	~A2_Kanu();

};

class A2_Person
{
	static int _counter;
	int _team_count = 0;
	A2_Kanuteam _teams[3];
public:
	A2_Person();
	~A2_Person();
	void setKanuteam(A2_Kanuteam team);

};

