#include "DxLib.h"

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int){
    //aaaaa
    ChangeWindowMode(TRUE); // ウィンドウモードに設定
    DxLib_Init();   // DXライブラリ初期化処理
    WaitKey();      // キー入力待ち
    DxLib_End();    // DXライブラリ終了処理
    return 0;
}
