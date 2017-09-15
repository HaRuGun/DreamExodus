#include "stdafx.h"


SoundManager::SoundManager()
{
	Init();
}


SoundManager::~SoundManager()
{
	Release();
}


// Method


void SoundManager::Init()
{
	FMOD::System_Create(&System);
	System->init(10, FMOD_INIT_NORMAL, 0);
}


void SoundManager::Update()
{
	System->update();
}


void SoundManager::Release()
{
	System->release();
	System->close();
}


// Custom


void SoundManager::LoadSound(SoundData &soundData, LPCSTR fileName, SOUNDTYPE type)
{
	soundData.type = type;

	switch (type)
	{
	case BGM:
		System->createStream(fileName, FMOD_LOOP_NORMAL | FMOD_2D, 0, &soundData.Sound);
		break;

	case SE:
		System->createSound(fileName, FMOD_LOOP_OFF | FMOD_2D, 0, &soundData.Sound);
		break;
	}
}


void SoundManager::PlaySound(SoundData soundData)
{
	if (!soundData.Channel)
		System->playSound(FMOD_CHANNEL_FREE, soundData.Sound, false, &soundData.Channel);
}


void SoundManager::StopSound(SoundData soundData)
{
	if (!soundData.Channel) return;

	bool bIsPlaying;
	soundData.Channel->isPlaying(&bIsPlaying);

	if (bIsPlaying)
	{
		soundData.Channel->stop();
		soundData.Channel = nullptr;
	}
}