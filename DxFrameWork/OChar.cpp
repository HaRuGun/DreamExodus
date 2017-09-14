#include "stdafx.h"


OChar::OChar()
{
}


OChar::~OChar()
{
}


void OChar::Init()
{
	Object::Init();
	fY = 30.0f;
}


void OChar::Update()
{
	Object::Update();

	if (INPUTMANAGER->IsKeyHold(VK_LEFT))
		this->fX -= 10;
	if (INPUTMANAGER->IsKeyHold(VK_RIGHT))
		this->fX += 10;

	Move(45, 10);

	if (OBJECTMANAGER->IsClicked(*this))
		SetAct(false);
}


void OChar::Render()
{
	Object::Render();
}


void OChar::Release()
{
	Object::Release();
}