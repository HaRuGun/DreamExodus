#pragma once


class Scene
{
public:
	virtual void Init() {}
	virtual void Update() {}
	virtual void Render() {}
	virtual void Release() {}

	Scene() {};
	virtual ~Scene() {};
};

