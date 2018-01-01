#pragma once
#include "AdminModel.h"

class AdminController
{
public:
	AdminController();
	~AdminController();

	AdminModel* getModel();
private:
	AdminModel* adminModel;
};