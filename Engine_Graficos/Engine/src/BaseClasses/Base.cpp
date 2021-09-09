#include "Base.h"
#include "GLFW/glfw3.h"

Engine::Engine()
{
	window = new Window();
	renderer = new Renderer();
}
Engine::~Engine()
{
	delete window;
	delete renderer;
}

bool Engine::Init()
{
	/* Initialize the library */
	if (!glfwInit())
		return false;

	if (!window->Init())
	{
		glfwTerminate();
		return false;
	}

	return true;
}

void Engine::Update()
{
	renderer->Clear();

	renderer->DrawTriangle();

	window->SwapBuffers();

	/* Poll for and process events */
	glfwPollEvents();
}

bool Engine::ShouldClose()
{
	return window->ShouldClose();
}

void Engine::Close()
{
	glfwTerminate();
}