#pragma once
#include "Object.h"
class Button :
	public Object
{
protected:
	bool bIsClick;
	//int iIndexX;
	//int iIndexY;

public:
	virtual void Init();
	virtual void Update();
	virtual void Render();
	virtual void Release();
	virtual void OnClick();

	virtual bool IsCilicked();

	Button();
	virtual~Button();
};

