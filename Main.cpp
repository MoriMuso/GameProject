#include "DxLib.h"
#include "Manager.h"

#include "HomeView.h"

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int){
	ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK); //ウィンドウモード変更と初期化と裏画面設定

	Manager* manager = new Manager();
	//画面更新 & メッセージ処理 & 画面消去
	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0)
	{
		manager->receiver();
		manager->display();
	}

	delete manager;
	DxLib_End(); // DXライブラリ終了処理
	return 0;
}
