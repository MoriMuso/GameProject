#include "Cursol.h"

Cursol::Cursol(int x, int y, int posiMax, int interval, std::string name )
{
	this->x	       = x;
	this->y	       = y;
	this->name     = name;
	this->posiMax  = posiMax;
	this->interval = interval;

	position       = 0;
}

Cursol::~Cursol()
{

}

int Cursol::getX()
{
	return x;
}

int Cursol::getY()
{
	return y;
}

std::string Cursol::getName()
{
	return name;
}

void Cursol::subPosi()
{
	if (position != 0)
	{
		position--;
		y -= interval;
	}
	else
	{
		position = posiMax - 1;
		y += position * interval;
	}
}

void Cursol::addPosi()
{
	if (position != posiMax - 1)
	{
		position++;
		y += interval;
	}
	else
	{
		position = 0;
		y -= (posiMax - 1) * interval;
	}
}

int Cursol::getPosition()
{
	return position;
}