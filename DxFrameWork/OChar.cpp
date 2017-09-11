#include "stdafx.h"


OChar::OChar()
{
}


OChar::~OChar()
{
}


void OChar::Init()
{
	fY = 30.0f;
}


void OChar::Update()
{
	if (INPUTMANAGER->IsKeyHold(VK_LEFT))
		this->fX -= 10;
	if (INPUTMANAGER->IsKeyHold(VK_RIGHT))
		this->fX += 10;
}


void OChar::Render()
{
	IMAGEMANAGER->DrawFrameImage(&tex, 4, 2, 1, 1, fX, fY, 0.0f, 255.0f);
}


void OChar::Release()
{

}