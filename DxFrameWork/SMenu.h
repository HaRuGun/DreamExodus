#pragma once


class SMenu : public Scene
{
private:
	float y;

	texture* chikage;
	texture* yuri;

	OChar chara;

public:
	void Init();
	void Update();
	void Render();
	void Release();

	SMenu();
	virtual ~SMenu();
};

