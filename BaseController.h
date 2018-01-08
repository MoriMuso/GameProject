#pragma once

#include "BaseView.h"

class BaseController
{
public:
	virtual void receiver() = 0;
	virtual BaseView* getView() = 0;
	virtual ~BaseController() = 0 {}
};