#pragma once 

#include "AdminView.h"
#include "SceneChanger.h"

class Manager : SceneChanger, 
{
public:
	Manager();
	~Manager();
	
	void sceneChange() override;
private:
	Display*  disp;
	Receiver* rece;
};