/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/vulkan.h>

#ifndef GLAD_IMPL_UTIL_C_
#define GLAD_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLAD_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLAD_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLAD_IMPL_UTIL_C_ */

#ifdef __cplusplus
extern "C" {
#endif



int GLAD_VK_VERSION_1_0 = 0;
int GLAD_VK_VERSION_1_1 = 0;
int GLAD_VK_VERSION_1_2 = 0;
int GLAD_VK_AMD_draw_indirect_count = 0;
int GLAD_VK_EXT_buffer_device_address = 0;
int GLAD_VK_EXT_host_query_reset = 0;
int GLAD_VK_KHR_bind_memory2 = 0;
int GLAD_VK_KHR_buffer_device_address = 0;
int GLAD_VK_KHR_create_renderpass2 = 0;
int GLAD_VK_KHR_descriptor_update_template = 0;
int GLAD_VK_KHR_device_group = 0;
int GLAD_VK_KHR_device_group_creation = 0;
int GLAD_VK_KHR_draw_indirect_count = 0;
int GLAD_VK_KHR_external_fence_capabilities = 0;
int GLAD_VK_KHR_external_memory_capabilities = 0;
int GLAD_VK_KHR_external_semaphore_capabilities = 0;
int GLAD_VK_KHR_get_memory_requirements2 = 0;
int GLAD_VK_KHR_get_physical_device_properties2 = 0;
int GLAD_VK_KHR_maintenance1 = 0;
int GLAD_VK_KHR_maintenance3 = 0;
int GLAD_VK_KHR_sampler_ycbcr_conversion = 0;
int GLAD_VK_KHR_timeline_semaphore = 0;



PFN_vkAcquireNextImage2KHR glad_vkAcquireNextImage2KHR = NULL;
PFN_vkAllocateCommandBuffers glad_vkAllocateCommandBuffers = NULL;
PFN_vkAllocateDescriptorSets glad_vkAllocateDescriptorSets = NULL;
PFN_vkAllocateMemory glad_vkAllocateMemory = NULL;
PFN_vkBeginCommandBuffer glad_vkBeginCommandBuffer = NULL;
PFN_vkBindBufferMemory glad_vkBindBufferMemory = NULL;
PFN_vkBindBufferMemory2 glad_vkBindBufferMemory2 = NULL;
PFN_vkBindBufferMemory2KHR glad_vkBindBufferMemory2KHR = NULL;
PFN_vkBindImageMemory glad_vkBindImageMemory = NULL;
PFN_vkBindImageMemory2 glad_vkBindImageMemory2 = NULL;
PFN_vkBindImageMemory2KHR glad_vkBindImageMemory2KHR = NULL;
PFN_vkCmdBeginQuery glad_vkCmdBeginQuery = NULL;
PFN_vkCmdBeginRenderPass glad_vkCmdBeginRenderPass = NULL;
PFN_vkCmdBeginRenderPass2 glad_vkCmdBeginRenderPass2 = NULL;
PFN_vkCmdBeginRenderPass2KHR glad_vkCmdBeginRenderPass2KHR = NULL;
PFN_vkCmdBindDescriptorSets glad_vkCmdBindDescriptorSets = NULL;
PFN_vkCmdBindIndexBuffer glad_vkCmdBindIndexBuffer = NULL;
PFN_vkCmdBindPipeline glad_vkCmdBindPipeline = NULL;
PFN_vkCmdBindVertexBuffers glad_vkCmdBindVertexBuffers = NULL;
PFN_vkCmdBlitImage glad_vkCmdBlitImage = NULL;
PFN_vkCmdClearAttachments glad_vkCmdClearAttachments = NULL;
PFN_vkCmdClearColorImage glad_vkCmdClearColorImage = NULL;
PFN_vkCmdClearDepthStencilImage glad_vkCmdClearDepthStencilImage = NULL;
PFN_vkCmdCopyBuffer glad_vkCmdCopyBuffer = NULL;
PFN_vkCmdCopyBufferToImage glad_vkCmdCopyBufferToImage = NULL;
PFN_vkCmdCopyImage glad_vkCmdCopyImage = NULL;
PFN_vkCmdCopyImageToBuffer glad_vkCmdCopyImageToBuffer = NULL;
PFN_vkCmdCopyQueryPoolResults glad_vkCmdCopyQueryPoolResults = NULL;
PFN_vkCmdDispatch glad_vkCmdDispatch = NULL;
PFN_vkCmdDispatchBase glad_vkCmdDispatchBase = NULL;
PFN_vkCmdDispatchBaseKHR glad_vkCmdDispatchBaseKHR = NULL;
PFN_vkCmdDispatchIndirect glad_vkCmdDispatchIndirect = NULL;
PFN_vkCmdDraw glad_vkCmdDraw = NULL;
PFN_vkCmdDrawIndexed glad_vkCmdDrawIndexed = NULL;
PFN_vkCmdDrawIndexedIndirect glad_vkCmdDrawIndexedIndirect = NULL;
PFN_vkCmdDrawIndexedIndirectCount glad_vkCmdDrawIndexedIndirectCount = NULL;
PFN_vkCmdDrawIndexedIndirectCountAMD glad_vkCmdDrawIndexedIndirectCountAMD = NULL;
PFN_vkCmdDrawIndexedIndirectCountKHR glad_vkCmdDrawIndexedIndirectCountKHR = NULL;
PFN_vkCmdDrawIndirect glad_vkCmdDrawIndirect = NULL;
PFN_vkCmdDrawIndirectCount glad_vkCmdDrawIndirectCount = NULL;
PFN_vkCmdDrawIndirectCountAMD glad_vkCmdDrawIndirectCountAMD = NULL;
PFN_vkCmdDrawIndirectCountKHR glad_vkCmdDrawIndirectCountKHR = NULL;
PFN_vkCmdEndQuery glad_vkCmdEndQuery = NULL;
PFN_vkCmdEndRenderPass glad_vkCmdEndRenderPass = NULL;
PFN_vkCmdEndRenderPass2 glad_vkCmdEndRenderPass2 = NULL;
PFN_vkCmdEndRenderPass2KHR glad_vkCmdEndRenderPass2KHR = NULL;
PFN_vkCmdExecuteCommands glad_vkCmdExecuteCommands = NULL;
PFN_vkCmdFillBuffer glad_vkCmdFillBuffer = NULL;
PFN_vkCmdNextSubpass glad_vkCmdNextSubpass = NULL;
PFN_vkCmdNextSubpass2 glad_vkCmdNextSubpass2 = NULL;
PFN_vkCmdNextSubpass2KHR glad_vkCmdNextSubpass2KHR = NULL;
PFN_vkCmdPipelineBarrier glad_vkCmdPipelineBarrier = NULL;
PFN_vkCmdPushConstants glad_vkCmdPushConstants = NULL;
PFN_vkCmdPushDescriptorSetWithTemplateKHR glad_vkCmdPushDescriptorSetWithTemplateKHR = NULL;
PFN_vkCmdResetEvent glad_vkCmdResetEvent = NULL;
PFN_vkCmdResetQueryPool glad_vkCmdResetQueryPool = NULL;
PFN_vkCmdResolveImage glad_vkCmdResolveImage = NULL;
PFN_vkCmdSetBlendConstants glad_vkCmdSetBlendConstants = NULL;
PFN_vkCmdSetDepthBias glad_vkCmdSetDepthBias = NULL;
PFN_vkCmdSetDepthBounds glad_vkCmdSetDepthBounds = NULL;
PFN_vkCmdSetDeviceMask glad_vkCmdSetDeviceMask = NULL;
PFN_vkCmdSetDeviceMaskKHR glad_vkCmdSetDeviceMaskKHR = NULL;
PFN_vkCmdSetEvent glad_vkCmdSetEvent = NULL;
PFN_vkCmdSetLineWidth glad_vkCmdSetLineWidth = NULL;
PFN_vkCmdSetScissor glad_vkCmdSetScissor = NULL;
PFN_vkCmdSetStencilCompareMask glad_vkCmdSetStencilCompareMask = NULL;
PFN_vkCmdSetStencilReference glad_vkCmdSetStencilReference = NULL;
PFN_vkCmdSetStencilWriteMask glad_vkCmdSetStencilWriteMask = NULL;
PFN_vkCmdSetViewport glad_vkCmdSetViewport = NULL;
PFN_vkCmdUpdateBuffer glad_vkCmdUpdateBuffer = NULL;
PFN_vkCmdWaitEvents glad_vkCmdWaitEvents = NULL;
PFN_vkCmdWriteTimestamp glad_vkCmdWriteTimestamp = NULL;
PFN_vkCreateBuffer glad_vkCreateBuffer = NULL;
PFN_vkCreateBufferView glad_vkCreateBufferView = NULL;
PFN_vkCreateCommandPool glad_vkCreateCommandPool = NULL;
PFN_vkCreateComputePipelines glad_vkCreateComputePipelines = NULL;
PFN_vkCreateDescriptorPool glad_vkCreateDescriptorPool = NULL;
PFN_vkCreateDescriptorSetLayout glad_vkCreateDescriptorSetLayout = NULL;
PFN_vkCreateDescriptorUpdateTemplate glad_vkCreateDescriptorUpdateTemplate = NULL;
PFN_vkCreateDescriptorUpdateTemplateKHR glad_vkCreateDescriptorUpdateTemplateKHR = NULL;
PFN_vkCreateDevice glad_vkCreateDevice = NULL;
PFN_vkCreateEvent glad_vkCreateEvent = NULL;
PFN_vkCreateFence glad_vkCreateFence = NULL;
PFN_vkCreateFramebuffer glad_vkCreateFramebuffer = NULL;
PFN_vkCreateGraphicsPipelines glad_vkCreateGraphicsPipelines = NULL;
PFN_vkCreateImage glad_vkCreateImage = NULL;
PFN_vkCreateImageView glad_vkCreateImageView = NULL;
PFN_vkCreateInstance glad_vkCreateInstance = NULL;
PFN_vkCreatePipelineCache glad_vkCreatePipelineCache = NULL;
PFN_vkCreatePipelineLayout glad_vkCreatePipelineLayout = NULL;
PFN_vkCreateQueryPool glad_vkCreateQueryPool = NULL;
PFN_vkCreateRenderPass glad_vkCreateRenderPass = NULL;
PFN_vkCreateRenderPass2 glad_vkCreateRenderPass2 = NULL;
PFN_vkCreateRenderPass2KHR glad_vkCreateRenderPass2KHR = NULL;
PFN_vkCreateSampler glad_vkCreateSampler = NULL;
PFN_vkCreateSamplerYcbcrConversion glad_vkCreateSamplerYcbcrConversion = NULL;
PFN_vkCreateSamplerYcbcrConversionKHR glad_vkCreateSamplerYcbcrConversionKHR = NULL;
PFN_vkCreateSemaphore glad_vkCreateSemaphore = NULL;
PFN_vkCreateShaderModule glad_vkCreateShaderModule = NULL;
PFN_vkDestroyBuffer glad_vkDestroyBuffer = NULL;
PFN_vkDestroyBufferView glad_vkDestroyBufferView = NULL;
PFN_vkDestroyCommandPool glad_vkDestroyCommandPool = NULL;
PFN_vkDestroyDescriptorPool glad_vkDestroyDescriptorPool = NULL;
PFN_vkDestroyDescriptorSetLayout glad_vkDestroyDescriptorSetLayout = NULL;
PFN_vkDestroyDescriptorUpdateTemplate glad_vkDestroyDescriptorUpdateTemplate = NULL;
PFN_vkDestroyDescriptorUpdateTemplateKHR glad_vkDestroyDescriptorUpdateTemplateKHR = NULL;
PFN_vkDestroyDevice glad_vkDestroyDevice = NULL;
PFN_vkDestroyEvent glad_vkDestroyEvent = NULL;
PFN_vkDestroyFence glad_vkDestroyFence = NULL;
PFN_vkDestroyFramebuffer glad_vkDestroyFramebuffer = NULL;
PFN_vkDestroyImage glad_vkDestroyImage = NULL;
PFN_vkDestroyImageView glad_vkDestroyImageView = NULL;
PFN_vkDestroyInstance glad_vkDestroyInstance = NULL;
PFN_vkDestroyPipeline glad_vkDestroyPipeline = NULL;
PFN_vkDestroyPipelineCache glad_vkDestroyPipelineCache = NULL;
PFN_vkDestroyPipelineLayout glad_vkDestroyPipelineLayout = NULL;
PFN_vkDestroyQueryPool glad_vkDestroyQueryPool = NULL;
PFN_vkDestroyRenderPass glad_vkDestroyRenderPass = NULL;
PFN_vkDestroySampler glad_vkDestroySampler = NULL;
PFN_vkDestroySamplerYcbcrConversion glad_vkDestroySamplerYcbcrConversion = NULL;
PFN_vkDestroySamplerYcbcrConversionKHR glad_vkDestroySamplerYcbcrConversionKHR = NULL;
PFN_vkDestroySemaphore glad_vkDestroySemaphore = NULL;
PFN_vkDestroyShaderModule glad_vkDestroyShaderModule = NULL;
PFN_vkDeviceWaitIdle glad_vkDeviceWaitIdle = NULL;
PFN_vkEndCommandBuffer glad_vkEndCommandBuffer = NULL;
PFN_vkEnumerateDeviceExtensionProperties glad_vkEnumerateDeviceExtensionProperties = NULL;
PFN_vkEnumerateDeviceLayerProperties glad_vkEnumerateDeviceLayerProperties = NULL;
PFN_vkEnumerateInstanceExtensionProperties glad_vkEnumerateInstanceExtensionProperties = NULL;
PFN_vkEnumerateInstanceLayerProperties glad_vkEnumerateInstanceLayerProperties = NULL;
PFN_vkEnumerateInstanceVersion glad_vkEnumerateInstanceVersion = NULL;
PFN_vkEnumeratePhysicalDeviceGroups glad_vkEnumeratePhysicalDeviceGroups = NULL;
PFN_vkEnumeratePhysicalDeviceGroupsKHR glad_vkEnumeratePhysicalDeviceGroupsKHR = NULL;
PFN_vkEnumeratePhysicalDevices glad_vkEnumeratePhysicalDevices = NULL;
PFN_vkFlushMappedMemoryRanges glad_vkFlushMappedMemoryRanges = NULL;
PFN_vkFreeCommandBuffers glad_vkFreeCommandBuffers = NULL;
PFN_vkFreeDescriptorSets glad_vkFreeDescriptorSets = NULL;
PFN_vkFreeMemory glad_vkFreeMemory = NULL;
PFN_vkGetBufferDeviceAddress glad_vkGetBufferDeviceAddress = NULL;
PFN_vkGetBufferDeviceAddressEXT glad_vkGetBufferDeviceAddressEXT = NULL;
PFN_vkGetBufferDeviceAddressKHR glad_vkGetBufferDeviceAddressKHR = NULL;
PFN_vkGetBufferMemoryRequirements glad_vkGetBufferMemoryRequirements = NULL;
PFN_vkGetBufferMemoryRequirements2 glad_vkGetBufferMemoryRequirements2 = NULL;
PFN_vkGetBufferMemoryRequirements2KHR glad_vkGetBufferMemoryRequirements2KHR = NULL;
PFN_vkGetBufferOpaqueCaptureAddress glad_vkGetBufferOpaqueCaptureAddress = NULL;
PFN_vkGetBufferOpaqueCaptureAddressKHR glad_vkGetBufferOpaqueCaptureAddressKHR = NULL;
PFN_vkGetDescriptorSetLayoutSupport glad_vkGetDescriptorSetLayoutSupport = NULL;
PFN_vkGetDescriptorSetLayoutSupportKHR glad_vkGetDescriptorSetLayoutSupportKHR = NULL;
PFN_vkGetDeviceGroupPeerMemoryFeatures glad_vkGetDeviceGroupPeerMemoryFeatures = NULL;
PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR glad_vkGetDeviceGroupPeerMemoryFeaturesKHR = NULL;
PFN_vkGetDeviceGroupPresentCapabilitiesKHR glad_vkGetDeviceGroupPresentCapabilitiesKHR = NULL;
PFN_vkGetDeviceGroupSurfacePresentModesKHR glad_vkGetDeviceGroupSurfacePresentModesKHR = NULL;
PFN_vkGetDeviceMemoryCommitment glad_vkGetDeviceMemoryCommitment = NULL;
PFN_vkGetDeviceMemoryOpaqueCaptureAddress glad_vkGetDeviceMemoryOpaqueCaptureAddress = NULL;
PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR = NULL;
PFN_vkGetDeviceProcAddr glad_vkGetDeviceProcAddr = NULL;
PFN_vkGetDeviceQueue glad_vkGetDeviceQueue = NULL;
PFN_vkGetDeviceQueue2 glad_vkGetDeviceQueue2 = NULL;
PFN_vkGetEventStatus glad_vkGetEventStatus = NULL;
PFN_vkGetFenceStatus glad_vkGetFenceStatus = NULL;
PFN_vkGetImageMemoryRequirements glad_vkGetImageMemoryRequirements = NULL;
PFN_vkGetImageMemoryRequirements2 glad_vkGetImageMemoryRequirements2 = NULL;
PFN_vkGetImageMemoryRequirements2KHR glad_vkGetImageMemoryRequirements2KHR = NULL;
PFN_vkGetImageSparseMemoryRequirements glad_vkGetImageSparseMemoryRequirements = NULL;
PFN_vkGetImageSparseMemoryRequirements2 glad_vkGetImageSparseMemoryRequirements2 = NULL;
PFN_vkGetImageSparseMemoryRequirements2KHR glad_vkGetImageSparseMemoryRequirements2KHR = NULL;
PFN_vkGetImageSubresourceLayout glad_vkGetImageSubresourceLayout = NULL;
PFN_vkGetInstanceProcAddr glad_vkGetInstanceProcAddr = NULL;
PFN_vkGetPhysicalDeviceExternalBufferProperties glad_vkGetPhysicalDeviceExternalBufferProperties = NULL;
PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalFenceProperties glad_vkGetPhysicalDeviceExternalFenceProperties = NULL;
PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR glad_vkGetPhysicalDeviceExternalFencePropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalSemaphoreProperties glad_vkGetPhysicalDeviceExternalSemaphoreProperties = NULL;
PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceFeatures glad_vkGetPhysicalDeviceFeatures = NULL;
PFN_vkGetPhysicalDeviceFeatures2 glad_vkGetPhysicalDeviceFeatures2 = NULL;
PFN_vkGetPhysicalDeviceFeatures2KHR glad_vkGetPhysicalDeviceFeatures2KHR = NULL;
PFN_vkGetPhysicalDeviceFormatProperties glad_vkGetPhysicalDeviceFormatProperties = NULL;
PFN_vkGetPhysicalDeviceFormatProperties2 glad_vkGetPhysicalDeviceFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceFormatProperties2KHR glad_vkGetPhysicalDeviceFormatProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties glad_vkGetPhysicalDeviceImageFormatProperties = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties2 glad_vkGetPhysicalDeviceImageFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties2KHR glad_vkGetPhysicalDeviceImageFormatProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties glad_vkGetPhysicalDeviceMemoryProperties = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties2 glad_vkGetPhysicalDeviceMemoryProperties2 = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties2KHR glad_vkGetPhysicalDeviceMemoryProperties2KHR = NULL;
PFN_vkGetPhysicalDevicePresentRectanglesKHR glad_vkGetPhysicalDevicePresentRectanglesKHR = NULL;
PFN_vkGetPhysicalDeviceProperties glad_vkGetPhysicalDeviceProperties = NULL;
PFN_vkGetPhysicalDeviceProperties2 glad_vkGetPhysicalDeviceProperties2 = NULL;
PFN_vkGetPhysicalDeviceProperties2KHR glad_vkGetPhysicalDeviceProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties glad_vkGetPhysicalDeviceQueueFamilyProperties = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties2 glad_vkGetPhysicalDeviceQueueFamilyProperties2 = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties glad_vkGetPhysicalDeviceSparseImageFormatProperties = NULL;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = NULL;
PFN_vkGetPipelineCacheData glad_vkGetPipelineCacheData = NULL;
PFN_vkGetQueryPoolResults glad_vkGetQueryPoolResults = NULL;
PFN_vkGetRenderAreaGranularity glad_vkGetRenderAreaGranularity = NULL;
PFN_vkGetSemaphoreCounterValue glad_vkGetSemaphoreCounterValue = NULL;
PFN_vkGetSemaphoreCounterValueKHR glad_vkGetSemaphoreCounterValueKHR = NULL;
PFN_vkInvalidateMappedMemoryRanges glad_vkInvalidateMappedMemoryRanges = NULL;
PFN_vkMapMemory glad_vkMapMemory = NULL;
PFN_vkMergePipelineCaches glad_vkMergePipelineCaches = NULL;
PFN_vkQueueBindSparse glad_vkQueueBindSparse = NULL;
PFN_vkQueueSubmit glad_vkQueueSubmit = NULL;
PFN_vkQueueWaitIdle glad_vkQueueWaitIdle = NULL;
PFN_vkResetCommandBuffer glad_vkResetCommandBuffer = NULL;
PFN_vkResetCommandPool glad_vkResetCommandPool = NULL;
PFN_vkResetDescriptorPool glad_vkResetDescriptorPool = NULL;
PFN_vkResetEvent glad_vkResetEvent = NULL;
PFN_vkResetFences glad_vkResetFences = NULL;
PFN_vkResetQueryPool glad_vkResetQueryPool = NULL;
PFN_vkResetQueryPoolEXT glad_vkResetQueryPoolEXT = NULL;
PFN_vkSetEvent glad_vkSetEvent = NULL;
PFN_vkSignalSemaphore glad_vkSignalSemaphore = NULL;
PFN_vkSignalSemaphoreKHR glad_vkSignalSemaphoreKHR = NULL;
PFN_vkTrimCommandPool glad_vkTrimCommandPool = NULL;
PFN_vkTrimCommandPoolKHR glad_vkTrimCommandPoolKHR = NULL;
PFN_vkUnmapMemory glad_vkUnmapMemory = NULL;
PFN_vkUpdateDescriptorSetWithTemplate glad_vkUpdateDescriptorSetWithTemplate = NULL;
PFN_vkUpdateDescriptorSetWithTemplateKHR glad_vkUpdateDescriptorSetWithTemplateKHR = NULL;
PFN_vkUpdateDescriptorSets glad_vkUpdateDescriptorSets = NULL;
PFN_vkWaitForFences glad_vkWaitForFences = NULL;
PFN_vkWaitSemaphores glad_vkWaitSemaphores = NULL;
PFN_vkWaitSemaphoresKHR glad_vkWaitSemaphoresKHR = NULL;


static void glad_vk_load_VK_VERSION_1_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VERSION_1_0) return;
    glad_vkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers) load(userptr, "vkAllocateCommandBuffers");
    glad_vkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets) load(userptr, "vkAllocateDescriptorSets");
    glad_vkAllocateMemory = (PFN_vkAllocateMemory) load(userptr, "vkAllocateMemory");
    glad_vkBeginCommandBuffer = (PFN_vkBeginCommandBuffer) load(userptr, "vkBeginCommandBuffer");
    glad_vkBindBufferMemory = (PFN_vkBindBufferMemory) load(userptr, "vkBindBufferMemory");
    glad_vkBindImageMemory = (PFN_vkBindImageMemory) load(userptr, "vkBindImageMemory");
    glad_vkCmdBeginQuery = (PFN_vkCmdBeginQuery) load(userptr, "vkCmdBeginQuery");
    glad_vkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass) load(userptr, "vkCmdBeginRenderPass");
    glad_vkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets) load(userptr, "vkCmdBindDescriptorSets");
    glad_vkCmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer) load(userptr, "vkCmdBindIndexBuffer");
    glad_vkCmdBindPipeline = (PFN_vkCmdBindPipeline) load(userptr, "vkCmdBindPipeline");
    glad_vkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers) load(userptr, "vkCmdBindVertexBuffers");
    glad_vkCmdBlitImage = (PFN_vkCmdBlitImage) load(userptr, "vkCmdBlitImage");
    glad_vkCmdClearAttachments = (PFN_vkCmdClearAttachments) load(userptr, "vkCmdClearAttachments");
    glad_vkCmdClearColorImage = (PFN_vkCmdClearColorImage) load(userptr, "vkCmdClearColorImage");
    glad_vkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage) load(userptr, "vkCmdClearDepthStencilImage");
    glad_vkCmdCopyBuffer = (PFN_vkCmdCopyBuffer) load(userptr, "vkCmdCopyBuffer");
    glad_vkCmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage) load(userptr, "vkCmdCopyBufferToImage");
    glad_vkCmdCopyImage = (PFN_vkCmdCopyImage) load(userptr, "vkCmdCopyImage");
    glad_vkCmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer) load(userptr, "vkCmdCopyImageToBuffer");
    glad_vkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults) load(userptr, "vkCmdCopyQueryPoolResults");
    glad_vkCmdDispatch = (PFN_vkCmdDispatch) load(userptr, "vkCmdDispatch");
    glad_vkCmdDispatchIndirect = (PFN_vkCmdDispatchIndirect) load(userptr, "vkCmdDispatchIndirect");
    glad_vkCmdDraw = (PFN_vkCmdDraw) load(userptr, "vkCmdDraw");
    glad_vkCmdDrawIndexed = (PFN_vkCmdDrawIndexed) load(userptr, "vkCmdDrawIndexed");
    glad_vkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect) load(userptr, "vkCmdDrawIndexedIndirect");
    glad_vkCmdDrawIndirect = (PFN_vkCmdDrawIndirect) load(userptr, "vkCmdDrawIndirect");
    glad_vkCmdEndQuery = (PFN_vkCmdEndQuery) load(userptr, "vkCmdEndQuery");
    glad_vkCmdEndRenderPass = (PFN_vkCmdEndRenderPass) load(userptr, "vkCmdEndRenderPass");
    glad_vkCmdExecuteCommands = (PFN_vkCmdExecuteCommands) load(userptr, "vkCmdExecuteCommands");
    glad_vkCmdFillBuffer = (PFN_vkCmdFillBuffer) load(userptr, "vkCmdFillBuffer");
    glad_vkCmdNextSubpass = (PFN_vkCmdNextSubpass) load(userptr, "vkCmdNextSubpass");
    glad_vkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier) load(userptr, "vkCmdPipelineBarrier");
    glad_vkCmdPushConstants = (PFN_vkCmdPushConstants) load(userptr, "vkCmdPushConstants");
    glad_vkCmdResetEvent = (PFN_vkCmdResetEvent) load(userptr, "vkCmdResetEvent");
    glad_vkCmdResetQueryPool = (PFN_vkCmdResetQueryPool) load(userptr, "vkCmdResetQueryPool");
    glad_vkCmdResolveImage = (PFN_vkCmdResolveImage) load(userptr, "vkCmdResolveImage");
    glad_vkCmdSetBlendConstants = (PFN_vkCmdSetBlendConstants) load(userptr, "vkCmdSetBlendConstants");
    glad_vkCmdSetDepthBias = (PFN_vkCmdSetDepthBias) load(userptr, "vkCmdSetDepthBias");
    glad_vkCmdSetDepthBounds = (PFN_vkCmdSetDepthBounds) load(userptr, "vkCmdSetDepthBounds");
    glad_vkCmdSetEvent = (PFN_vkCmdSetEvent) load(userptr, "vkCmdSetEvent");
    glad_vkCmdSetLineWidth = (PFN_vkCmdSetLineWidth) load(userptr, "vkCmdSetLineWidth");
    glad_vkCmdSetScissor = (PFN_vkCmdSetScissor) load(userptr, "vkCmdSetScissor");
    glad_vkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask) load(userptr, "vkCmdSetStencilCompareMask");
    glad_vkCmdSetStencilReference = (PFN_vkCmdSetStencilReference) load(userptr, "vkCmdSetStencilReference");
    glad_vkCmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask) load(userptr, "vkCmdSetStencilWriteMask");
    glad_vkCmdSetViewport = (PFN_vkCmdSetViewport) load(userptr, "vkCmdSetViewport");
    glad_vkCmdUpdateBuffer = (PFN_vkCmdUpdateBuffer) load(userptr, "vkCmdUpdateBuffer");
    glad_vkCmdWaitEvents = (PFN_vkCmdWaitEvents) load(userptr, "vkCmdWaitEvents");
    glad_vkCmdWriteTimestamp = (PFN_vkCmdWriteTimestamp) load(userptr, "vkCmdWriteTimestamp");
    glad_vkCreateBuffer = (PFN_vkCreateBuffer) load(userptr, "vkCreateBuffer");
    glad_vkCreateBufferView = (PFN_vkCreateBufferView) load(userptr, "vkCreateBufferView");
    glad_vkCreateCommandPool = (PFN_vkCreateCommandPool) load(userptr, "vkCreateCommandPool");
    glad_vkCreateComputePipelines = (PFN_vkCreateComputePipelines) load(userptr, "vkCreateComputePipelines");
    glad_vkCreateDescriptorPool = (PFN_vkCreateDescriptorPool) load(userptr, "vkCreateDescriptorPool");
    glad_vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout) load(userptr, "vkCreateDescriptorSetLayout");
    glad_vkCreateDevice = (PFN_vkCreateDevice) load(userptr, "vkCreateDevice");
    glad_vkCreateEvent = (PFN_vkCreateEvent) load(userptr, "vkCreateEvent");
    glad_vkCreateFence = (PFN_vkCreateFence) load(userptr, "vkCreateFence");
    glad_vkCreateFramebuffer = (PFN_vkCreateFramebuffer) load(userptr, "vkCreateFramebuffer");
    glad_vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines) load(userptr, "vkCreateGraphicsPipelines");
    glad_vkCreateImage = (PFN_vkCreateImage) load(userptr, "vkCreateImage");
    glad_vkCreateImageView = (PFN_vkCreateImageView) load(userptr, "vkCreateImageView");
    glad_vkCreateInstance = (PFN_vkCreateInstance) load(userptr, "vkCreateInstance");
    glad_vkCreatePipelineCache = (PFN_vkCreatePipelineCache) load(userptr, "vkCreatePipelineCache");
    glad_vkCreatePipelineLayout = (PFN_vkCreatePipelineLayout) load(userptr, "vkCreatePipelineLayout");
    glad_vkCreateQueryPool = (PFN_vkCreateQueryPool) load(userptr, "vkCreateQueryPool");
    glad_vkCreateRenderPass = (PFN_vkCreateRenderPass) load(userptr, "vkCreateRenderPass");
    glad_vkCreateSampler = (PFN_vkCreateSampler) load(userptr, "vkCreateSampler");
    glad_vkCreateSemaphore = (PFN_vkCreateSemaphore) load(userptr, "vkCreateSemaphore");
    glad_vkCreateShaderModule = (PFN_vkCreateShaderModule) load(userptr, "vkCreateShaderModule");
    glad_vkDestroyBuffer = (PFN_vkDestroyBuffer) load(userptr, "vkDestroyBuffer");
    glad_vkDestroyBufferView = (PFN_vkDestroyBufferView) load(userptr, "vkDestroyBufferView");
    glad_vkDestroyCommandPool = (PFN_vkDestroyCommandPool) load(userptr, "vkDestroyCommandPool");
    glad_vkDestroyDescriptorPool = (PFN_vkDestroyDescriptorPool) load(userptr, "vkDestroyDescriptorPool");
    glad_vkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout) load(userptr, "vkDestroyDescriptorSetLayout");
    glad_vkDestroyDevice = (PFN_vkDestroyDevice) load(userptr, "vkDestroyDevice");
    glad_vkDestroyEvent = (PFN_vkDestroyEvent) load(userptr, "vkDestroyEvent");
    glad_vkDestroyFence = (PFN_vkDestroyFence) load(userptr, "vkDestroyFence");
    glad_vkDestroyFramebuffer = (PFN_vkDestroyFramebuffer) load(userptr, "vkDestroyFramebuffer");
    glad_vkDestroyImage = (PFN_vkDestroyImage) load(userptr, "vkDestroyImage");
    glad_vkDestroyImageView = (PFN_vkDestroyImageView) load(userptr, "vkDestroyImageView");
    glad_vkDestroyInstance = (PFN_vkDestroyInstance) load(userptr, "vkDestroyInstance");
    glad_vkDestroyPipeline = (PFN_vkDestroyPipeline) load(userptr, "vkDestroyPipeline");
    glad_vkDestroyPipelineCache = (PFN_vkDestroyPipelineCache) load(userptr, "vkDestroyPipelineCache");
    glad_vkDestroyPipelineLayout = (PFN_vkDestroyPipelineLayout) load(userptr, "vkDestroyPipelineLayout");
    glad_vkDestroyQueryPool = (PFN_vkDestroyQueryPool) load(userptr, "vkDestroyQueryPool");
    glad_vkDestroyRenderPass = (PFN_vkDestroyRenderPass) load(userptr, "vkDestroyRenderPass");
    glad_vkDestroySampler = (PFN_vkDestroySampler) load(userptr, "vkDestroySampler");
    glad_vkDestroySemaphore = (PFN_vkDestroySemaphore) load(userptr, "vkDestroySemaphore");
    glad_vkDestroyShaderModule = (PFN_vkDestroyShaderModule) load(userptr, "vkDestroyShaderModule");
    glad_vkDeviceWaitIdle = (PFN_vkDeviceWaitIdle) load(userptr, "vkDeviceWaitIdle");
    glad_vkEndCommandBuffer = (PFN_vkEndCommandBuffer) load(userptr, "vkEndCommandBuffer");
    glad_vkEnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties) load(userptr, "vkEnumerateDeviceExtensionProperties");
    glad_vkEnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties) load(userptr, "vkEnumerateDeviceLayerProperties");
    glad_vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties) load(userptr, "vkEnumerateInstanceExtensionProperties");
    glad_vkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties) load(userptr, "vkEnumerateInstanceLayerProperties");
    glad_vkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices) load(userptr, "vkEnumeratePhysicalDevices");
    glad_vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges) load(userptr, "vkFlushMappedMemoryRanges");
    glad_vkFreeCommandBuffers = (PFN_vkFreeCommandBuffers) load(userptr, "vkFreeCommandBuffers");
    glad_vkFreeDescriptorSets = (PFN_vkFreeDescriptorSets) load(userptr, "vkFreeDescriptorSets");
    glad_vkFreeMemory = (PFN_vkFreeMemory) load(userptr, "vkFreeMemory");
    glad_vkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements) load(userptr, "vkGetBufferMemoryRequirements");
    glad_vkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment) load(userptr, "vkGetDeviceMemoryCommitment");
    glad_vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr) load(userptr, "vkGetDeviceProcAddr");
    glad_vkGetDeviceQueue = (PFN_vkGetDeviceQueue) load(userptr, "vkGetDeviceQueue");
    glad_vkGetEventStatus = (PFN_vkGetEventStatus) load(userptr, "vkGetEventStatus");
    glad_vkGetFenceStatus = (PFN_vkGetFenceStatus) load(userptr, "vkGetFenceStatus");
    glad_vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements) load(userptr, "vkGetImageMemoryRequirements");
    glad_vkGetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements) load(userptr, "vkGetImageSparseMemoryRequirements");
    glad_vkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout) load(userptr, "vkGetImageSubresourceLayout");
    glad_vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr) load(userptr, "vkGetInstanceProcAddr");
    glad_vkGetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures) load(userptr, "vkGetPhysicalDeviceFeatures");
    glad_vkGetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties) load(userptr, "vkGetPhysicalDeviceFormatProperties");
    glad_vkGetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties) load(userptr, "vkGetPhysicalDeviceImageFormatProperties");
    glad_vkGetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties) load(userptr, "vkGetPhysicalDeviceMemoryProperties");
    glad_vkGetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties) load(userptr, "vkGetPhysicalDeviceProperties");
    glad_vkGetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties");
    glad_vkGetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties");
    glad_vkGetPipelineCacheData = (PFN_vkGetPipelineCacheData) load(userptr, "vkGetPipelineCacheData");
    glad_vkGetQueryPoolResults = (PFN_vkGetQueryPoolResults) load(userptr, "vkGetQueryPoolResults");
    glad_vkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity) load(userptr, "vkGetRenderAreaGranularity");
    glad_vkInvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges) load(userptr, "vkInvalidateMappedMemoryRanges");
    glad_vkMapMemory = (PFN_vkMapMemory) load(userptr, "vkMapMemory");
    glad_vkMergePipelineCaches = (PFN_vkMergePipelineCaches) load(userptr, "vkMergePipelineCaches");
    glad_vkQueueBindSparse = (PFN_vkQueueBindSparse) load(userptr, "vkQueueBindSparse");
    glad_vkQueueSubmit = (PFN_vkQueueSubmit) load(userptr, "vkQueueSubmit");
    glad_vkQueueWaitIdle = (PFN_vkQueueWaitIdle) load(userptr, "vkQueueWaitIdle");
    glad_vkResetCommandBuffer = (PFN_vkResetCommandBuffer) load(userptr, "vkResetCommandBuffer");
    glad_vkResetCommandPool = (PFN_vkResetCommandPool) load(userptr, "vkResetCommandPool");
    glad_vkResetDescriptorPool = (PFN_vkResetDescriptorPool) load(userptr, "vkResetDescriptorPool");
    glad_vkResetEvent = (PFN_vkResetEvent) load(userptr, "vkResetEvent");
    glad_vkResetFences = (PFN_vkResetFences) load(userptr, "vkResetFences");
    glad_vkSetEvent = (PFN_vkSetEvent) load(userptr, "vkSetEvent");
    glad_vkUnmapMemory = (PFN_vkUnmapMemory) load(userptr, "vkUnmapMemory");
    glad_vkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets) load(userptr, "vkUpdateDescriptorSets");
    glad_vkWaitForFences = (PFN_vkWaitForFences) load(userptr, "vkWaitForFences");
}
static void glad_vk_load_VK_VERSION_1_1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VERSION_1_1) return;
    glad_vkBindBufferMemory2 = (PFN_vkBindBufferMemory2) load(userptr, "vkBindBufferMemory2");
    glad_vkBindImageMemory2 = (PFN_vkBindImageMemory2) load(userptr, "vkBindImageMemory2");
    glad_vkCmdDispatchBase = (PFN_vkCmdDispatchBase) load(userptr, "vkCmdDispatchBase");
    glad_vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask) load(userptr, "vkCmdSetDeviceMask");
    glad_vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate) load(userptr, "vkCreateDescriptorUpdateTemplate");
    glad_vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion) load(userptr, "vkCreateSamplerYcbcrConversion");
    glad_vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate) load(userptr, "vkDestroyDescriptorUpdateTemplate");
    glad_vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion) load(userptr, "vkDestroySamplerYcbcrConversion");
    glad_vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion) load(userptr, "vkEnumerateInstanceVersion");
    glad_vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups) load(userptr, "vkEnumeratePhysicalDeviceGroups");
    glad_vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2) load(userptr, "vkGetBufferMemoryRequirements2");
    glad_vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport) load(userptr, "vkGetDescriptorSetLayoutSupport");
    glad_vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures) load(userptr, "vkGetDeviceGroupPeerMemoryFeatures");
    glad_vkGetDeviceQueue2 = (PFN_vkGetDeviceQueue2) load(userptr, "vkGetDeviceQueue2");
    glad_vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2) load(userptr, "vkGetImageMemoryRequirements2");
    glad_vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2) load(userptr, "vkGetImageSparseMemoryRequirements2");
    glad_vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties) load(userptr, "vkGetPhysicalDeviceExternalBufferProperties");
    glad_vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties) load(userptr, "vkGetPhysicalDeviceExternalFenceProperties");
    glad_vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties) load(userptr, "vkGetPhysicalDeviceExternalSemaphoreProperties");
    glad_vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2) load(userptr, "vkGetPhysicalDeviceFeatures2");
    glad_vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2) load(userptr, "vkGetPhysicalDeviceFormatProperties2");
    glad_vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2) load(userptr, "vkGetPhysicalDeviceImageFormatProperties2");
    glad_vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2) load(userptr, "vkGetPhysicalDeviceMemoryProperties2");
    glad_vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2) load(userptr, "vkGetPhysicalDeviceProperties2");
    glad_vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties2");
    glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties2");
    glad_vkTrimCommandPool = (PFN_vkTrimCommandPool) load(userptr, "vkTrimCommandPool");
    glad_vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate) load(userptr, "vkUpdateDescriptorSetWithTemplate");
}
static void glad_vk_load_VK_VERSION_1_2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VERSION_1_2) return;
    glad_vkCmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2) load(userptr, "vkCmdBeginRenderPass2");
    glad_vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount) load(userptr, "vkCmdDrawIndexedIndirectCount");
    glad_vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount) load(userptr, "vkCmdDrawIndirectCount");
    glad_vkCmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2) load(userptr, "vkCmdEndRenderPass2");
    glad_vkCmdNextSubpass2 = (PFN_vkCmdNextSubpass2) load(userptr, "vkCmdNextSubpass2");
    glad_vkCreateRenderPass2 = (PFN_vkCreateRenderPass2) load(userptr, "vkCreateRenderPass2");
    glad_vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress) load(userptr, "vkGetBufferDeviceAddress");
    glad_vkGetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress) load(userptr, "vkGetBufferOpaqueCaptureAddress");
    glad_vkGetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress) load(userptr, "vkGetDeviceMemoryOpaqueCaptureAddress");
    glad_vkGetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue) load(userptr, "vkGetSemaphoreCounterValue");
    glad_vkResetQueryPool = (PFN_vkResetQueryPool) load(userptr, "vkResetQueryPool");
    glad_vkSignalSemaphore = (PFN_vkSignalSemaphore) load(userptr, "vkSignalSemaphore");
    glad_vkWaitSemaphores = (PFN_vkWaitSemaphores) load(userptr, "vkWaitSemaphores");
}
static void glad_vk_load_VK_AMD_draw_indirect_count( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_draw_indirect_count) return;
    glad_vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD) load(userptr, "vkCmdDrawIndexedIndirectCountAMD");
    glad_vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD) load(userptr, "vkCmdDrawIndirectCountAMD");
}
static void glad_vk_load_VK_EXT_buffer_device_address( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_buffer_device_address) return;
    glad_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT) load(userptr, "vkGetBufferDeviceAddressEXT");
}
static void glad_vk_load_VK_EXT_host_query_reset( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_host_query_reset) return;
    glad_vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT) load(userptr, "vkResetQueryPoolEXT");
}
static void glad_vk_load_VK_KHR_bind_memory2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_bind_memory2) return;
    glad_vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR) load(userptr, "vkBindBufferMemory2KHR");
    glad_vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR) load(userptr, "vkBindImageMemory2KHR");
}
static void glad_vk_load_VK_KHR_buffer_device_address( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_buffer_device_address) return;
    glad_vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR) load(userptr, "vkGetBufferDeviceAddressKHR");
    glad_vkGetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR) load(userptr, "vkGetBufferOpaqueCaptureAddressKHR");
    glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR) load(userptr, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
}
static void glad_vk_load_VK_KHR_create_renderpass2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_create_renderpass2) return;
    glad_vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR) load(userptr, "vkCmdBeginRenderPass2KHR");
    glad_vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR) load(userptr, "vkCmdEndRenderPass2KHR");
    glad_vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR) load(userptr, "vkCmdNextSubpass2KHR");
    glad_vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR) load(userptr, "vkCreateRenderPass2KHR");
}
static void glad_vk_load_VK_KHR_descriptor_update_template( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_descriptor_update_template) return;
    glad_vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR) load(userptr, "vkCmdPushDescriptorSetWithTemplateKHR");
    glad_vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR) load(userptr, "vkCreateDescriptorUpdateTemplateKHR");
    glad_vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR) load(userptr, "vkDestroyDescriptorUpdateTemplateKHR");
    glad_vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR) load(userptr, "vkUpdateDescriptorSetWithTemplateKHR");
}
static void glad_vk_load_VK_KHR_device_group( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_device_group) return;
    glad_vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR) load(userptr, "vkAcquireNextImage2KHR");
    glad_vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR) load(userptr, "vkCmdDispatchBaseKHR");
    glad_vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR) load(userptr, "vkCmdSetDeviceMaskKHR");
    glad_vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR) load(userptr, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
    glad_vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR) load(userptr, "vkGetDeviceGroupPresentCapabilitiesKHR");
    glad_vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR) load(userptr, "vkGetDeviceGroupSurfacePresentModesKHR");
    glad_vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR) load(userptr, "vkGetPhysicalDevicePresentRectanglesKHR");
}
static void glad_vk_load_VK_KHR_device_group_creation( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_device_group_creation) return;
    glad_vkEnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR) load(userptr, "vkEnumeratePhysicalDeviceGroupsKHR");
}
static void glad_vk_load_VK_KHR_draw_indirect_count( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_draw_indirect_count) return;
    glad_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR) load(userptr, "vkCmdDrawIndexedIndirectCountKHR");
    glad_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR) load(userptr, "vkCmdDrawIndirectCountKHR");
}
static void glad_vk_load_VK_KHR_external_fence_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_fence_capabilities) return;
    glad_vkGetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
}
static void glad_vk_load_VK_KHR_external_memory_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_memory_capabilities) return;
    glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
}
static void glad_vk_load_VK_KHR_external_semaphore_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_semaphore_capabilities) return;
    glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
}
static void glad_vk_load_VK_KHR_get_memory_requirements2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_memory_requirements2) return;
    glad_vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR) load(userptr, "vkGetBufferMemoryRequirements2KHR");
    glad_vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR) load(userptr, "vkGetImageMemoryRequirements2KHR");
    glad_vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR) load(userptr, "vkGetImageSparseMemoryRequirements2KHR");
}
static void glad_vk_load_VK_KHR_get_physical_device_properties2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_physical_device_properties2) return;
    glad_vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR) load(userptr, "vkGetPhysicalDeviceFeatures2KHR");
    glad_vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceFormatProperties2KHR");
    glad_vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceImageFormatProperties2KHR");
    glad_vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR) load(userptr, "vkGetPhysicalDeviceMemoryProperties2KHR");
    glad_vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR) load(userptr, "vkGetPhysicalDeviceProperties2KHR");
    glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
    glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
}
static void glad_vk_load_VK_KHR_maintenance1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_maintenance1) return;
    glad_vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR) load(userptr, "vkTrimCommandPoolKHR");
}
static void glad_vk_load_VK_KHR_maintenance3( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_maintenance3) return;
    glad_vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR) load(userptr, "vkGetDescriptorSetLayoutSupportKHR");
}
static void glad_vk_load_VK_KHR_sampler_ycbcr_conversion( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_sampler_ycbcr_conversion) return;
    glad_vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR) load(userptr, "vkCreateSamplerYcbcrConversionKHR");
    glad_vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR) load(userptr, "vkDestroySamplerYcbcrConversionKHR");
}
static void glad_vk_load_VK_KHR_timeline_semaphore( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_timeline_semaphore) return;
    glad_vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR) load(userptr, "vkGetSemaphoreCounterValueKHR");
    glad_vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR) load(userptr, "vkSignalSemaphoreKHR");
    glad_vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR) load(userptr, "vkWaitSemaphoresKHR");
}


