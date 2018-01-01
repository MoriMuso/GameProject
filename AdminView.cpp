#include "AdminView.h"

AdminView::AdminView()
{
	adminController = new AdminController();
	adminModel = adminController->getModel();
	adminController->getModel()->createSelectBox(100, 100, "�X�^�[�g");
	adminController->getModel()->createSelectBox(100, 200, "�I�v�V����");
	adminController->getModel()->createSelectBox(100, 300, "�I��");

	//new Cursol(x���W,y���W,�Ώۂ̍ő吔,�ړ��Ԋu,�\��������)
	adminController->getModel()->createCursol(80, 100, 3, 100, "��");
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
	// ���O���͎w��������̕`��
	//DrawString(0, 0, "���O����͂��Ă�������", GetColor(255, 255, 255));

	DrawString(adminModel->getCursol()->getX(), adminModel->getCursol()->getY(), adminModel->getCursol()->getName().c_str(), GetColor(255, 255, 255));

	for (int i = 0; i < SelectBox::NUMS; i++)
	{
		DrawString(adminModel->getSelectBox()[i]->getX(), adminModel->getSelectBox()[i]->getY(), adminModel->getSelectBox()[i]->getName().c_str(), GetColor(255, 255, 255));
	}

}

