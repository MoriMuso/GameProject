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
	DrawString(0, 0, "名前を入力してください", GetColor(255, 255, 255));
}