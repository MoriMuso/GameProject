#include "HomeController.h"

HomeController::HomeController(SceneChanger* sceneChanger)
{
	model = new HomeModel(sceneChanger);
	view  = new HomeView(model);
	model->createSelectBox(100, 100, "スタート");
	model->createSelectBox(100, 200, "オプション");
	model->createSelectBox(100, 300, "終了");

	//new Cursol(x座標,y座標,対象の最大数,移動間隔,表示文字列)
	model->createCursol(80, 100, 3, 100, "■");
}

HomeController::~HomeController()
{
	delete model;
}

void HomeController::receiver()
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

HomeModel* HomeController::getModel()
{
	return model;
}


BaseView* HomeController::getView()
{
	return (BaseView*)view;
}