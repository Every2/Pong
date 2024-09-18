#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <vulkan/vulkan_core.h>

void pick_physical_device(VkInstance* instance, uint32_t size);
bool is_device_suitable(VkPhysicalDevice* device);
