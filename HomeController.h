#pragma once
#include "DxLib.h"
#include "BaseController.h"
#include "HomeModel.h"
#include "HomeView.h"
#include "SceneChanger.h"


class HomeController : public BaseController
{
public:
	HomeController(SceneChanger* sceneChanger);
	~HomeController();

	HomeModel* getModel();
	BaseView*  getView() override;
	void receiver() override;
	
private:
	HomeModel* model;
	HomeView* view;
};