#include "stdafx.h"


SMenu::SMenu()
{
}


SMenu::~SMenu()
{
}


void SMenu::Init()
{
	chikage = IMAGEMANAGER->AddImage("Texture/chikage.PNG");
	yuri = IMAGEMANAGER->AddImage("Texture/yuri.PNG");

	y = 0;

	chara.CreateObjct("Texture/chara.jpg", 0, 0);
	chara.Init();
}


void SMenu::Update()
{
	if (INPUTMANAGER->IsKeyDown('S'))
		y += 1;

	if (INPUTMANAGER->GetMouseClick())
		y = 0;

	chara.Update();
}


void SMenu::Render()
{
	chikage->DrawImage(100.0f, 200.0f + y, 45.0f, 200.0f);
	yuri->DrawImage(600.0f, 400.0f + y, -45.0f, 125.0f);

	chara.Render();
}


void SMenu::Release()
{
	chikage = nullptr;
	yuri = nullptr;
}