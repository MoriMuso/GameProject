#include "AdminModel.h"

AdminModel::AdminModel()
{

}

AdminModel::~AdminModel()
{

}

void AdminModel::createSelectBox(int x, int y, std::string name)
{
	selectBox.push_back(new SelectBox(x, y, name));
}

void AdminModel::createCursol(int x, int y, int posiMax, int interval, std::string name)
{
	cursol = new Cursol(x, y, posiMax, interval, name);
}

std::vector<SelectBox*> AdminModel::getSelectBox()
{
	return selectBox;
}

Cursol* AdminModel::getCursol()
{
	return cursol;
}
