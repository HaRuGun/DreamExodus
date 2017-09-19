#pragma once
#include "Scene.h"
#include "Button.h"

class SMain :
	public Scene
{
private:

public:
	virtual void Init();
	virtual void Update();
	virtual void Render();
	virtual void Release();

	SMain();
	virtual ~SMain();
};

