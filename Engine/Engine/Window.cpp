#include "Window.h"
#include "GLFW.h"
Window::Window(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share)
{
	GLFW* gl = new GLFW();

	window = glfwCreateWindow(width, height, title, monitor, share);

	glfwMakeContextCurrent(window);
	glewInit();
	glewExperimental = GL_TRUE;
}

Window::~Window() { }

void Window::windowLoop()
{
	glClearColor(0.5f, 0.0f, 0.5f, 0.0f);
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();

		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);
	}
}

void Window::checkStatement()
{
	if (window == NULL)
	{
		std::cout << "error";
	}
	else std::cout << "Window initialized";
}
