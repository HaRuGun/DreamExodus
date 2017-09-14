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

	TEXTMANAGER->WriteText("Hello World", 20, 20, D3DCOLOR_RGBA(0, 0, 0, 255));
	TEXTMANAGER->WriteText("ÇÞºûÀÌ ¼±¸íÇÏ°Ô ³ª¹µÀÙÀ» ÇÓ°í ÀÖ¾ú´Ù.", 20, 40, D3DCOLOR_RGBA(0, 0, 0, 128));
}


void Scene_Start::Release()
{
	wakaba->lpd3dTex->Release();
	SAFE_DELETE(wakaba);

	sae->lpd3dTex->Release();
	SAFE_DELETE(sae);
}