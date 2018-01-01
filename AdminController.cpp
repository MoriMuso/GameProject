#include "AdminController.h"

AdminController::AdminController()
{
	adminModel = new AdminModel();
	adminView = new AdminView();
}

AdminController::~AdminController()
{
	delete adminModel;
	delete adminView;
}

void AdminController::receiver()
{
	adminView->receiver();
}

void AdminController::display()
{
	adminView->display();
}
