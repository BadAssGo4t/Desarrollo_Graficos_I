#pragma once
#include "../API/EngineAPI.h"
#include "Renderer.h"
#include "Window.h"

ENGINE_API class Engine
{
public:
	Engine();
	~Engine();
	bool Init();
	void Update();
	bool ShouldClose();
	void Close();
private:
	Window* window;
	Renderer* renderer;
};