#include "DxLib.h"
#include "BaseController.h"
#include "GameModel.h"
#include "GameView.h"
#include "SceneChanger.h"

class GameController : BaseController
{
public:
	GameController(SceneChanger* scene);
	~GameController();

	void receiver() override;

private:	
	BaseView* getView() override;
	GameModel* model;
	GameView* view;
};