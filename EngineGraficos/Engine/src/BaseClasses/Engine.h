#pragma once
#include "CollisionManager.h"
#include "Input.h"
#include "Renderer.h"
#include "Window.h"

class Engine
{
public:
	Engine();
	~Engine();
	CollisionManager* GetColManager();
	Input* GetInput();
	Renderer* GetRenderer();
	Window* GetWindow();
private:
	CollisionManager* collisionManager;
	Input* input;
	Renderer* renderer;
	Window* window;
};