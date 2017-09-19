#include "stdafx.h"


Object::Object()
{
}


Object::~Object()
{
}


// Method


void Object::Init()
{
	bAct = true;
	bHasFrame = false;

	iIndexX = 0;
	iIndexY = 0;
}


void Object::Update(double deltaTime)
{
	SetCollider(0, 0, tex.info.Width / iCountX, tex.info.Height / iCountY);
}


void Object::Render()
{
	if (bHasFrame)
		IMAGEMANAGER->DrawFrameImage(&tex, iCountX, iCountY, iIndexX, iIndexY, fX, fY, fAngle, fAlpha);
	else
		IMAGEMANAGER->DrawImage(&tex, fX, fY, fAngle, fAlpha);
}


void Object::Release()
{
	tex.lpd3dTex->Release();
}


// Custom


void Object::Move(float fDir, float fSpeed)
{
	this->fX = fX + cos(radian(fDir)) * fSpeed;
	this->fY = fY + sin(radian(fDir)) * fSpeed;
}


void Object::CreateObject(LPCSTR fileName, float fX, float fY, float fAngle, float fAlpha)
{
	this->tex = *IMAGEMANAGER->AddImage(fileName);
	this->fX = fX;
	this->fY = fY;
	this->fAngle = fAngle;
	this->fAlpha = fAlpha;

	SetCollider(0, 0, tex.info.Width, tex.info.Height);
}


void Object::CreateFrame(int iCountX, int iCountY)
{
	bHasFrame = true;
	this->iCountX = iCountX;
	this->iCountY = iCountY;

	SetCollider(0, 0, tex.info.Width / iCountX, tex.info.Height / iCountY);
}


void Object::SetCollider(float x, float y, float width, float height)
{
	float destWidth = tex.info.Width;
	float destHeight = tex.info.Height;

	if (bHasFrame)
	{
		destWidth = destWidth / iCountX;
		destHeight = destHeight / iCountY;
	}

	col = { (LONG)(fX - destWidth / 2 + x), (LONG)(fY - destHeight / 2 + y),
		(LONG)(fX - destWidth / 2 + x + width), (LONG)(fY - destHeight / 2 + y + height) };
}


RECT Object::GetCollider()
{
	return col;
}