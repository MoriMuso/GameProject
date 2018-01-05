#pragma once

#include "HomeController.h"
#include "Receiver.h"
#include "Display.h"
#include "SceneChanger.h"
#include "DxLib.h"

class HomeView : Display, Receiver
{
public:
	HomeView(SceneChanger* sceneChanger);
	~HomeView();

	void display() override;
	void receiver() override;

private:

	HomeController* controller;
	HomeModel* model;
};