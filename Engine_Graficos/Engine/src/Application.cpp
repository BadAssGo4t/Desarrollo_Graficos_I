//#include "API/pch.h"
#include "Application.h"
#include <GLFW/glfw3.h>

// Shader Buffer 
static unsigned int compileShader(const std::string& source, unsigned int type)
{
	unsigned int id = glCreateShader(type);
	const char* src = source.c_str();
	glShaderSource(id, 1, &src, nullptr);
	glCompileShader(id);

	// Error Handling
	glGetShaderiv (id, GL_COMPILE_STATUS, &result);
	if (result == false)
	{
		int lenght;
		glGetShaderiv (id, GL_INFO_LOG_LENGHT, &lenght);
		char* message = (char*)alloca(lenght * sozeof (char));
		glGetShaderInfoLog(id, lenght, &lenght, message);
		std::cout << "failed to compile " << (type== GL_VERTEX_SHADER ? "vertex" : "fragment");
		std::endl;
		std::cout << message << etd::endl;
	}
	// End

	return id;
}
static unsigned int createShader (const std::string& vertexShader, const std::string& fragmentShader)
{
	unsigned int program = glCreateProgram();
	unsigned int vs = CompileShader(GL_VERTEX_SHADER, vertexShader);
	unsigned int fs = CompileShader(GL_FRAGMENT_SHADER, fragmentShader);

	glAttaachShader (program, vs);
	glAttachShader (program, fs);
	glLinkProgram (program);
	glValidateProgram(program);

	glDeleteShader(vs);
	glDeleteShader(fs);

	return program;
}
//End shader buffer

int RunEngine()
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	// Vertex Buffer 
	float positions [6] = {
		-0.5f, -0.5f,
         0.0f,  0.5f,
         0.5f, -0.5f
	};

	unsigned int buffer;
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, 6*sizeof(float), positions, GL_STATIC_DRAW);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, 0); // If  a Pointer Is needed you can use: (const void*)8 instead of the last 0 referring a  pointer 

	std::string vertexShader = 
	"#version 330 Core"
	"\n"
	"layout (location = 0) in vec4 position;\n"
	"\n"
	"void main()\n"
	"{\n"
	" gl_Position = position "
	"}";

		std::string fragmentShader = 
	"#version 330 Core"
	"\n"
	"layout (location = 0) in vec4 color;"
	"\n"
	"void main()\n"
	"{\n"
	" color = vec4 (1.0, 0.0, 0.0, 1,0);\n"
	"}";


	unsigned int shader = createShader(vertexShader, fragmentShader);
	glUseProgram(shader);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	//End vertex buffer

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/*Draw a triangle*/
		glDrawArrays(GL_TRIANGLES, 0, 3);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}