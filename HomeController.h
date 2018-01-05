#pragma once

#include "HomeModel.h"
#include "SceneChanger.h"

class HomeController
{
public:
	HomeController(SceneChanger* sceneChanger);
	~HomeController();

	HomeModel* getModel();
private:
	HomeModel* model;
};