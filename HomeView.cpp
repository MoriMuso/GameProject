#include "HomeView.h"

HomeView::HomeView(SceneChanger* sceneChanger)
{
	controller = new HomeController(sceneChanger);
	model = controller->getModel();
	controller->getModel()->createSelectBox(100, 100, "スタート");
	controller->getModel()->createSelectBox(100, 200, "オプション");
	controller->getModel()->createSelectBox(100, 300, "終了");

	//new Cursol(x座標,y座標,対象の最大数,移動間隔,表示文字列)
	controller->getModel()->createCursol(80, 100, 3, 100, "■");
}

HomeView::~HomeView()
{
	delete controller;
}

void HomeView::receiver()
{
	if (CheckHitKey(KEY_INPUT_DOWN) != 0)
	{
		model->getCursol()->addPosi();
	}

	if (CheckHitKey(KEY_INPUT_UP) != 0)
	{
		model->getCursol()->subPosi();
	}

	if (CheckHitKey(KEY_INPUT_SPACE) != 0)
	{
		model->changeScene();
	}
}

void HomeView::display()
{
	// 名前入力指示文字列の描画
	//DrawString(0, 0, "名前を入力してください", GetColor(255, 255, 255));

	DrawString(model->getCursol()->getX(), model->getCursol()->getY(), model->getCursol()->getName().c_str(), GetColor(255, 255, 255));

	for (int i = 0; i < SelectBox::NUMS; i++)
	{
		DrawString(model->getSelectBox()[i]->getX(), model->getSelectBox()[i]->getY(), model->getSelectBox()[i]->getName().c_str(), GetColor(255, 255, 255));
	}

}

