#include "../include/window.h"

int main() {
    glfwInit();
    GLFWwindow* window = create_window(800, 600, "Pong");
    VkInstance instance;

    create_instance(&instance);

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    vkDestroyInstance(instance, NULL);
    glfwDestroyWindow(window);
    glfwTerminate();
}

