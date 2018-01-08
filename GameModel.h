#pragma once

#include "SceneChanger.h"

class GameModel
{
public:
	GameModel(SceneChanger* scene);
	~GameModel();
private:
	SceneChanger* scene;
};
