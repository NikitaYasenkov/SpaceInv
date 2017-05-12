#pragma once

#include <ctime>
#include "renderSystem.h"
#include "gameObject.h"


const int gameObjectsCountMax = 512;


class Game
{
public:
	Game();

	void setupSystem();
	void initialize();
	bool frame();
	void shutdown();

private: //Creating and deleting a game object
	void render();
	void update(float dt);

	GameObject* createObject(GameObjectType type, float x, float y, char symbol, ConsoleColor color, ConsoleColor bgColor);
	void destroyObject(GameObject* object);

private:
	bool m_isGameActive;
	clock_t m_clockLastFrame;

	RenderSystem m_renderSystem;

	GameObject* m_objects[gameObjectsCountMax]; //Array of pointers to manage, create and delete objects

	float m_shipFireCooldownTime;
	float m_alienAmplitudeTime;
};
