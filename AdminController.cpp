#include "AdminController.h"

AdminController::AdminController()
{
	adminModel = new AdminModel();
}

AdminController::~AdminController()
{
	delete adminModel;
}

AdminModel* AdminController::getModel()
{
	return adminModel;
}