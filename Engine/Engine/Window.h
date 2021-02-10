#pragma once
#include "Include.h"

class GLFW
{
public:
	GLFW();
	~GLFW();
};

class Window
{
private:
	GLFWwindow* window = nullptr;
public:
	Window(int, int, const char*, GLFWmonitor*, GLFWwindow*);
	~Window();
	void windowLoop();
	void checkStatement();
};

