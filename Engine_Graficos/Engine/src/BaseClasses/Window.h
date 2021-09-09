#pragma once
#include "GLFW/glfw3.h"

class Window
{
public:
	Window();
	~Window();
	bool Init();
	bool ShouldClose();
	void SwapBuffers();
private:
	GLFWwindow* window;
};