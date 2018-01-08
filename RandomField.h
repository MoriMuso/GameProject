#pragma once

#include <vector>

#define FIELD_WIDTH
#define FIELD_HEIGHT

class RandomField
{
public:
	RandomField();
	~RandomField();
private:
	std::vector<std::vector<int>> field;
};