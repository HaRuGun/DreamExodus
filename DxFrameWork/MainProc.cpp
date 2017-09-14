#include "stdafx.h"


MainProc::MainProc()
{
}


MainProc::~MainProc()
{
}


int MainProc::Init()
{
	bAct = true;

	SCENEMANAGER->Init();

	return 0;
}


int MainProc::Update()
{
	INPUTMANAGER->Update();

	SCENEMANAGER->Update();

	return 0;
}


int MainProc::Render()
{
	IMAGEMANAGER->Begin();

	if (INPUTMANAGER->IsKeyDown(VK_RETURN))
		SCENEMANAGER->ChageScene(SCENEMANAGER->GetMenuScene());
	if (INPUTMANAGER->IsKeyDown(VK_BACK))
		SCENEMANAGER->ChageScene(SCENEMANAGER->GetStartScene());

	SCENEMANAGER->Render();

	IMAGEMANAGER->End();
	return 0;
}


int MainProc::Release()
{
	bAct = false;
	SCENEMANAGER->Release();

	PostQuitMessage(0);

	ImageManager::ReleaseSingleton();
	InputManager::ReleaseSingleton();
	SceneManager::ReleaseSingleton();
	TextManager::ReleaseSingleton();
	return 0;
}


// Get

BOOL MainProc::GetAct()
{
	return bAct;
}