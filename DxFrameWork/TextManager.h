#pragma once


class TextManager : public Singleton<TextManager>
{
private:
	ID3DXFont* Font;
	ID3DXSprite* Sprite;

	void Init();
	void Release();

public:
	void WriteText(LPCSTR text, float x, float y, DWORD alphaColor);

	TextManager();
	virtual ~TextManager();
};

#define TEXTMANAGER TextManager::GetSingleton()