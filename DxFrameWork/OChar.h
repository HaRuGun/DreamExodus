#pragma once


class OChar : public Object
{
protected:


public:
	void Init();
	void Update();
	void Render();
	void Release();

	OChar();
	virtual ~OChar();
};

