#pragma once


class MainProc
{
private:
	BOOL bAct;

public:
	int Init();
	int Update();
	int Render();
	int Release();

	BOOL GetAct();

	MainProc();
	virtual ~MainProc();
};