#include "HomeView.h"

HomeView::HomeView(HomeModel* model)
{
	this->model = model;	
}

HomeView::~HomeView()
{
	
}

void HomeView::display()
{
	// 名前入力指示文字列の描画
	DrawFormatString(10, 0, GetColor(255, 0, 255), "%d", model->getCursol()->getPosition());


	DrawString(model->getCursol()->getX(), model->getCursol()->getY(), model->getCursol()->getName().c_str(), GetColor(255, 255, 255));

	for (int i = 0; i < SelectBox::NUMS; i++)
	{
		DrawString(model->getSelectBox()[i]->getX(), model->getSelectBox()[i]->getY(), model->getSelectBox()[i]->getName().c_str(), GetColor(255, 255, 255));
	}

}

