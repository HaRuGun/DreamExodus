#include "stdafx.h"


ObjectManager::ObjectManager()
{
}


ObjectManager::~ObjectManager()
{
}


bool ObjectManager::IsCollision(Object &a, Object &b)
{
	RECT aCol = a.GetCollider();
	RECT bCol = b.GetCollider();

	if ((aCol.left < bCol.right && aCol.right > bCol.left) &&
		(aCol.top < bCol.bottom && aCol.bottom > bCol.top))
	{
		return true;
	}
	return false;
}


bool ObjectManager::IsClicked(Object &a)
{
	RECT aCol = a.GetCollider();

	if ((aCol.left < INPUTMANAGER->GetMousePos().x && INPUTMANAGER->GetMousePos().x < aCol.right) &&
		(aCol.top < INPUTMANAGER->GetMousePos().y && INPUTMANAGER->GetMousePos().y < aCol.bottom))
	{
		if (INPUTMANAGER->GetMouseClick())
			return true;
		else
			return false;
	}
	return false;
}