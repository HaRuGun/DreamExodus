#pragma once
#include "Scene.h"
class SMain :
	public Scene
{
public:

	void Init();
	void Update(double deltaTime);
	void Render();
	void Release();

	SMain();
	virtual ~SMain();
};

