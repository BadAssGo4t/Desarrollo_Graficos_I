#include "Engine.h"
#include <iostream>

Engine::Engine()
{
	std::cout << "Init Engine" << std::endl;
	collisionManager = new CollisionManager();
	input = new Input();
	window = new Window();
	renderer = new Renderer(window);
}

Engine::~Engine()
{
	delete collisionManager;
	delete input;
	delete window;
	delete renderer;
	std::cout << "Destroy Engine" << std::endl;
}

CollisionManager* Engine::GetColManager()
{
	return collisionManager;
}

Input* Engine::GetInput()
{
	return input;
}

Renderer* Engine::GetRenderer()
{
	return renderer;
}

Window* Engine::GetWindow()
{
	return window;
}
