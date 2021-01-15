#include <iostream>
#include <GLFW/glfw3.h>
#include "TaigaMain.h"

void gameLoop();
int begin();
int size(int, int, const char*, bool);

namespace tga {
	App::App() {}
	App::~App() {}

	void App::Run() {
		std::cout << "Hi" << std::endl;
		size(width, height, title, autobegin);
		while (true);
	}
}

GLFWwindow* window;
double mousex, mousey;

int begin() {
	if (!glfwInit()) return -1; else return 0;
}	

void gameLoop() {
	glBegin(GL_TRIANGLES);
	glVertex2d(0.25 * 2 - 1, 0.50 * 2 - 1);
	glVertex2d(mousex, mousey);
	glVertex2d(0.50 * 2 - 1, 0.25 * 2 - 1);
	glEnd();
}

int size(int width, int height, const char* title = "Taiga Window", bool autobegin = true) {
	if (autobegin) begin();
	window = glfwCreateWindow(width, height, title, NULL, NULL);
	if (!window) { glfwTerminate(); return -1; }
	glfwMakeContextCurrent(window);
	while (!glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT);
		glfwGetCursorPos(window, &mousex, &mousey);
		mousex = (mousex / width) * 2 - 1;
		mousey = ((mousey / height) * 2 - 1) * -1;
		gameLoop();
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glfwTerminate();
	return 0;
}