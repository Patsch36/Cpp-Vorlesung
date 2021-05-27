#pragma once
#include <iostream>
#include <string>

class coord 
{
	int _x, _y;
public:
	coord(int x, int y) : _x(x), _y(y) {}

	// Überladen von Stream- operatoren muss immer das eigene Objekt mitübergeben werden!
	friend std::ostream& operator<<(std::ostream& os, coord _coord);
};

class U1_ort
{
protected:
	coord _coord;
	std::string _name;
public:
	U1_ort(std::string name, coord __coord);
	virtual void visit();
};

