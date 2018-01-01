#pragma once 

#include "AdminView.h"
#include "Display.h"
#include "Receiver.h"
#include "SceneChanger.h"

class Manager : SceneChanger, Display, Receiver
{
public:
	Manager();
	~Manager();
	
	void receiver() override;
	void display() override;
	void sceneChange() override;

private:
};