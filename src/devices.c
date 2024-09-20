#include "../include/devices.h"
#include "../include/queues.h"

VkPhysicalDevice pick_physical_device(VkInstance* instance) {
    VkPhysicalDevice device = VK_NULL_HANDLE;

    uint32_t device_count = 0;
    vkEnumeratePhysicalDevices(*instance, &device_count, VK_NULL_HANDLE);

    if (device_count == 0) {
        fprintf(stderr, "failed to find gpu with vulkan support");
        exit(EXIT_FAILURE);
    }

    VkPhysicalDevice* physical_devices = malloc(device_count * sizeof physical_devices);

    vkEnumeratePhysicalDevices(*instance, &device_count, physical_devices);

    for (int i = 0; i < device_count; i++)
        if (is_device_suitable(&physical_devices[i])) {
            device = physical_devices[i];
            break;
        }

    if (physical_devices == VK_NULL_HANDLE) {
        fprintf(stderr, "failed to find suitable gpu");
        exit(EXIT_FAILURE);
    }

    return device;
}


bool is_device_suitable(VkPhysicalDevice* device) {
    QueueFamilyIndinces indices = find_queue_families(*device);

    return indices.has_value;
}
