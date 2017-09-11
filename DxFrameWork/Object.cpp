#include "stdafx.h"


Object::Object()
{
	bAct = true;
}


Object::~Object()
{
}


// Custom


void Object::CreateObjct(LPCSTR fileName, float fX, float fY)
{
	this->tex = *IMAGEMANAGER->AddImage(fileName);
	this->fX = fX;
	this->fY = fY;
}