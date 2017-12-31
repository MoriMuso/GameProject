#include "DxLib.h"
#include "AdminView.h"

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int){
	ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK); //ウィンドウモード変更と初期化と裏画面設定

	AdminView* adminView = new AdminView();
	//画面更新 & メッセージ処理 & 画面消去
	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0)
	{
		adminView->adminReceiver();
		adminView->adminDisplay();
	}

	delete adminView;
	DxLib_End(); // DXライブラリ終了処理
	return 0;
}
