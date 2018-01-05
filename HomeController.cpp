#include "HomeController.h"

HomeController::HomeController(SceneChanger* sceneChanger)
{
	model = new HomeModel(sceneChanger);
}

HomeController::~HomeController()
{
	delete model;
}

HomeModel* HomeController::getModel()
{
	return model;
}