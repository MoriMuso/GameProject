#pragma once

#include "DxLib.h"
#include "HomeModel.h"
#include "BaseView.h"


class HomeView : BaseView
{
public:
	HomeView(HomeModel* model);
	~HomeView();

	void display() override;

private:
	HomeModel* model;
};