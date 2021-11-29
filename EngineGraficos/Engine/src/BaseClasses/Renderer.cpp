#include "Renderer.h"
#include <iostream>

Renderer::Renderer(Window* window)
{
	std::cout << "Init Renderer" << std::endl;
	this->window = window;
}

Renderer::~Renderer()
{
	std::cout << "Destroy Renderer" << std::endl;
}