#ifndef NVK_BUFFER_H
#define NVK_BUFFER_H 1

#include "nvk_private.h"

#include "vulkan/runtime/vk_buffer.h"

struct nvk_device_memory;

struct nvk_buffer {
   struct vk_buffer vk;
   struct nvk_device_memory *mem;
   VkDeviceSize offset;
};

VK_DEFINE_HANDLE_CASTS(nvk_buffer, vk.base, VkBuffer, VK_OBJECT_TYPE_BUFFER)

static inline uint64_t
nvk_buffer_address(struct nvk_buffer *buffer)
{
   return 0; /* TODO */
}

#endif