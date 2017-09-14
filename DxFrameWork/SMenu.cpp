#include "stdafx.h"


SMenu::SMenu()
{
}


SMenu::~SMenu()
{
}


void SMenu::Init()
{
	chara.Init();
	chara.CreateObject("Texture/chara.jpg", 50, 50, 0, 255.0f);
	chara.CreateFrame(4, 2);
}


void SMenu::Update()
{
	chara.Update();
}


void SMenu::Render()
{
	if (chara.GetAct())
		chara.Render();
}


void SMenu::Release()
{
	chara.Release();
}