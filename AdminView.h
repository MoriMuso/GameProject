#pragma once

#include "AdminController.h"
#include "DxLib.h"

class AdminView
{
public:
	AdminView();
	~AdminView();

	void adminDisplay();
	void adminReceiver();
private:
	AdminController* adminController;
	AdminModel* adminModel;
	char Name[31];
};