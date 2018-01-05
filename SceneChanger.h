#pragma once

typedef enum
{
	HOME,
	GAME,
	OPTION,
	END,

	NONE
}TYPE;

class SceneChanger
{
public:
	virtual void sceneChange(TYPE type) = 0;
	virtual ~SceneChanger() = 0 {}
};