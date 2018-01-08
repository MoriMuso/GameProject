#include "Manager.h"

Manager::Manager()
{
	
	controller = (BaseController*) new HomeController(this);
	view       = controller->getView();
	
	nowScene  = HOME;
	nextScene = HOME;
}

Manager::~Manager()
{
	delete controller;
	delete view;
	//delete disp;
}

void Manager::receiver()
{
	if (nowScene != nextScene)
	{
		delete controller;
		delete view;
		switch (nextScene)
		{
		case HOME:
			controller = (BaseController*) new HomeController(this);
			view = controller->getView();
			break;
		case GAME:
			controller = (BaseController*) new GameController(this);
			view	   = controller->getView();
			break;
		case OPTION:
			break;
		case END:
			DxLib_End();
			break;
		}
		nowScene = nextScene;
	}

 	controller->receiver();
}

void Manager::display()
{
	view->display();
}

void Manager::sceneChange(TYPE type)
{
	nextScene = type;
}