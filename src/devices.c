#include "../include/devices.h"
#include <stdint.h>
#include <vulkan/vulkan_core.h>

void pick_physical_device(VkInstance* instance, uint32_t device_count) {
    VkPhysicalDevice* physical_device = malloc(device_count * sizeof(VkPhysicalDevice));

    vkEnumeratePhysicalDevices(*instance, &device_count, physical_device);
}

bool is_device_suitable(VkPhysicalDevice* device) {
    return true;
}