static void glad_vk_resolve_aliases(void) {
    if (glad_vkBindBufferMemory2 == NULL && glad_vkBindBufferMemory2KHR != NULL) glad_vkBindBufferMemory2 = (PFN_vkBindBufferMemory2)glad_vkBindBufferMemory2KHR;
    if (glad_vkBindBufferMemory2KHR == NULL && glad_vkBindBufferMemory2 != NULL) glad_vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)glad_vkBindBufferMemory2;
    if (glad_vkBindImageMemory2 == NULL && glad_vkBindImageMemory2KHR != NULL) glad_vkBindImageMemory2 = (PFN_vkBindImageMemory2)glad_vkBindImageMemory2KHR;
    if (glad_vkBindImageMemory2KHR == NULL && glad_vkBindImageMemory2 != NULL) glad_vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)glad_vkBindImageMemory2;
    if (glad_vkCmdBeginRenderPass2 == NULL && glad_vkCmdBeginRenderPass2KHR != NULL) glad_vkCmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)glad_vkCmdBeginRenderPass2KHR;
    if (glad_vkCmdBeginRenderPass2KHR == NULL && glad_vkCmdBeginRenderPass2 != NULL) glad_vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)glad_vkCmdBeginRenderPass2;
    if (glad_vkCmdDispatchBase == NULL && glad_vkCmdDispatchBaseKHR != NULL) glad_vkCmdDispatchBase = (PFN_vkCmdDispatchBase)glad_vkCmdDispatchBaseKHR;
    if (glad_vkCmdDispatchBaseKHR == NULL && glad_vkCmdDispatchBase != NULL) glad_vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)glad_vkCmdDispatchBase;
    if (glad_vkCmdDrawIndexedIndirectCount == NULL && glad_vkCmdDrawIndexedIndirectCountAMD != NULL) glad_vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)glad_vkCmdDrawIndexedIndirectCountAMD;
    if (glad_vkCmdDrawIndexedIndirectCount == NULL && glad_vkCmdDrawIndexedIndirectCountKHR != NULL) glad_vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)glad_vkCmdDrawIndexedIndirectCountKHR;
    if (glad_vkCmdDrawIndexedIndirectCountAMD == NULL && glad_vkCmdDrawIndexedIndirectCount != NULL) glad_vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)glad_vkCmdDrawIndexedIndirectCount;
    if (glad_vkCmdDrawIndexedIndirectCountAMD == NULL && glad_vkCmdDrawIndexedIndirectCountKHR != NULL) glad_vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)glad_vkCmdDrawIndexedIndirectCountKHR;
    if (glad_vkCmdDrawIndexedIndirectCountKHR == NULL && glad_vkCmdDrawIndexedIndirectCount != NULL) glad_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)glad_vkCmdDrawIndexedIndirectCount;
    if (glad_vkCmdDrawIndexedIndirectCountKHR == NULL && glad_vkCmdDrawIndexedIndirectCountAMD != NULL) glad_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)glad_vkCmdDrawIndexedIndirectCountAMD;
    if (glad_vkCmdDrawIndirectCount == NULL && glad_vkCmdDrawIndirectCountAMD != NULL) glad_vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)glad_vkCmdDrawIndirectCountAMD;
    if (glad_vkCmdDrawIndirectCount == NULL && glad_vkCmdDrawIndirectCountKHR != NULL) glad_vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)glad_vkCmdDrawIndirectCountKHR;
    if (glad_vkCmdDrawIndirectCountAMD == NULL && glad_vkCmdDrawIndirectCount != NULL) glad_vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)glad_vkCmdDrawIndirectCount;
    if (glad_vkCmdDrawIndirectCountAMD == NULL && glad_vkCmdDrawIndirectCountKHR != NULL) glad_vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)glad_vkCmdDrawIndirectCountKHR;
    if (glad_vkCmdDrawIndirectCountKHR == NULL && glad_vkCmdDrawIndirectCount != NULL) glad_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)glad_vkCmdDrawIndirectCount;
    if (glad_vkCmdDrawIndirectCountKHR == NULL && glad_vkCmdDrawIndirectCountAMD != NULL) glad_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)glad_vkCmdDrawIndirectCountAMD;
    if (glad_vkCmdEndRenderPass2 == NULL && glad_vkCmdEndRenderPass2KHR != NULL) glad_vkCmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)glad_vkCmdEndRenderPass2KHR;
    if (glad_vkCmdEndRenderPass2KHR == NULL && glad_vkCmdEndRenderPass2 != NULL) glad_vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)glad_vkCmdEndRenderPass2;
    if (glad_vkCmdNextSubpass2 == NULL && glad_vkCmdNextSubpass2KHR != NULL) glad_vkCmdNextSubpass2 = (PFN_vkCmdNextSubpass2)glad_vkCmdNextSubpass2KHR;
    if (glad_vkCmdNextSubpass2KHR == NULL && glad_vkCmdNextSubpass2 != NULL) glad_vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)glad_vkCmdNextSubpass2;
    if (glad_vkCmdSetDeviceMask == NULL && glad_vkCmdSetDeviceMaskKHR != NULL) glad_vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)glad_vkCmdSetDeviceMaskKHR;
    if (glad_vkCmdSetDeviceMaskKHR == NULL && glad_vkCmdSetDeviceMask != NULL) glad_vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)glad_vkCmdSetDeviceMask;
    if (glad_vkCreateDescriptorUpdateTemplate == NULL && glad_vkCreateDescriptorUpdateTemplateKHR != NULL) glad_vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)glad_vkCreateDescriptorUpdateTemplateKHR;
    if (glad_vkCreateDescriptorUpdateTemplateKHR == NULL && glad_vkCreateDescriptorUpdateTemplate != NULL) glad_vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR)glad_vkCreateDescriptorUpdateTemplate;
    if (glad_vkCreateRenderPass2 == NULL && glad_vkCreateRenderPass2KHR != NULL) glad_vkCreateRenderPass2 = (PFN_vkCreateRenderPass2)glad_vkCreateRenderPass2KHR;
    if (glad_vkCreateRenderPass2KHR == NULL && glad_vkCreateRenderPass2 != NULL) glad_vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR)glad_vkCreateRenderPass2;
    if (glad_vkCreateSamplerYcbcrConversion == NULL && glad_vkCreateSamplerYcbcrConversionKHR != NULL) glad_vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)glad_vkCreateSamplerYcbcrConversionKHR;
    if (glad_vkCreateSamplerYcbcrConversionKHR == NULL && glad_vkCreateSamplerYcbcrConversion != NULL) glad_vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR)glad_vkCreateSamplerYcbcrConversion;
    if (glad_vkDestroyDescriptorUpdateTemplate == NULL && glad_vkDestroyDescriptorUpdateTemplateKHR != NULL) glad_vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)glad_vkDestroyDescriptorUpdateTemplateKHR;
    if (glad_vkDestroyDescriptorUpdateTemplateKHR == NULL && glad_vkDestroyDescriptorUpdateTemplate != NULL) glad_vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR)glad_vkDestroyDescriptorUpdateTemplate;
    if (glad_vkDestroySamplerYcbcrConversion == NULL && glad_vkDestroySamplerYcbcrConversionKHR != NULL) glad_vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)glad_vkDestroySamplerYcbcrConversionKHR;
    if (glad_vkDestroySamplerYcbcrConversionKHR == NULL && glad_vkDestroySamplerYcbcrConversion != NULL) glad_vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR)glad_vkDestroySamplerYcbcrConversion;
    if (glad_vkEnumeratePhysicalDeviceGroups == NULL && glad_vkEnumeratePhysicalDeviceGroupsKHR != NULL) glad_vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups)glad_vkEnumeratePhysicalDeviceGroupsKHR;
    if (glad_vkEnumeratePhysicalDeviceGroupsKHR == NULL && glad_vkEnumeratePhysicalDeviceGroups != NULL) glad_vkEnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR)glad_vkEnumeratePhysicalDeviceGroups;
    if (glad_vkGetBufferDeviceAddress == NULL && glad_vkGetBufferDeviceAddressEXT != NULL) glad_vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)glad_vkGetBufferDeviceAddressEXT;
    if (glad_vkGetBufferDeviceAddress == NULL && glad_vkGetBufferDeviceAddressKHR != NULL) glad_vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)glad_vkGetBufferDeviceAddressKHR;
    if (glad_vkGetBufferDeviceAddressEXT == NULL && glad_vkGetBufferDeviceAddress != NULL) glad_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)glad_vkGetBufferDeviceAddress;
    if (glad_vkGetBufferDeviceAddressEXT == NULL && glad_vkGetBufferDeviceAddressKHR != NULL) glad_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)glad_vkGetBufferDeviceAddressKHR;
    if (glad_vkGetBufferDeviceAddressKHR == NULL && glad_vkGetBufferDeviceAddress != NULL) glad_vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)glad_vkGetBufferDeviceAddress;
    if (glad_vkGetBufferDeviceAddressKHR == NULL && glad_vkGetBufferDeviceAddressEXT != NULL) glad_vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)glad_vkGetBufferDeviceAddressEXT;
    if (glad_vkGetBufferMemoryRequirements2 == NULL && glad_vkGetBufferMemoryRequirements2KHR != NULL) glad_vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)glad_vkGetBufferMemoryRequirements2KHR;
    if (glad_vkGetBufferMemoryRequirements2KHR == NULL && glad_vkGetBufferMemoryRequirements2 != NULL) glad_vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)glad_vkGetBufferMemoryRequirements2;
    if (glad_vkGetBufferOpaqueCaptureAddress == NULL && glad_vkGetBufferOpaqueCaptureAddressKHR != NULL) glad_vkGetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress)glad_vkGetBufferOpaqueCaptureAddressKHR;
    if (glad_vkGetBufferOpaqueCaptureAddressKHR == NULL && glad_vkGetBufferOpaqueCaptureAddress != NULL) glad_vkGetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)glad_vkGetBufferOpaqueCaptureAddress;
    if (glad_vkGetDescriptorSetLayoutSupport == NULL && glad_vkGetDescriptorSetLayoutSupportKHR != NULL) glad_vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)glad_vkGetDescriptorSetLayoutSupportKHR;
    if (glad_vkGetDescriptorSetLayoutSupportKHR == NULL && glad_vkGetDescriptorSetLayoutSupport != NULL) glad_vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)glad_vkGetDescriptorSetLayoutSupport;
    if (glad_vkGetDeviceGroupPeerMemoryFeatures == NULL && glad_vkGetDeviceGroupPeerMemoryFeaturesKHR != NULL) glad_vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)glad_vkGetDeviceGroupPeerMemoryFeaturesKHR;
    if (glad_vkGetDeviceGroupPeerMemoryFeaturesKHR == NULL && glad_vkGetDeviceGroupPeerMemoryFeatures != NULL) glad_vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)glad_vkGetDeviceGroupPeerMemoryFeatures;
    if (glad_vkGetDeviceMemoryOpaqueCaptureAddress == NULL && glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR != NULL) glad_vkGetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR;
    if (glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR == NULL && glad_vkGetDeviceMemoryOpaqueCaptureAddress != NULL) glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)glad_vkGetDeviceMemoryOpaqueCaptureAddress;
    if (glad_vkGetImageMemoryRequirements2 == NULL && glad_vkGetImageMemoryRequirements2KHR != NULL) glad_vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)glad_vkGetImageMemoryRequirements2KHR;
    if (glad_vkGetImageMemoryRequirements2KHR == NULL && glad_vkGetImageMemoryRequirements2 != NULL) glad_vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)glad_vkGetImageMemoryRequirements2;
    if (glad_vkGetImageSparseMemoryRequirements2 == NULL && glad_vkGetImageSparseMemoryRequirements2KHR != NULL) glad_vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)glad_vkGetImageSparseMemoryRequirements2KHR;
    if (glad_vkGetImageSparseMemoryRequirements2KHR == NULL && glad_vkGetImageSparseMemoryRequirements2 != NULL) glad_vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)glad_vkGetImageSparseMemoryRequirements2;
    if (glad_vkGetPhysicalDeviceExternalBufferProperties == NULL && glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR != NULL) glad_vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR;
    if (glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR == NULL && glad_vkGetPhysicalDeviceExternalBufferProperties != NULL) glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)glad_vkGetPhysicalDeviceExternalBufferProperties;
    if (glad_vkGetPhysicalDeviceExternalFenceProperties == NULL && glad_vkGetPhysicalDeviceExternalFencePropertiesKHR != NULL) glad_vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)glad_vkGetPhysicalDeviceExternalFencePropertiesKHR;
    if (glad_vkGetPhysicalDeviceExternalFencePropertiesKHR == NULL && glad_vkGetPhysicalDeviceExternalFenceProperties != NULL) glad_vkGetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)glad_vkGetPhysicalDeviceExternalFenceProperties;
    if (glad_vkGetPhysicalDeviceExternalSemaphoreProperties == NULL && glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR != NULL) glad_vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;
    if (glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR == NULL && glad_vkGetPhysicalDeviceExternalSemaphoreProperties != NULL) glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)glad_vkGetPhysicalDeviceExternalSemaphoreProperties;
    if (glad_vkGetPhysicalDeviceFeatures2 == NULL && glad_vkGetPhysicalDeviceFeatures2KHR != NULL) glad_vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)glad_vkGetPhysicalDeviceFeatures2KHR;
    if (glad_vkGetPhysicalDeviceFeatures2KHR == NULL && glad_vkGetPhysicalDeviceFeatures2 != NULL) glad_vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)glad_vkGetPhysicalDeviceFeatures2;
    if (glad_vkGetPhysicalDeviceFormatProperties2 == NULL && glad_vkGetPhysicalDeviceFormatProperties2KHR != NULL) glad_vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2)glad_vkGetPhysicalDeviceFormatProperties2KHR;
    if (glad_vkGetPhysicalDeviceFormatProperties2KHR == NULL && glad_vkGetPhysicalDeviceFormatProperties2 != NULL) glad_vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)glad_vkGetPhysicalDeviceFormatProperties2;
    if (glad_vkGetPhysicalDeviceImageFormatProperties2 == NULL && glad_vkGetPhysicalDeviceImageFormatProperties2KHR != NULL) glad_vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)glad_vkGetPhysicalDeviceImageFormatProperties2KHR;
    if (glad_vkGetPhysicalDeviceImageFormatProperties2KHR == NULL && glad_vkGetPhysicalDeviceImageFormatProperties2 != NULL) glad_vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)glad_vkGetPhysicalDeviceImageFormatProperties2;
    if (glad_vkGetPhysicalDeviceMemoryProperties2 == NULL && glad_vkGetPhysicalDeviceMemoryProperties2KHR != NULL) glad_vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2)glad_vkGetPhysicalDeviceMemoryProperties2KHR;
    if (glad_vkGetPhysicalDeviceMemoryProperties2KHR == NULL && glad_vkGetPhysicalDeviceMemoryProperties2 != NULL) glad_vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)glad_vkGetPhysicalDeviceMemoryProperties2;
    if (glad_vkGetPhysicalDeviceProperties2 == NULL && glad_vkGetPhysicalDeviceProperties2KHR != NULL) glad_vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)glad_vkGetPhysicalDeviceProperties2KHR;
    if (glad_vkGetPhysicalDeviceProperties2KHR == NULL && glad_vkGetPhysicalDeviceProperties2 != NULL) glad_vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)glad_vkGetPhysicalDeviceProperties2;
    if (glad_vkGetPhysicalDeviceQueueFamilyProperties2 == NULL && glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR != NULL) glad_vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR;
    if (glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR == NULL && glad_vkGetPhysicalDeviceQueueFamilyProperties2 != NULL) glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)glad_vkGetPhysicalDeviceQueueFamilyProperties2;
    if (glad_vkGetPhysicalDeviceSparseImageFormatProperties2 == NULL && glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR != NULL) glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
    if (glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR == NULL && glad_vkGetPhysicalDeviceSparseImageFormatProperties2 != NULL) glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)glad_vkGetPhysicalDeviceSparseImageFormatProperties2;
    if (glad_vkGetSemaphoreCounterValue == NULL && glad_vkGetSemaphoreCounterValueKHR != NULL) glad_vkGetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)glad_vkGetSemaphoreCounterValueKHR;
    if (glad_vkGetSemaphoreCounterValueKHR == NULL && glad_vkGetSemaphoreCounterValue != NULL) glad_vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)glad_vkGetSemaphoreCounterValue;
    if (glad_vkResetQueryPool == NULL && glad_vkResetQueryPoolEXT != NULL) glad_vkResetQueryPool = (PFN_vkResetQueryPool)glad_vkResetQueryPoolEXT;
    if (glad_vkResetQueryPoolEXT == NULL && glad_vkResetQueryPool != NULL) glad_vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)glad_vkResetQueryPool;
    if (glad_vkSignalSemaphore == NULL && glad_vkSignalSemaphoreKHR != NULL) glad_vkSignalSemaphore = (PFN_vkSignalSemaphore)glad_vkSignalSemaphoreKHR;
    if (glad_vkSignalSemaphoreKHR == NULL && glad_vkSignalSemaphore != NULL) glad_vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)glad_vkSignalSemaphore;
    if (glad_vkTrimCommandPool == NULL && glad_vkTrimCommandPoolKHR != NULL) glad_vkTrimCommandPool = (PFN_vkTrimCommandPool)glad_vkTrimCommandPoolKHR;
    if (glad_vkTrimCommandPoolKHR == NULL && glad_vkTrimCommandPool != NULL) glad_vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)glad_vkTrimCommandPool;
    if (glad_vkUpdateDescriptorSetWithTemplate == NULL && glad_vkUpdateDescriptorSetWithTemplateKHR != NULL) glad_vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)glad_vkUpdateDescriptorSetWithTemplateKHR;
    if (glad_vkUpdateDescriptorSetWithTemplateKHR == NULL && glad_vkUpdateDescriptorSetWithTemplate != NULL) glad_vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR)glad_vkUpdateDescriptorSetWithTemplate;
    if (glad_vkWaitSemaphores == NULL && glad_vkWaitSemaphoresKHR != NULL) glad_vkWaitSemaphores = (PFN_vkWaitSemaphores)glad_vkWaitSemaphoresKHR;
    if (glad_vkWaitSemaphoresKHR == NULL && glad_vkWaitSemaphores != NULL) glad_vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)glad_vkWaitSemaphores;
}

