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
	SOUNDMANAGER->Update();
	SCENEMANAGER->Update();

	return 0;
}


int MainProc::Render()
{
	IMAGEMANAGER->Begin();

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
	SoundManager::ReleaseSingleton();
	return 0;
}


// Get

BOOL MainProc::GetAct()
{
	return bAct;
}