#pragma once


class SceneManager : public Singleton<SceneManager>
{
private:
	Scene* pCurrentScene;

	Scene_Start SScene;
	SMenu sMenu;

public:
	void Init();
	void Update();
	void Render();
	void Release();

	void ChageScene(Scene * pScene);

	Scene* GetStartScene() { return &SScene; }
	Scene* GetMenuScene() { return &sMenu; }

	SceneManager() {}
	virtual ~SceneManager() {}
};

#define SCENEMANAGER SceneManager::GetSingleton()