static int glad_vk_get_extensions( VkPhysicalDevice physical_device, uint32_t *out_extension_count, char ***out_extensions) {
    uint32_t i;
    uint32_t instance_extension_count = 0;
    uint32_t device_extension_count = 0;
    uint32_t max_extension_count = 0;
    uint32_t total_extension_count = 0;
    char **extensions = NULL;
    VkExtensionProperties *ext_properties = NULL;
    VkResult result;

    if (glad_vkEnumerateInstanceExtensionProperties == NULL || (physical_device != NULL && glad_vkEnumerateDeviceExtensionProperties == NULL)) {
        return 0;
    }

    result = glad_vkEnumerateInstanceExtensionProperties(NULL, &instance_extension_count, NULL);
    if (result != VK_SUCCESS) {
        return 0;
    }

    if (physical_device != NULL) {
        result = glad_vkEnumerateDeviceExtensionProperties(physical_device, NULL, &device_extension_count, NULL);
        if (result != VK_SUCCESS) {
            return 0;
        }
    }

    total_extension_count = instance_extension_count + device_extension_count;
    if (total_extension_count <= 0) {
        return 0;
    }

    max_extension_count = instance_extension_count > device_extension_count
        ? instance_extension_count : device_extension_count;

    ext_properties = (VkExtensionProperties*) malloc(max_extension_count * sizeof(VkExtensionProperties));
    if (ext_properties == NULL) {
        goto glad_vk_get_extensions_error;
    }

    result = glad_vkEnumerateInstanceExtensionProperties(NULL, &instance_extension_count, ext_properties);
    if (result != VK_SUCCESS) {
        goto glad_vk_get_extensions_error;
    }

    extensions = (char**) calloc(total_extension_count, sizeof(char*));
    if (extensions == NULL) {
        goto glad_vk_get_extensions_error;
    }

    for (i = 0; i < instance_extension_count; ++i) {
        VkExtensionProperties ext = ext_properties[i];

        size_t extension_name_length = strlen(ext.extensionName) + 1;
        extensions[i] = (char*) malloc(extension_name_length * sizeof(char));
        if (extensions[i] == NULL) {
            goto glad_vk_get_extensions_error;
        }
        memcpy(extensions[i], ext.extensionName, extension_name_length * sizeof(char));
    }

    if (physical_device != NULL) {
        result = glad_vkEnumerateDeviceExtensionProperties(physical_device, NULL, &device_extension_count, ext_properties);
        if (result != VK_SUCCESS) {
            goto glad_vk_get_extensions_error;
        }

        for (i = 0; i < device_extension_count; ++i) {
            VkExtensionProperties ext = ext_properties[i];

            size_t extension_name_length = strlen(ext.extensionName) + 1;
            extensions[instance_extension_count + i] = (char*) malloc(extension_name_length * sizeof(char));
            if (extensions[instance_extension_count + i] == NULL) {
                goto glad_vk_get_extensions_error;
            }
            memcpy(extensions[instance_extension_count + i], ext.extensionName, extension_name_length * sizeof(char));
        }
    }

    free((void*) ext_properties);

    *out_extension_count = total_extension_count;
    *out_extensions = extensions;

    return 1;

glad_vk_get_extensions_error:
    free((void*) ext_properties);
    if (extensions != NULL) {
        for (i = 0; i < total_extension_count; ++i) {
            free((void*) extensions[i]);
        }
        free(extensions);
    }
    return 0;
}

