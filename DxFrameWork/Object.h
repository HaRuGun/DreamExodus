#pragma once


class Object
{
protected:
	texture tex;
	float fX, fY;
	float fAngle, fAlpha;

	bool bHasFrame;
	int iCountX, iCountY;
	int iIndexX, iIndexY;

	RECT col;

	bool bAct;

public:
	virtual void Init();
	virtual void Update();
	virtual void Render();
	virtual void Release();

	void Move(float fDir, float fSpeed);

	void CreateObject(LPCSTR fileName, float fX, float fY, float fAngle, float fAlpha);
	void CreateFrame(int iCountX, int iCountY);
	void SetCollider(float x, float y, float width, float height);
	RECT GetCollider();

	inline void SetAct(bool bAct) { this->bAct = bAct; }
	inline bool GetAct() { return bAct; }

	Object();
	virtual ~Object();
};