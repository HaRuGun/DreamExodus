#pragma once


class Scene_Start : public Scene
{
private:
	float x;
	bool vis;

	texture* wakaba;
	texture* sae;

public:
	void Init();
	void Update();
	void Render();
	void Release();

	Scene_Start();
	virtual ~Scene_Start();
};

