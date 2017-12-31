#pragma once

#include <string>

class Cursol
{
public:
	Cursol(int x, int y, int posiMax, int interval, std::string name);
	~Cursol();

	int getX();
	int getY();

	void addPosi();
	void subPosi();
	std::string getName();

private:
	int x, y;
	int posiMax;
	int interval;
	int position;
	std::string name;
};