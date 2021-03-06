#pragma once

#include "SelectBox.h"
#include "Cursol.h"
#include <vector>

class AdminModel
{
public:
	AdminModel();
	~AdminModel();

	//SelectBoxの生成
	void createSelectBox(int x, int y, std::string name);
	void createCursol(int x, int y, int posiMax, int interval, std::string name);

	//SelectBoxの入手
	std::vector<SelectBox*> getSelectBox();
	Cursol* getCursol();

private:
	//SelectBoxのvector
	std::vector<SelectBox*> selectBox;

	Cursol* cursol;
};