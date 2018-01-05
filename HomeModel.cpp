#include "HomeModel.h"

HomeModel::HomeModel(SceneChanger* sceneChanger)
{
	this->sceneChanger = sceneChanger;
}

HomeModel::~HomeModel()
{

}

void HomeModel::createSelectBox(int x, int y, std::string name)
{
	selectBox.push_back(new SelectBox(x, y, name));
}

void HomeModel::createCursol(int x, int y, int posiMax, int interval, std::string name)
{
	cursol = new Cursol(x, y, posiMax, interval, name);
}

std::vector<SelectBox*> HomeModel::getSelectBox()
{
	return selectBox;
}

Cursol* HomeModel::getCursol()
{
	return cursol;
}

void HomeModel::changeScene()
{
	switch (cursol->getPosition())
	{
	case 0:
		sceneChanger->sceneChange(GAME);
		break;
	case 1:
		sceneChanger->sceneChange(OPTION);
		break;
	case 2:
		sceneChanger->sceneChange(END);
		break;
	}
}