static void glad_vk_free_extensions(uint32_t extension_count, char **extensions) {
    uint32_t i;

    for(i = 0; i < extension_count ; ++i) {
        free((void*) (extensions[i]));
    }

    free((void*) extensions);
}

static int glad_vk_has_extension(const char *name, uint32_t extension_count, char **extensions) {
    uint32_t i;

    for (i = 0; i < extension_count; ++i) {
        if(extensions[i] != NULL && strcmp(name, extensions[i]) == 0) {
            return 1;
        }
    }

    return 0;
}

static GLADapiproc glad_vk_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_vk_find_extensions_vulkan( VkPhysicalDevice physical_device) {
    uint32_t extension_count = 0;
    char **extensions = NULL;
    if (!glad_vk_get_extensions(physical_device, &extension_count, &extensions)) return 0;

    GLAD_VK_AMD_draw_indirect_count = glad_vk_has_extension("VK_AMD_draw_indirect_count", extension_count, extensions);
    GLAD_VK_EXT_buffer_device_address = glad_vk_has_extension("VK_EXT_buffer_device_address", extension_count, extensions);
    GLAD_VK_EXT_host_query_reset = glad_vk_has_extension("VK_EXT_host_query_reset", extension_count, extensions);
    GLAD_VK_KHR_bind_memory2 = glad_vk_has_extension("VK_KHR_bind_memory2", extension_count, extensions);
    GLAD_VK_KHR_buffer_device_address = glad_vk_has_extension("VK_KHR_buffer_device_address", extension_count, extensions);
    GLAD_VK_KHR_create_renderpass2 = glad_vk_has_extension("VK_KHR_create_renderpass2", extension_count, extensions);
    GLAD_VK_KHR_descriptor_update_template = glad_vk_has_extension("VK_KHR_descriptor_update_template", extension_count, extensions);
    GLAD_VK_KHR_device_group = glad_vk_has_extension("VK_KHR_device_group", extension_count, extensions);
    GLAD_VK_KHR_device_group_creation = glad_vk_has_extension("VK_KHR_device_group_creation", extension_count, extensions);
    GLAD_VK_KHR_draw_indirect_count = glad_vk_has_extension("VK_KHR_draw_indirect_count", extension_count, extensions);
    GLAD_VK_KHR_external_fence_capabilities = glad_vk_has_extension("VK_KHR_external_fence_capabilities", extension_count, extensions);
    GLAD_VK_KHR_external_memory_capabilities = glad_vk_has_extension("VK_KHR_external_memory_capabilities", extension_count, extensions);
    GLAD_VK_KHR_external_semaphore_capabilities = glad_vk_has_extension("VK_KHR_external_semaphore_capabilities", extension_count, extensions);
    GLAD_VK_KHR_get_memory_requirements2 = glad_vk_has_extension("VK_KHR_get_memory_requirements2", extension_count, extensions);
    GLAD_VK_KHR_get_physical_device_properties2 = glad_vk_has_extension("VK_KHR_get_physical_device_properties2", extension_count, extensions);
    GLAD_VK_KHR_maintenance1 = glad_vk_has_extension("VK_KHR_maintenance1", extension_count, extensions);
    GLAD_VK_KHR_maintenance3 = glad_vk_has_extension("VK_KHR_maintenance3", extension_count, extensions);
    GLAD_VK_KHR_sampler_ycbcr_conversion = glad_vk_has_extension("VK_KHR_sampler_ycbcr_conversion", extension_count, extensions);
    GLAD_VK_KHR_timeline_semaphore = glad_vk_has_extension("VK_KHR_timeline_semaphore", extension_count, extensions);

    GLAD_UNUSED(glad_vk_has_extension);

    glad_vk_free_extensions(extension_count, extensions);

    return 1;
}

