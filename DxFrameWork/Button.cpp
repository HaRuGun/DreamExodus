#include "stdafx.h"
#include "Button.h"


Button::Button()
	:bIsClick(false)
{
}


Button::~Button()
{
}

void Button::Init()
{
	Object::Init();

}

void Button::Update()
{
	Object::Update();
	bool InRect = GetCollider().left <= INPUTMANAGER->GetMousePos().x &&
		GetCollider().right >= INPUTMANAGER->GetMousePos().x &&
		GetCollider().top <= INPUTMANAGER->GetMousePos().y &&
		GetCollider().bottom >= INPUTMANAGER->GetMousePos().y;

	bIsClick = INPUTMANAGER->GetMouseClick() && InRect;
	if (bIsClick)
		iIndexX = 1;
	else
	{
		if (iIndexX == 1 && InRect)
			OnClick();
		iIndexX = 0;
	}
}

void Button::Render()
{
	Object::Render();
}

void Button::Release()
{
	Object::Release();
}

void Button::OnClick()
{
}

bool Button::IsCilicked()
{
	return bIsClick;
}