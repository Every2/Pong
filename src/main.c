#include "../include/window.h"

int main() {
    glfwInit();
    GLFWwindow* window = createWindow(800, 600, "Pong");

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
}

