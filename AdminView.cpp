#include "AdminView.h"

AdminView::AdminView(AdminModel* model)
{
	this->model = model;
	model->createSelectBox(100, 100, "�X�^�[�g");
	model->createSelectBox(100, 200, "�I�v�V����");
	model->createSelectBox(100, 300, "�I��");

	//new Cursol(x���W,y���W,�Ώۂ̍ő吔,�ړ��Ԋu,�\��������)
	model->createCursol(80, 100, 3, 100, "��");
}

AdminView::~AdminView()
{
	
}

void AdminView::receiver()
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
		
	}
}

void AdminView::display()
{
	// ���O���͎w��������̕`��
	//DrawString(0, 0, "���O����͂��Ă�������", GetColor(255, 255, 255));

	DrawString(model->getCursol()->getX(), model->getCursol()->getY(), model->getCursol()->getName().c_str(), GetColor(255, 255, 255));

	for (int i = 0; i < SelectBox::NUMS; i++)
	{
		DrawString(model->getSelectBox()[i]->getX(), model->getSelectBox()[i]->getY(), model->getSelectBox()[i]->getName().c_str(), GetColor(255, 255, 255));
	}

}

