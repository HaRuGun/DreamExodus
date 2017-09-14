#pragma once


class ObjectManager : public Singleton<ObjectManager>
{
public:
	bool IsCollision(Object &a, Object &b);
	bool IsClicked(Object &a);

	ObjectManager();
	virtual ~ObjectManager();
};

#define OBJECTMANAGER ObjectManager::GetSingleton()