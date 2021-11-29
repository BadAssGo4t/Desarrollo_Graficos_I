#pragma once
#include "Window.h"

class Renderer
{
public:
	Renderer(Window* window);
	~Renderer();
private:
	Window* window;
};