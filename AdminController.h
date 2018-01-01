#pragma once

#include "AdminModel.h"
#include "AdminView.h"
#include "Display.h"
#include "Receiver.h"

class AdminController : Display, Receiver
{
public:
	AdminController();
	~AdminController();

	void receiver() override;
	void display() override;

private:
	AdminModel* adminModel;
	AdminView*  adminView;
};