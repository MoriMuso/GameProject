#pragma once

#include <iostream>
#include <string>

class SelectBox
{
public:
	SelectBox(int x, int y, std::string name);
	~SelectBox();

	int getX();
	int getY();
	std::string getName();

	static int NUMS;
private:
	
	int x, y;
	std::string name;
};