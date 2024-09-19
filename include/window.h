#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <vulkan/vulkan_core.h>

GLFWwindow* create_window(int width, int height, const char *title);
void create_instance(VkInstance* instance);
