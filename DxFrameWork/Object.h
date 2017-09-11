#pragma once


class Object
{
protected:
	texture tex;
	float fX, fY;

	bool bAct;

public:
	virtual void Init() {}
	virtual void Update() {}
	virtual void Render() {}
	virtual void Release() {}

	void CreateObjct(LPCSTR fileName, float fX, float fY);

	inline void SetAct() { this->bAct = bAct; }
	inline bool GetAct(bool bAct) { return bAct; }

	Object();
	virtual ~Object();
};

