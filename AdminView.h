#pragma once

#include "AdminController.h"
#include "Receiver.h"
#include "Display.h"
#include "DxLib.h"

class AdminView : Display, Receiver
{
public:
	AdminView();
	~AdminView();

	void display() override;
	void receiver() override;
private:
	AdminController* adminController;
	AdminModel* adminModel;
	char Name[31];
};