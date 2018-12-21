#include "stdafx.h"
#include "MainScene.h"
#include <iostream>

MainScene::MainScene()
{
	enemy = new ZeroSprite("Resources/image/bullet.png");
	enemy->SetPos(100, 100);
	button = new ZeroSprite("Resources/image/startButton.png");
	button->SetPos(500, 500);
}


MainScene::~MainScene()
{
}

void MainScene::Update(float eTime){
	ZeroIScene::Update(eTime);
	//enemy->AddPos(10 * eTime, 10 * eTime);
	//enemy->AddScale(1.001f);
	//enemy->AddRot(10);
	if (ZeroInputMgr->GetKey(VK_LBUTTON) == INPUTMGR_KEYDOWN){
		if (button->IsOverlapped(ZeroInputMgr->GetClientPoint())){
			ZeroSceneMgr->ChangeScene(new GameScene());
			return;
		}
	}
}

void MainScene::Render(){
	ZeroIScene::Render();
	enemy->Render();
	button->Render();
}