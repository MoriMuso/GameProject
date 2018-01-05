#pragma once 

#include "HomeView.h"
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

	void sceneChange(TYPE type) override;

private:
	HomeView* homeView;
	Receiver* rece;
	Display*  disp;

	TYPE nowScene;
	TYPE nextScene;
};