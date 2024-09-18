#include "../include/window.h"

GLFWwindow* create_window(int width, int height, const char *title) {
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    GLFWwindow *window = glfwCreateWindow(width, height, title, NULL, NULL);

    return window;
}

void create_instance(VkInstance* instance) {
    VkApplicationInfo appinfo;
    appinfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appinfo.pApplicationName = "Pong";
    appinfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appinfo.pEngineName = "No Engine";
    appinfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appinfo.apiVersion = VK_API_VERSION_1_0;

    VkInstanceCreateInfo createinfo;
    createinfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createinfo.pApplicationInfo = &appinfo;

    uint32_t glfw_extension_count = 0;
    const char** glfw_extensions;

    glfw_extensions = glfwGetRequiredInstanceExtensions(&glfw_extension_count);

    createinfo.enabledExtensionCount = glfw_extension_count;
    createinfo.ppEnabledExtensionNames = glfw_extensions;
    createinfo.enabledLayerCount = 0;

    if (vkCreateInstance(&createinfo, NULL, instance) != VK_SUCCESS) {
        printf("Failed to create instance");
        exit(EXIT_FAILURE);
    }
}

