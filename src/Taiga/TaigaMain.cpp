#include <iostream>
#include <GLFW/glfw3.h>
#include "TaigaMain.h"


namespace tga {
	Taiga::Taiga() {}
	Taiga::~Taiga() {}
	void Taiga::Printme(const char* text) {
		std::cout << text << std::endl;
	}
}
































/*
namespace tga {
	GLFWwindow* window;
	double mousex, mousey;
	void gameLoop() {
		glBegin(GL_TRIANGLES);
		glVertex2d(0.25 * 2 - 1, 0.50 * 2 - 1);
		glVertex2d((mousex / 640) * 2 - 1, (1 - (mousey / 480)) * 2 - 1);
		glVertex2d(0.50 * 2 - 1, 0.25 * 2 - 1);
		glEnd();
	}
	int begin() {
		if (!glfwInit()) return -1; else return 0;
	}	

	int size(int width, int height, const char* title = "Taiga Window", bool autobegin = true) {
		if (autobegin) begin();
		window = glfwCreateWindow(width, height, title, NULL, NULL);
		if (!window) { glfwTerminate(); return -1; }
		glfwMakeContextCurrent(window);
		while (!glfwWindowShouldClose(window)) {
			glClear(GL_COLOR_BUFFER_BIT);
			glfwGetCursorPos(window, &mousex, &mousey);
			gameLoop();
			glfwSwapBuffers(window);
			glfwPollEvents();
		}
		glfwTerminate();
		return 0;
	}
}*/