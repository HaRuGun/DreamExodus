#include "stdafx.h"


Scene_Start::Scene_Start()
{
}


Scene_Start::~Scene_Start()
{
}


void Scene_Start::Init()
{
	wakaba = IMAGEMANAGER->AddImage("Texture/wakaba.PNG");
	sae = IMAGEMANAGER->AddImage("Texture/sae.PNG");

	x = 0;
	vis = true;
}


void Scene_Start::Update()
{
	if (INPUTMANAGER->IsKeyDown('A'))
		x -= 1;

	POINT p = INPUTMANAGER->GetMousePos();

	if (INPUTMANAGER->GetMouseClick())
		vis = false;
	else
		vis = true;
}


void Scene_Start::Render()
{
	if (vis)
	{
		wakaba->DrawImage(300.0f + x, 300.0f, 15.0f, 128.0f);
		sae->DrawImage(500.0f + x, 300.0f, -15.0f, 255.0f);
	}
}


void Scene_Start::Release()
{
	wakaba = nullptr;
	sae = nullptr;
}