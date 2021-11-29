#include "Window.h"
#include <iostream>

Window::Window()
{
	std::cout << "Init Window" << std::endl;
}

Window::~Window()
{
	std::cout << "Destroy Window" << std::endl;
}