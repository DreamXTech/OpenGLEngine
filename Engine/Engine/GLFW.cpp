#include "Window.h"

GLFW::GLFW()
{
	glfwInit();
}

GLFW::~GLFW()
{
	glfwTerminate();
}