static int glad_vk_find_core_vulkan( VkPhysicalDevice physical_device) {
    int major = 1;
    int minor = 0;

#ifdef VK_VERSION_1_1
    if (glad_vkEnumerateInstanceVersion != NULL) {
        uint32_t version;
        VkResult result;

        result = glad_vkEnumerateInstanceVersion(&version);
        if (result == VK_SUCCESS) {
            major = (int) VK_VERSION_MAJOR(version);
            minor = (int) VK_VERSION_MINOR(version);
        }
    }
#endif

    if (physical_device != NULL && glad_vkGetPhysicalDeviceProperties != NULL) {
        VkPhysicalDeviceProperties properties;
        glad_vkGetPhysicalDeviceProperties(physical_device, &properties);

        major = (int) VK_VERSION_MAJOR(properties.apiVersion);
        minor = (int) VK_VERSION_MINOR(properties.apiVersion);
    }

    GLAD_VK_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    GLAD_VK_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
    GLAD_VK_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;

    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadVulkanUserPtr( VkPhysicalDevice physical_device, GLADuserptrloadfunc load, void *userptr) {
    int version;

#ifdef VK_VERSION_1_1
    glad_vkEnumerateInstanceVersion  = (PFN_vkEnumerateInstanceVersion) load(userptr, "vkEnumerateInstanceVersion");
#endif
    version = glad_vk_find_core_vulkan( physical_device);
    if (!version) {
        return 0;
    }

    glad_vk_load_VK_VERSION_1_0(load, userptr);
    glad_vk_load_VK_VERSION_1_1(load, userptr);
    glad_vk_load_VK_VERSION_1_2(load, userptr);

    if (!glad_vk_find_extensions_vulkan( physical_device)) return 0;
    glad_vk_load_VK_AMD_draw_indirect_count(load, userptr);
    glad_vk_load_VK_EXT_buffer_device_address(load, userptr);
    glad_vk_load_VK_EXT_host_query_reset(load, userptr);
    glad_vk_load_VK_KHR_bind_memory2(load, userptr);
    glad_vk_load_VK_KHR_buffer_device_address(load, userptr);
    glad_vk_load_VK_KHR_create_renderpass2(load, userptr);
    glad_vk_load_VK_KHR_descriptor_update_template(load, userptr);
    glad_vk_load_VK_KHR_device_group(load, userptr);
    glad_vk_load_VK_KHR_device_group_creation(load, userptr);
    glad_vk_load_VK_KHR_draw_indirect_count(load, userptr);
    glad_vk_load_VK_KHR_external_fence_capabilities(load, userptr);
    glad_vk_load_VK_KHR_external_memory_capabilities(load, userptr);
    glad_vk_load_VK_KHR_external_semaphore_capabilities(load, userptr);
    glad_vk_load_VK_KHR_get_memory_requirements2(load, userptr);
    glad_vk_load_VK_KHR_get_physical_device_properties2(load, userptr);
    glad_vk_load_VK_KHR_maintenance1(load, userptr);
    glad_vk_load_VK_KHR_maintenance3(load, userptr);
    glad_vk_load_VK_KHR_sampler_ycbcr_conversion(load, userptr);
    glad_vk_load_VK_KHR_timeline_semaphore(load, userptr);

    glad_vk_resolve_aliases();

    return version;
}


int gladLoadVulkan( VkPhysicalDevice physical_device, GLADloadfunc load) {
    return gladLoadVulkanUserPtr( physical_device, glad_vk_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}



 

#ifdef GLAD_VULKAN

#ifndef GLAD_LOADER_LIBRARY_C_
#define GLAD_LOADER_LIBRARY_C_

#include <stddef.h>
#include <stdlib.h>

#if GLAD_PLATFORM_WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif


static void* glad_get_dlopen_handle(const char *lib_names[], int length) {
    void *handle = NULL;
    int i;

    for (i = 0; i < length; ++i) {
#if GLAD_PLATFORM_WIN32
  #if GLAD_PLATFORM_UWP
        size_t buffer_size = (strlen(lib_names[i]) + 1) * sizeof(WCHAR);
        LPWSTR buffer = (LPWSTR) malloc(buffer_size);
        if (buffer != NULL) {
            int ret = MultiByteToWideChar(CP_ACP, 0, lib_names[i], -1, buffer, buffer_size);
            if (ret != 0) {
                handle = (void*) LoadPackagedLibrary(buffer, 0);
            }
            free((void*) buffer);
        }
  #else
        handle = (void*) LoadLibraryA(lib_names[i]);
  #endif
#else
        handle = dlopen(lib_names[i], RTLD_LAZY | RTLD_LOCAL);
#endif
        if (handle != NULL) {
            return handle;
        }
    }

    return NULL;
}

static void glad_close_dlopen_handle(void* handle) {
    if (handle != NULL) {
#if GLAD_PLATFORM_WIN32
        FreeLibrary((HMODULE) handle);
#else
        dlclose(handle);
#endif
    }
}

static GLADapiproc glad_dlsym_handle(void* handle, const char *name) {
    if (handle == NULL) {
        return NULL;
    }

#if GLAD_PLATFORM_WIN32
    return (GLADapiproc) GetProcAddress((HMODULE) handle, name);
#else
    return GLAD_GNUC_EXTENSION (GLADapiproc) dlsym(handle, name);
#endif
}

#endif /* GLAD_LOADER_LIBRARY_C_ */


static const char* DEVICE_FUNCTIONS[] = {
    "vkAcquireNextImage2KHR",
    "vkAllocateCommandBuffers",
    "vkAllocateDescriptorSets",
    "vkAllocateMemory",
    "vkBeginCommandBuffer",
    "vkBindBufferMemory",
    "vkBindBufferMemory2",
    "vkBindBufferMemory2KHR",
    "vkBindImageMemory",
    "vkBindImageMemory2",
    "vkBindImageMemory2KHR",
    "vkCmdBeginQuery",
    "vkCmdBeginRenderPass",
    "vkCmdBeginRenderPass2",
    "vkCmdBeginRenderPass2KHR",
    "vkCmdBindDescriptorSets",
    "vkCmdBindIndexBuffer",
    "vkCmdBindPipeline",
    "vkCmdBindVertexBuffers",
    "vkCmdBlitImage",
    "vkCmdClearAttachments",
    "vkCmdClearColorImage",
    "vkCmdClearDepthStencilImage",
    "vkCmdCopyBuffer",
    "vkCmdCopyBufferToImage",
    "vkCmdCopyImage",
    "vkCmdCopyImageToBuffer",
    "vkCmdCopyQueryPoolResults",
    "vkCmdDispatch",
    "vkCmdDispatchBase",
    "vkCmdDispatchBaseKHR",
    "vkCmdDispatchIndirect",
    "vkCmdDraw",
    "vkCmdDrawIndexed",
    "vkCmdDrawIndexedIndirect",
    "vkCmdDrawIndexedIndirectCount",
    "vkCmdDrawIndexedIndirectCountAMD",
    "vkCmdDrawIndexedIndirectCountKHR",
    "vkCmdDrawIndirect",
    "vkCmdDrawIndirectCount",
    "vkCmdDrawIndirectCountAMD",
    "vkCmdDrawIndirectCountKHR",
    "vkCmdEndQuery",
    "vkCmdEndRenderPass",
    "vkCmdEndRenderPass2",
    "vkCmdEndRenderPass2KHR",
    "vkCmdExecuteCommands",
    "vkCmdFillBuffer",
    "vkCmdNextSubpass",
    "vkCmdNextSubpass2",
    "vkCmdNextSubpass2KHR",
    "vkCmdPipelineBarrier",
    "vkCmdPushConstants",
    "vkCmdPushDescriptorSetWithTemplateKHR",
    "vkCmdResetEvent",
    "vkCmdResetQueryPool",
    "vkCmdResolveImage",
    "vkCmdSetBlendConstants",
    "vkCmdSetDepthBias",
    "vkCmdSetDepthBounds",
    "vkCmdSetDeviceMask",
    "vkCmdSetDeviceMaskKHR",
    "vkCmdSetEvent",
    "vkCmdSetLineWidth",
    "vkCmdSetScissor",
    "vkCmdSetStencilCompareMask",
    "vkCmdSetStencilReference",
    "vkCmdSetStencilWriteMask",
    "vkCmdSetViewport",
    "vkCmdUpdateBuffer",
    "vkCmdWaitEvents",
    "vkCmdWriteTimestamp",
    "vkCreateBuffer",
    "vkCreateBufferView",
    "vkCreateCommandPool",
    "vkCreateComputePipelines",
    "vkCreateDescriptorPool",
    "vkCreateDescriptorSetLayout",
    "vkCreateDescriptorUpdateTemplate",
    "vkCreateDescriptorUpdateTemplateKHR",
    "vkCreateEvent",
    "vkCreateFence",
    "vkCreateFramebuffer",
    "vkCreateGraphicsPipelines",
    "vkCreateImage",
    "vkCreateImageView",
    "vkCreatePipelineCache",
    "vkCreatePipelineLayout",
    "vkCreateQueryPool",
    "vkCreateRenderPass",
    "vkCreateRenderPass2",
    "vkCreateRenderPass2KHR",
    "vkCreateSampler",
    "vkCreateSamplerYcbcrConversion",
    "vkCreateSamplerYcbcrConversionKHR",
    "vkCreateSemaphore",
    "vkCreateShaderModule",
    "vkDestroyBuffer",
    "vkDestroyBufferView",
    "vkDestroyCommandPool",
    "vkDestroyDescriptorPool",
    "vkDestroyDescriptorSetLayout",
    "vkDestroyDescriptorUpdateTemplate",
    "vkDestroyDescriptorUpdateTemplateKHR",
    "vkDestroyDevice",
    "vkDestroyEvent",
    "vkDestroyFence",
    "vkDestroyFramebuffer",
    "vkDestroyImage",
    "vkDestroyImageView",
    "vkDestroyPipeline",
    "vkDestroyPipelineCache",
    "vkDestroyPipelineLayout",
    "vkDestroyQueryPool",
    "vkDestroyRenderPass",
    "vkDestroySampler",
    "vkDestroySamplerYcbcrConversion",
    "vkDestroySamplerYcbcrConversionKHR",
    "vkDestroySemaphore",
    "vkDestroyShaderModule",
    "vkDeviceWaitIdle",
    "vkEndCommandBuffer",
    "vkFlushMappedMemoryRanges",
    "vkFreeCommandBuffers",
    "vkFreeDescriptorSets",
    "vkFreeMemory",
    "vkGetBufferDeviceAddress",
    "vkGetBufferDeviceAddressEXT",
    "vkGetBufferDeviceAddressKHR",
    "vkGetBufferMemoryRequirements",
    "vkGetBufferMemoryRequirements2",
    "vkGetBufferMemoryRequirements2KHR",
    "vkGetBufferOpaqueCaptureAddress",
    "vkGetBufferOpaqueCaptureAddressKHR",
    "vkGetDescriptorSetLayoutSupport",
    "vkGetDescriptorSetLayoutSupportKHR",
    "vkGetDeviceGroupPeerMemoryFeatures",
    "vkGetDeviceGroupPeerMemoryFeaturesKHR",
    "vkGetDeviceGroupPresentCapabilitiesKHR",
    "vkGetDeviceGroupSurfacePresentModesKHR",
    "vkGetDeviceMemoryCommitment",
    "vkGetDeviceMemoryOpaqueCaptureAddress",
    "vkGetDeviceMemoryOpaqueCaptureAddressKHR",
    "vkGetDeviceProcAddr",
    "vkGetDeviceQueue",
    "vkGetDeviceQueue2",
    "vkGetEventStatus",
    "vkGetFenceStatus",
    "vkGetImageMemoryRequirements",
    "vkGetImageMemoryRequirements2",
    "vkGetImageMemoryRequirements2KHR",
    "vkGetImageSparseMemoryRequirements",
    "vkGetImageSparseMemoryRequirements2",
    "vkGetImageSparseMemoryRequirements2KHR",
    "vkGetImageSubresourceLayout",
    "vkGetPipelineCacheData",
    "vkGetQueryPoolResults",
    "vkGetRenderAreaGranularity",
    "vkGetSemaphoreCounterValue",
    "vkGetSemaphoreCounterValueKHR",
    "vkInvalidateMappedMemoryRanges",
    "vkMapMemory",
    "vkMergePipelineCaches",
    "vkQueueBindSparse",
    "vkQueueSubmit",
    "vkQueueWaitIdle",
    "vkResetCommandBuffer",
    "vkResetCommandPool",
    "vkResetDescriptorPool",
    "vkResetEvent",
    "vkResetFences",
    "vkResetQueryPool",
    "vkResetQueryPoolEXT",
    "vkSetEvent",
    "vkSignalSemaphore",
    "vkSignalSemaphoreKHR",
    "vkTrimCommandPool",
    "vkTrimCommandPoolKHR",
    "vkUnmapMemory",
    "vkUpdateDescriptorSetWithTemplate",
    "vkUpdateDescriptorSetWithTemplateKHR",
    "vkUpdateDescriptorSets",
    "vkWaitForFences",
    "vkWaitSemaphores",
    "vkWaitSemaphoresKHR",
};

static int glad_vulkan_is_device_function(const char *name) {
    /* Exists as a workaround for:
     * https://github.com/KhronosGroup/Vulkan-LoaderAndValidationLayers/issues/2323
     *
     * `vkGetDeviceProcAddr` does not return NULL for non-device functions.
     */
    int i;
    int length = sizeof(DEVICE_FUNCTIONS) / sizeof(DEVICE_FUNCTIONS[0]);

    for (i=0; i < length; ++i) {
        if (strcmp(DEVICE_FUNCTIONS[i], name) == 0) {
            return 1;
        }
    }

    return 0;
}

struct _glad_vulkan_userptr {
    void *vk_handle;
    VkInstance vk_instance;
    VkDevice vk_device;
    PFN_vkGetInstanceProcAddr get_instance_proc_addr;
    PFN_vkGetDeviceProcAddr get_device_proc_addr;
};

static GLADapiproc glad_vulkan_get_proc(void *vuserptr, const char *name) {
    struct _glad_vulkan_userptr userptr = *(struct _glad_vulkan_userptr*) vuserptr;
    PFN_vkVoidFunction result = NULL;

    if (userptr.vk_device != NULL && glad_vulkan_is_device_function(name)) {
        result = userptr.get_device_proc_addr(userptr.vk_device, name);
    }

    if (result == NULL && userptr.vk_instance != NULL) {
        result = userptr.get_instance_proc_addr(userptr.vk_instance, name);
    }

    if(result == NULL) {
        result = (PFN_vkVoidFunction) glad_dlsym_handle(userptr.vk_handle, name);
    }

    return (GLADapiproc) result;
}


static void* _glad_Vulkan_loader_handle = NULL;

static void* glad_vulkan_dlopen_handle(void) {
    static const char *NAMES[] = {
#if GLAD_PLATFORM_APPLE
        "libvulkan.1.dylib",
#elif GLAD_PLATFORM_WIN32
        "vulkan-1.dll",
        "vulkan.dll",
#else
        "libvulkan.so.1",
        "libvulkan.so",
#endif
    };

    if (_glad_Vulkan_loader_handle == NULL) {
        _glad_Vulkan_loader_handle = glad_get_dlopen_handle(NAMES, sizeof(NAMES) / sizeof(NAMES[0]));
    }

    return _glad_Vulkan_loader_handle;
}

static struct _glad_vulkan_userptr glad_vulkan_build_userptr(void *handle, VkInstance instance, VkDevice device) {
    struct _glad_vulkan_userptr userptr;
    userptr.vk_handle = handle;
    userptr.vk_instance = instance;
    userptr.vk_device = device;
    userptr.get_instance_proc_addr = (PFN_vkGetInstanceProcAddr) glad_dlsym_handle(handle, "vkGetInstanceProcAddr");
    userptr.get_device_proc_addr = (PFN_vkGetDeviceProcAddr) glad_dlsym_handle(handle, "vkGetDeviceProcAddr");
    return userptr;
}

int gladLoaderLoadVulkan( VkInstance instance, VkPhysicalDevice physical_device, VkDevice device) {
    int version = 0;
    void *handle = NULL;
    int did_load = 0;
    struct _glad_vulkan_userptr userptr;

    did_load = _glad_Vulkan_loader_handle == NULL;
    handle = glad_vulkan_dlopen_handle();
    if (handle != NULL) {
        userptr = glad_vulkan_build_userptr(handle, instance, device);

        if (userptr.get_instance_proc_addr != NULL && userptr.get_device_proc_addr != NULL) {
            version = gladLoadVulkanUserPtr( physical_device, glad_vulkan_get_proc, &userptr);
        }

        if (!version && did_load) {
            gladLoaderUnloadVulkan();
        }
    }

    return version;
}



void gladLoaderUnloadVulkan(void) {
    if (_glad_Vulkan_loader_handle != NULL) {
        glad_close_dlopen_handle(_glad_Vulkan_loader_handle);
        _glad_Vulkan_loader_handle = NULL;
    }
}

#endif /* GLAD_VULKAN */

#ifdef __cplusplus
}
#endif
