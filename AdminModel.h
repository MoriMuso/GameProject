#pragma once

#include "SelectBox.h"
#include "Cursol.h"
#include <vector>

class AdminModel
{
public:
	AdminModel();
	~AdminModel();

	//SelectBox�̐���
	void createSelectBox(int x, int y, std::string name);
	void createCursol(int x, int y, int posiMax, int interval, std::string name);

	//SelectBox�̓���
	std::vector<SelectBox*> getSelectBox();
	Cursol* getCursol();

private:
	//SelectBox��vector
	std::vector<SelectBox*> selectBox;

	Cursol* cursol;
};