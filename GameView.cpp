#include "GameView.h"

GameView::GameView(GameModel* model)
{
	this->model = model;
}

GameView::~GameView()
{

}

void GameView::display()
{
	DrawString(0, 0, "���O����͂��Ă�������", GetColor(255, 255, 255));
}