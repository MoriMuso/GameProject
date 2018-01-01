#include "AdminView.h"

AdminView::AdminView()
{
	adminController = new AdminController();
	adminModel = adminController->getModel();
	adminController->getModel()->createSelectBox(100, 100, "スタート");
	adminController->getModel()->createSelectBox(100, 200, "オプション");
	adminController->getModel()->createSelectBox(100, 300, "終了");

	//new Cursol(x座標,y座標,対象の最大数,移動間隔,表示文字列)
	adminController->getModel()->createCursol(80, 100, 3, 100, "■");
}

AdminView::~AdminView()
{
	delete adminController;
}

void AdminView::adminReceiver()
{
	if (CheckHitKey(KEY_INPUT_DOWN) != 0)
	{
		adminModel->getCursol()->addPosi();
	}

	if (CheckHitKey(KEY_INPUT_UP) != 0)
	{
		adminModel->getCursol()->subPosi();
	}
}

void AdminView::adminDisplay()
{
	// 名前入力指示文字列の描画
	//DrawString(0, 0, "名前を入力してください", GetColor(255, 255, 255));

	DrawString(adminModel->getCursol()->getX(), adminModel->getCursol()->getY(), adminModel->getCursol()->getName().c_str(), GetColor(255, 255, 255));

	for (int i = 0; i < SelectBox::NUMS; i++)
	{
		DrawString(adminModel->getSelectBox()[i]->getX(), adminModel->getSelectBox()[i]->getY(), adminModel->getSelectBox()[i]->getName().c_str(), GetColor(255, 255, 255));
	}

}

