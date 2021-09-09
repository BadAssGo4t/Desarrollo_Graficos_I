#include "Renderer.h"
#include "GLFW/glfw3.h"

Renderer::Renderer()
{
}

Renderer::~Renderer()
{
}

void Renderer::Clear()
{
	/* Render here */
	glClear(GL_COLOR_BUFFER_BIT);
}

void Renderer::DrawTriangle()
{
	/*Draw a triangle*/
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.5f, -0.5f);
	glEnd();
}