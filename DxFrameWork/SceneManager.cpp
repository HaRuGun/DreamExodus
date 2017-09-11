#include "stdafx.h"


void SceneManager::Init()
{
	//pCurrentScene = nullptr;
	pCurrentScene = &SScene;
	SScene.Init();
}


void SceneManager::Release()
{
	pCurrentScene->Release();
}


void SceneManager::Update()
{
	pCurrentScene->Update();
}


void SceneManager::Render()
{
	pCurrentScene->Render();
}


// Custom


void SceneManager::ChageScene(Scene* pScene)
{
	if (pScene)
	{
		pCurrentScene->Release();
		pCurrentScene = pScene;
		pScene->Init();
	}
	return;
}