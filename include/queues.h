#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <vulkan/vulkan_core.h>

typedef struct {
  uint32_t graphics_family;
  bool has_value;
} QueueFamilyIndinces;

QueueFamilyIndinces  find_queue_families(VkPhysicalDevice device);
