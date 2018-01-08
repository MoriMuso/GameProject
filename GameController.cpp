#include "GameController.h"

GameController::GameController(SceneChanger* scene)
{
	model = new GameModel(scene);
	view = new GameView(model);
}

GameController::~GameController()
{
	delete model;
	delete view;
}

void GameController::receiver()
{

}

BaseView* GameController::getView()
{
	return (BaseView*)view;
}