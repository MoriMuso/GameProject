#pragma once

#include "SceneChanger.h"
#include "SelectBox.h"
#include "Cursol.h"
#include <vector>

class HomeModel
{
public:
	HomeModel(SceneChanger* sceneChanger);
	~HomeModel();

	//SelectBox‚Ì¶¬
	void createSelectBox(int x, int y, std::string name);
	void createCursol(int x, int y, int posiMax, int interval, std::string name);

	//SelectBox‚Ì“üè
	std::vector<SelectBox*> getSelectBox();
	Cursol* getCursol();

	void changeScene();
private:
	//SelectBox‚Ìvector
	std::vector<SelectBox*> selectBox;

	Cursol* cursol;
	SceneChanger* sceneChanger;
	
};