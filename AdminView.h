#pragma once

#include "AdminController.h"
#include "Receiver.h"
#include "Display.h"
#include "DxLib.h"

class AdminView : Display, Receiver
{
public:
	AdminView(AdminModel* model);
	~AdminView();

	void display() override;
	void receiver() override;
private:

	AdminModel* model;
};