#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <vulkan/vulkan_core.h>
#include "GLFW/glfw3.h"
#include "vulkan/vulkan.h"

GLFWwindow* create_window(int width, int height, const char *title);
void create_instance(VkInstance* instance);
