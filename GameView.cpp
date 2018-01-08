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
	DrawString(0, 0, "–¼‘O‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢", GetColor(255, 255, 255));
}