#pragma once


class MainProc
{
private:
	BOOL bAct;

public:
	int Init();
	int Update(double deltaTime);
	int Render();
	int Release();

	BOOL GetAct();

	MainProc();
	virtual ~MainProc();
};