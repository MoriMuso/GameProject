#pragma once
#include "DxLib.h"
#include "BaseView.h"
#include "GameModel.h"

class GameView : BaseView
{
public:
	GameView(GameModel* model);
	~GameView();

	void display() override;

private:
	GameModel* model;
};