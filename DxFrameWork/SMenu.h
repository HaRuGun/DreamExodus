#pragma once


class SMenu : public Scene
{
private:
	OChar chara;
	SoundData back;
	SoundData ef;

public:
	void Init();
	void Update();
	void Render();
	void Release();

	SMenu();
	virtual ~SMenu();
};

