#include "Window.h"

Window::Window()
{
}

Window::~Window()
{
}

bool Window::Init()
{
	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{		
		return false;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	return true;
}

bool Window::ShouldClose()
{
	return glfwWindowShouldClose(window);
}

void Window::SwapBuffers()
{
	/* Swap front and back buffers */
	glfwSwapBuffers(window);
}