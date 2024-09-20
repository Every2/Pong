#include "../include/queues.h"
#include <stdint.h>
#include <vulkan/vulkan_core.h>

QueueFamilyIndinces find_queue_families(VkPhysicalDevice device) {
    QueueFamilyIndinces indices;
    indices.has_value = false;

    uint32_t queue_family_count = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(device, &queue_family_count, VK_NULL_HANDLE);

    VkQueueFamilyProperties* queue_families = malloc(queue_family_count * sizeof *queue_families);
    vkGetPhysicalDeviceQueueFamilyProperties(device, &queue_family_count, queue_families);

    for (int i = 0; i < queue_family_count; i++) {
        if (queue_families->queueFlags & VK_QUEUE_GRAPHICS_BIT) {
            indices.graphics_family = i;
            indices.has_value = true;
        }

        if (indices.has_value)
            break;

        i++;
    }

    return indices;
}
