#include "Manager.h"

Manager::Manager()
{
	homeView = new HomeView(this);
	disp = (Display*)homeView;
	rece = (Receiver*)homeView;
	
	nowScene  = START;
	nextScene = START;
}

Manager::~Manager()
{
	delete disp;
	//delete disp;
}

void Manager::receiver()
{
	if (nowScene != nextScene)
	{
		delete disp;
		//delete disp;
		switch (nextScene)
		{
		case START:
			rece = (Receiver*) new HomeView(this);
			disp = (Display*)rece;
			break;
		case OPTION:
			break;
		case END:
			DxLib_End();
			break;
		}
		nowScene = nextScene;
	}

 	rece->receiver();
}

void Manager::display()
{
	disp->display();
}

void Manager::sceneChange(TYPE type)
{
	nextScene = type;
}