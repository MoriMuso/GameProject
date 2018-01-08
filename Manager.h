#pragma once 

#include "HomeView.h"
#include "BaseView.h"
#include "HomeController.h"
#include "GameController.h"
#include "SceneChanger.h"

class Manager : SceneChanger
{
public:
	Manager();
	~Manager();
	
	void receiver();
	void display();

	void sceneChange(TYPE type) override;

private:
	BaseController* controller;
	BaseView*  view;

	TYPE nowScene;
	TYPE nextScene;
};