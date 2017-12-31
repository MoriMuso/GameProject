#include "SelectBox.h"

int SelectBox::NUMS;

SelectBox::SelectBox(int x, int y, std::string name)
{
	this->x = x;
	this->y = y;
	this->name = name;
	NUMS++;
}

SelectBox::~SelectBox()
{

}

int SelectBox::getX()
{
	return x;
}

int SelectBox::getY()
{
	return y;
}

std::string SelectBox::getName()
{
	return name;
}
