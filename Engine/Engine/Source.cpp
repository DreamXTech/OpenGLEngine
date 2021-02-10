#include "Window.h"

int main() 
{	
	Window* window = new Window(SIZE_WIDTH, SIZE_HEIGHT, "Engine", NULL, NULL);
	window->checkStatement();
	window->windowLoop();
	return 0;
}