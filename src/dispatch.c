#include "../include/dispatch.h"
#include <string.h>

void* get_key(void* inst) {
    return *(void**)inst;
}

void vk_load_instance_commands(VkInstance instance,
                               PFN_vkGetInstanceProcAddr gpa,
                               instance_dispatch_table_t* table) {
    memset(table, 0, sizeof(*table));
    table->GetInstanceProcAddr = gpa;
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    table->AcquireXlibDisplayEXT =
        (PFN_vkAcquireXlibDisplayEXT)gpa(instance, "vkAcquireXlibDisplayEXT");
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    table->CreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR)gpa(
        instance, "vkCreateAndroidSurfaceKHR");
#endif
    table->CreateDebugReportCallbackEXT =
        (PFN_vkCreateDebugReportCallbackEXT)gpa(
            instance, "vkCreateDebugReportCallbackEXT");
    table->CreateDebugUtilsMessengerEXT =
        (PFN_vkCreateDebugUtilsMessengerEXT)gpa(
            instance, "vkCreateDebugUtilsMessengerEXT");
    table->CreateDevice = (PFN_vkCreateDevice)gpa(instance, "vkCreateDevice");
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    table->CreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT)gpa(
        instance, "vkCreateDirectFBSurfaceEXT");
#endif
    table->CreateDisplayModeKHR =
        (PFN_vkCreateDisplayModeKHR)gpa(instance, "vkCreateDisplayModeKHR");
    table->CreateDisplayPlaneSurfaceKHR =
        (PFN_vkCreateDisplayPlaneSurfaceKHR)gpa(
            instance, "vkCreateDisplayPlaneSurfaceKHR");
    table->CreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT)gpa(
        instance, "vkCreateHeadlessSurfaceEXT");
#ifdef VK_USE_PLATFORM_IOS_MVK
    table->CreateIOSSurfaceMVK =
        (PFN_vkCreateIOSSurfaceMVK)gpa(instance, "vkCreateIOSSurfaceMVK");
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
    table->CreateImagePipeSurfaceFUCHSIA =
        (PFN_vkCreateImagePipeSurfaceFUCHSIA)gpa(
            instance, "vkCreateImagePipeSurfaceFUCHSIA");
#endif
    table->CreateInstance =
        (PFN_vkCreateInstance)gpa(instance, "vkCreateInstance");
#ifdef VK_USE_PLATFORM_MACOS_MVK
    table->CreateMacOSSurfaceMVK =
        (PFN_vkCreateMacOSSurfaceMVK)gpa(instance, "vkCreateMacOSSurfaceMVK");
#endif
#ifdef VK_USE_PLATFORM_METAL_EXT
    table->CreateMetalSurfaceEXT =
        (PFN_vkCreateMetalSurfaceEXT)gpa(instance, "vkCreateMetalSurfaceEXT");
#endif
#ifdef VK_USE_PLATFORM_GGP
    table->CreateStreamDescriptorSurfaceGGP =
        (PFN_vkCreateStreamDescriptorSurfaceGGP)gpa(
            instance, "vkCreateStreamDescriptorSurfaceGGP");
#endif
#ifdef VK_USE_PLATFORM_VI_NN
    table->CreateViSurfaceNN =
        (PFN_vkCreateViSurfaceNN)gpa(instance, "vkCreateViSurfaceNN");
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    table->CreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR)gpa(
        instance, "vkCreateWaylandSurfaceKHR");
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->CreateWin32SurfaceKHR =
        (PFN_vkCreateWin32SurfaceKHR)gpa(instance, "vkCreateWin32SurfaceKHR");
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    table->CreateXcbSurfaceKHR =
        (PFN_vkCreateXcbSurfaceKHR)gpa(instance, "vkCreateXcbSurfaceKHR");
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
    table->CreateXlibSurfaceKHR =
        (PFN_vkCreateXlibSurfaceKHR)gpa(instance, "vkCreateXlibSurfaceKHR");
#endif
    table->DebugReportMessageEXT =
        (PFN_vkDebugReportMessageEXT)gpa(instance, "vkDebugReportMessageEXT");
    table->DestroyDebugReportCallbackEXT =
        (PFN_vkDestroyDebugReportCallbackEXT)gpa(
            instance, "vkDestroyDebugReportCallbackEXT");
    table->DestroyDebugUtilsMessengerEXT =
        (PFN_vkDestroyDebugUtilsMessengerEXT)gpa(
            instance, "vkDestroyDebugUtilsMessengerEXT");
    table->DestroyInstance =
        (PFN_vkDestroyInstance)gpa(instance, "vkDestroyInstance");
    table->DestroySurfaceKHR =
        (PFN_vkDestroySurfaceKHR)gpa(instance, "vkDestroySurfaceKHR");
    table->EnumerateDeviceExtensionProperties =
        (PFN_vkEnumerateDeviceExtensionProperties)gpa(
            instance, "vkEnumerateDeviceExtensionProperties");
    table->EnumerateDeviceLayerProperties =
        (PFN_vkEnumerateDeviceLayerProperties)gpa(
            instance, "vkEnumerateDeviceLayerProperties");
    table->EnumerateInstanceExtensionProperties =
        (PFN_vkEnumerateInstanceExtensionProperties)gpa(
            instance, "vkEnumerateInstanceExtensionProperties");
    table->EnumerateInstanceLayerProperties =
        (PFN_vkEnumerateInstanceLayerProperties)gpa(
            instance, "vkEnumerateInstanceLayerProperties");
    table->EnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion)gpa(
        instance, "vkEnumerateInstanceVersion");
    table->EnumeratePhysicalDeviceGroups =
        (PFN_vkEnumeratePhysicalDeviceGroups)gpa(
            instance, "vkEnumeratePhysicalDeviceGroups");
    table->EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR =
        (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)
            gpa(instance,
                "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKH"
                "R");
    table->EnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices)gpa(
        instance, "vkEnumeratePhysicalDevices");
    table->GetDisplayModeProperties2KHR =
        (PFN_vkGetDisplayModeProperties2KHR)gpa(
            instance, "vkGetDisplayModeProperties2KHR");
    table->GetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR)gpa(
        instance, "vkGetDisplayModePropertiesKHR");
    table->GetDisplayPlaneCapabilities2KHR =
        (PFN_vkGetDisplayPlaneCapabilities2KHR)gpa(
            instance, "vkGetDisplayPlaneCapabilities2KHR");
    table->GetDisplayPlaneCapabilitiesKHR =
        (PFN_vkGetDisplayPlaneCapabilitiesKHR)gpa(
            instance, "vkGetDisplayPlaneCapabilitiesKHR");
    table->GetDisplayPlaneSupportedDisplaysKHR =
        (PFN_vkGetDisplayPlaneSupportedDisplaysKHR)gpa(
            instance, "vkGetDisplayPlaneSupportedDisplaysKHR");
    table->GetPhysicalDeviceCalibrateableTimeDomainsEXT =
        (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)gpa(
            instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
    table->GetPhysicalDeviceCooperativeMatrixPropertiesNV =
        (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)gpa(
            instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    table->GetPhysicalDeviceDirectFBPresentationSupportEXT =
        (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT)gpa(
            instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
#endif
    table->GetPhysicalDeviceDisplayPlaneProperties2KHR =
        (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)gpa(
            instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
    table->GetPhysicalDeviceDisplayPlanePropertiesKHR =
        (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)gpa(
            instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
    table->GetPhysicalDeviceDisplayProperties2KHR =
        (PFN_vkGetPhysicalDeviceDisplayProperties2KHR)gpa(
            instance, "vkGetPhysicalDeviceDisplayProperties2KHR");
    table->GetPhysicalDeviceDisplayPropertiesKHR =
        (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)gpa(
            instance, "vkGetPhysicalDeviceDisplayPropertiesKHR");
    table->GetPhysicalDeviceExternalBufferProperties =
        (PFN_vkGetPhysicalDeviceExternalBufferProperties)gpa(
            instance, "vkGetPhysicalDeviceExternalBufferProperties");
    table->GetPhysicalDeviceExternalFenceProperties =
        (PFN_vkGetPhysicalDeviceExternalFenceProperties)gpa(
            instance, "vkGetPhysicalDeviceExternalFenceProperties");
    table->GetPhysicalDeviceExternalImageFormatPropertiesNV =
        (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)gpa(
            instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
    table->GetPhysicalDeviceExternalSemaphoreProperties =
        (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)gpa(
            instance, "vkGetPhysicalDeviceExternalSemaphoreProperties");
    table->GetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)gpa(
        instance, "vkGetPhysicalDeviceFeatures");
    table->GetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)gpa(
        instance, "vkGetPhysicalDeviceFeatures2");
    table->GetPhysicalDeviceFormatProperties =
        (PFN_vkGetPhysicalDeviceFormatProperties)gpa(
            instance, "vkGetPhysicalDeviceFormatProperties");
    table->GetPhysicalDeviceFormatProperties2 =
        (PFN_vkGetPhysicalDeviceFormatProperties2)gpa(
            instance, "vkGetPhysicalDeviceFormatProperties2");
    table->GetPhysicalDeviceFragmentShadingRatesKHR =
        (PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR)gpa(
            instance, "vkGetPhysicalDeviceFragmentShadingRatesKHR");
    table->GetPhysicalDeviceImageFormatProperties =
        (PFN_vkGetPhysicalDeviceImageFormatProperties)gpa(
            instance, "vkGetPhysicalDeviceImageFormatProperties");
    table->GetPhysicalDeviceImageFormatProperties2 =
        (PFN_vkGetPhysicalDeviceImageFormatProperties2)gpa(
            instance, "vkGetPhysicalDeviceImageFormatProperties2");
    table->GetPhysicalDeviceMemoryProperties =
        (PFN_vkGetPhysicalDeviceMemoryProperties)gpa(
            instance, "vkGetPhysicalDeviceMemoryProperties");
    table->GetPhysicalDeviceMemoryProperties2 =
        (PFN_vkGetPhysicalDeviceMemoryProperties2)gpa(
            instance, "vkGetPhysicalDeviceMemoryProperties2");
    table->GetPhysicalDeviceMultisamplePropertiesEXT =
        (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)gpa(
            instance, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
    table->GetPhysicalDevicePresentRectanglesKHR =
        (PFN_vkGetPhysicalDevicePresentRectanglesKHR)gpa(
            instance, "vkGetPhysicalDevicePresentRectanglesKHR");
    table->GetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties)gpa(
        instance, "vkGetPhysicalDeviceProperties");
    table->GetPhysicalDeviceProperties2 =
        (PFN_vkGetPhysicalDeviceProperties2)gpa(
            instance, "vkGetPhysicalDeviceProperties2");
    table->GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR =
        (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)gpa(
            instance,
            "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
    table->GetPhysicalDeviceQueueFamilyProperties =
        (PFN_vkGetPhysicalDeviceQueueFamilyProperties)gpa(
            instance, "vkGetPhysicalDeviceQueueFamilyProperties");
    table->GetPhysicalDeviceQueueFamilyProperties2 =
        (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)gpa(
            instance, "vkGetPhysicalDeviceQueueFamilyProperties2");
    table->GetPhysicalDeviceSparseImageFormatProperties =
        (PFN_vkGetPhysicalDeviceSparseImageFormatProperties)gpa(
            instance, "vkGetPhysicalDeviceSparseImageFormatProperties");
    table->GetPhysicalDeviceSparseImageFormatProperties2 =
        (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)gpa(
            instance, "vkGetPhysicalDeviceSparseImageFormatProperties2");
    table->GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV =
        (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)
            gpa(instance,
                "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombination"
                "sNV");
    table->GetPhysicalDeviceSurfaceCapabilities2EXT =
        (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)gpa(
            instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
    table->GetPhysicalDeviceSurfaceCapabilities2KHR =
        (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)gpa(
            instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
    table->GetPhysicalDeviceSurfaceCapabilitiesKHR =
        (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)gpa(
            instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
    table->GetPhysicalDeviceSurfaceFormats2KHR =
        (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)gpa(
            instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
    table->GetPhysicalDeviceSurfaceFormatsKHR =
        (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)gpa(
            instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->GetPhysicalDeviceSurfacePresentModes2EXT =
        (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)gpa(
            instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
#endif
    table->GetPhysicalDeviceSurfacePresentModesKHR =
        (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)gpa(
            instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
    table->GetPhysicalDeviceSurfaceSupportKHR =
        (PFN_vkGetPhysicalDeviceSurfaceSupportKHR)gpa(
            instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
    table->GetPhysicalDeviceToolPropertiesEXT =
        (PFN_vkGetPhysicalDeviceToolPropertiesEXT)gpa(
            instance, "vkGetPhysicalDeviceToolPropertiesEXT");
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    table->GetPhysicalDeviceWaylandPresentationSupportKHR =
        (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR)gpa(
            instance, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->GetPhysicalDeviceWin32PresentationSupportKHR =
        (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR)gpa(
            instance, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    table->GetPhysicalDeviceXcbPresentationSupportKHR =
        (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR)gpa(
            instance, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
    table->GetPhysicalDeviceXlibPresentationSupportKHR =
        (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR)gpa(
            instance, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    table->GetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT)gpa(
        instance, "vkGetRandROutputDisplayEXT");
#endif
    table->ReleaseDisplayEXT =
        (PFN_vkReleaseDisplayEXT)gpa(instance, "vkReleaseDisplayEXT");
    table->SubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT)gpa(
        instance, "vkSubmitDebugUtilsMessageEXT");
}

void vk_load_device_commands(VkDevice device,
                             PFN_vkGetDeviceProcAddr gpa,
                             struct vk_device_dispatch_table* table) {
    memset(table, 0, sizeof(*table));
    table->GetDeviceProcAddr = gpa;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->AcquireFullScreenExclusiveModeEXT =
        (PFN_vkAcquireFullScreenExclusiveModeEXT)gpa(
            device, "vkAcquireFullScreenExclusiveModeEXT");
#endif
    table->AcquireNextImage2KHR =
        (PFN_vkAcquireNextImage2KHR)gpa(device, "vkAcquireNextImage2KHR");
    table->AcquireNextImageKHR =
        (PFN_vkAcquireNextImageKHR)gpa(device, "vkAcquireNextImageKHR");
    table->AcquirePerformanceConfigurationINTEL =
        (PFN_vkAcquirePerformanceConfigurationINTEL)gpa(
            device, "vkAcquirePerformanceConfigurationINTEL");
    table->AcquireProfilingLockKHR =
        (PFN_vkAcquireProfilingLockKHR)gpa(device, "vkAcquireProfilingLockKHR");
    table->AllocateCommandBuffers =
        (PFN_vkAllocateCommandBuffers)gpa(device, "vkAllocateCommandBuffers");
    table->AllocateDescriptorSets =
        (PFN_vkAllocateDescriptorSets)gpa(device, "vkAllocateDescriptorSets");
    table->AllocateMemory =
        (PFN_vkAllocateMemory)gpa(device, "vkAllocateMemory");
    table->BeginCommandBuffer =
        (PFN_vkBeginCommandBuffer)gpa(device, "vkBeginCommandBuffer");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->BindAccelerationStructureMemoryKHR =
        (PFN_vkBindAccelerationStructureMemoryKHR)gpa(
            device, "vkBindAccelerationStructureMemoryKHR");
#endif
    table->BindBufferMemory =
        (PFN_vkBindBufferMemory)gpa(device, "vkBindBufferMemory");
    table->BindBufferMemory2 =
        (PFN_vkBindBufferMemory2)gpa(device, "vkBindBufferMemory2");
    table->BindImageMemory =
        (PFN_vkBindImageMemory)gpa(device, "vkBindImageMemory");
    table->BindImageMemory2 =
        (PFN_vkBindImageMemory2)gpa(device, "vkBindImageMemory2");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->BuildAccelerationStructureKHR =
        (PFN_vkBuildAccelerationStructureKHR)gpa(
            device, "vkBuildAccelerationStructureKHR");
#endif
    table->CmdBeginConditionalRenderingEXT =
        (PFN_vkCmdBeginConditionalRenderingEXT)gpa(
            device, "vkCmdBeginConditionalRenderingEXT");
    table->CmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)gpa(
        device, "vkCmdBeginDebugUtilsLabelEXT");
    table->CmdBeginQuery = (PFN_vkCmdBeginQuery)gpa(device, "vkCmdBeginQuery");
    table->CmdBeginQueryIndexedEXT =
        (PFN_vkCmdBeginQueryIndexedEXT)gpa(device, "vkCmdBeginQueryIndexedEXT");
    table->CmdBeginRenderPass =
        (PFN_vkCmdBeginRenderPass)gpa(device, "vkCmdBeginRenderPass");
    table->CmdBeginRenderPass2 =
        (PFN_vkCmdBeginRenderPass2)gpa(device, "vkCmdBeginRenderPass2");
    table->CmdBeginTransformFeedbackEXT =
        (PFN_vkCmdBeginTransformFeedbackEXT)gpa(
            device, "vkCmdBeginTransformFeedbackEXT");
    table->CmdBindDescriptorSets =
        (PFN_vkCmdBindDescriptorSets)gpa(device, "vkCmdBindDescriptorSets");
    table->CmdBindIndexBuffer =
        (PFN_vkCmdBindIndexBuffer)gpa(device, "vkCmdBindIndexBuffer");
    table->CmdBindPipeline =
        (PFN_vkCmdBindPipeline)gpa(device, "vkCmdBindPipeline");
    table->CmdBindPipelineShaderGroupNV =
        (PFN_vkCmdBindPipelineShaderGroupNV)gpa(
            device, "vkCmdBindPipelineShaderGroupNV");
    table->CmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)gpa(
        device, "vkCmdBindShadingRateImageNV");
    table->CmdBindTransformFeedbackBuffersEXT =
        (PFN_vkCmdBindTransformFeedbackBuffersEXT)gpa(
            device, "vkCmdBindTransformFeedbackBuffersEXT");
    table->CmdBindVertexBuffers =
        (PFN_vkCmdBindVertexBuffers)gpa(device, "vkCmdBindVertexBuffers");
    table->CmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)gpa(
        device, "vkCmdBindVertexBuffers2EXT");
    table->CmdBlitImage = (PFN_vkCmdBlitImage)gpa(device, "vkCmdBlitImage");
    table->CmdBlitImage2KHR =
        (PFN_vkCmdBlitImage2KHR)gpa(device, "vkCmdBlitImage2KHR");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CmdBuildAccelerationStructureIndirectKHR =
        (PFN_vkCmdBuildAccelerationStructureIndirectKHR)gpa(
            device, "vkCmdBuildAccelerationStructureIndirectKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CmdBuildAccelerationStructureKHR =
        (PFN_vkCmdBuildAccelerationStructureKHR)gpa(
            device, "vkCmdBuildAccelerationStructureKHR");
#endif
    table->CmdBuildAccelerationStructureNV =
        (PFN_vkCmdBuildAccelerationStructureNV)gpa(
            device, "vkCmdBuildAccelerationStructureNV");
    table->CmdClearAttachments =
        (PFN_vkCmdClearAttachments)gpa(device, "vkCmdClearAttachments");
    table->CmdClearColorImage =
        (PFN_vkCmdClearColorImage)gpa(device, "vkCmdClearColorImage");
    table->CmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)gpa(
        device, "vkCmdClearDepthStencilImage");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CmdCopyAccelerationStructureKHR =
        (PFN_vkCmdCopyAccelerationStructureKHR)gpa(
            device, "vkCmdCopyAccelerationStructureKHR");
#endif
    table->CmdCopyAccelerationStructureNV =
        (PFN_vkCmdCopyAccelerationStructureNV)gpa(
            device, "vkCmdCopyAccelerationStructureNV");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CmdCopyAccelerationStructureToMemoryKHR =
        (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)gpa(
            device, "vkCmdCopyAccelerationStructureToMemoryKHR");
#endif
    table->CmdCopyBuffer = (PFN_vkCmdCopyBuffer)gpa(device, "vkCmdCopyBuffer");
    table->CmdCopyBuffer2KHR =
        (PFN_vkCmdCopyBuffer2KHR)gpa(device, "vkCmdCopyBuffer2KHR");
    table->CmdCopyBufferToImage =
        (PFN_vkCmdCopyBufferToImage)gpa(device, "vkCmdCopyBufferToImage");
    table->CmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)gpa(
        device, "vkCmdCopyBufferToImage2KHR");
    table->CmdCopyImage = (PFN_vkCmdCopyImage)gpa(device, "vkCmdCopyImage");
    table->CmdCopyImage2KHR =
        (PFN_vkCmdCopyImage2KHR)gpa(device, "vkCmdCopyImage2KHR");
    table->CmdCopyImageToBuffer =
        (PFN_vkCmdCopyImageToBuffer)gpa(device, "vkCmdCopyImageToBuffer");
    table->CmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)gpa(
        device, "vkCmdCopyImageToBuffer2KHR");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CmdCopyMemoryToAccelerationStructureKHR =
        (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)gpa(
            device, "vkCmdCopyMemoryToAccelerationStructureKHR");
#endif
    table->CmdCopyQueryPoolResults =
        (PFN_vkCmdCopyQueryPoolResults)gpa(device, "vkCmdCopyQueryPoolResults");
    table->CmdDebugMarkerBeginEXT =
        (PFN_vkCmdDebugMarkerBeginEXT)gpa(device, "vkCmdDebugMarkerBeginEXT");
    table->CmdDebugMarkerEndEXT =
        (PFN_vkCmdDebugMarkerEndEXT)gpa(device, "vkCmdDebugMarkerEndEXT");
    table->CmdDebugMarkerInsertEXT =
        (PFN_vkCmdDebugMarkerInsertEXT)gpa(device, "vkCmdDebugMarkerInsertEXT");
    table->CmdDispatch = (PFN_vkCmdDispatch)gpa(device, "vkCmdDispatch");
    table->CmdDispatchBase =
        (PFN_vkCmdDispatchBase)gpa(device, "vkCmdDispatchBase");
    table->CmdDispatchIndirect =
        (PFN_vkCmdDispatchIndirect)gpa(device, "vkCmdDispatchIndirect");
    table->CmdDraw = (PFN_vkCmdDraw)gpa(device, "vkCmdDraw");
    table->CmdDrawIndexed =
        (PFN_vkCmdDrawIndexed)gpa(device, "vkCmdDrawIndexed");
    table->CmdDrawIndexedIndirect =
        (PFN_vkCmdDrawIndexedIndirect)gpa(device, "vkCmdDrawIndexedIndirect");
    table->CmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)gpa(
        device, "vkCmdDrawIndexedIndirectCount");
    table->CmdDrawIndirect =
        (PFN_vkCmdDrawIndirect)gpa(device, "vkCmdDrawIndirect");
    table->CmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)gpa(
        device, "vkCmdDrawIndirectByteCountEXT");
    table->CmdDrawIndirectCount =
        (PFN_vkCmdDrawIndirectCount)gpa(device, "vkCmdDrawIndirectCount");
    table->CmdDrawMeshTasksIndirectCountNV =
        (PFN_vkCmdDrawMeshTasksIndirectCountNV)gpa(
            device, "vkCmdDrawMeshTasksIndirectCountNV");
    table->CmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)gpa(
        device, "vkCmdDrawMeshTasksIndirectNV");
    table->CmdDrawMeshTasksNV =
        (PFN_vkCmdDrawMeshTasksNV)gpa(device, "vkCmdDrawMeshTasksNV");
    table->CmdEndConditionalRenderingEXT =
        (PFN_vkCmdEndConditionalRenderingEXT)gpa(
            device, "vkCmdEndConditionalRenderingEXT");
    table->CmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)gpa(
        device, "vkCmdEndDebugUtilsLabelEXT");
    table->CmdEndQuery = (PFN_vkCmdEndQuery)gpa(device, "vkCmdEndQuery");
    table->CmdEndQueryIndexedEXT =
        (PFN_vkCmdEndQueryIndexedEXT)gpa(device, "vkCmdEndQueryIndexedEXT");
    table->CmdEndRenderPass =
        (PFN_vkCmdEndRenderPass)gpa(device, "vkCmdEndRenderPass");
    table->CmdEndRenderPass2 =
        (PFN_vkCmdEndRenderPass2)gpa(device, "vkCmdEndRenderPass2");
    table->CmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)gpa(
        device, "vkCmdEndTransformFeedbackEXT");
    table->CmdExecuteCommands =
        (PFN_vkCmdExecuteCommands)gpa(device, "vkCmdExecuteCommands");
    table->CmdExecuteGeneratedCommandsNV =
        (PFN_vkCmdExecuteGeneratedCommandsNV)gpa(
            device, "vkCmdExecuteGeneratedCommandsNV");
    table->CmdFillBuffer = (PFN_vkCmdFillBuffer)gpa(device, "vkCmdFillBuffer");
    table->CmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT)gpa(
        device, "vkCmdInsertDebugUtilsLabelEXT");
    table->CmdNextSubpass =
        (PFN_vkCmdNextSubpass)gpa(device, "vkCmdNextSubpass");
    table->CmdNextSubpass2 =
        (PFN_vkCmdNextSubpass2)gpa(device, "vkCmdNextSubpass2");
    table->CmdPipelineBarrier =
        (PFN_vkCmdPipelineBarrier)gpa(device, "vkCmdPipelineBarrier");
    table->CmdPreprocessGeneratedCommandsNV =
        (PFN_vkCmdPreprocessGeneratedCommandsNV)gpa(
            device, "vkCmdPreprocessGeneratedCommandsNV");
    table->CmdPushConstants =
        (PFN_vkCmdPushConstants)gpa(device, "vkCmdPushConstants");
    table->CmdPushDescriptorSetKHR =
        (PFN_vkCmdPushDescriptorSetKHR)gpa(device, "vkCmdPushDescriptorSetKHR");
    table->CmdPushDescriptorSetWithTemplateKHR =
        (PFN_vkCmdPushDescriptorSetWithTemplateKHR)gpa(
            device, "vkCmdPushDescriptorSetWithTemplateKHR");
    table->CmdResetEvent = (PFN_vkCmdResetEvent)gpa(device, "vkCmdResetEvent");
    table->CmdResetQueryPool =
        (PFN_vkCmdResetQueryPool)gpa(device, "vkCmdResetQueryPool");
    table->CmdResolveImage =
        (PFN_vkCmdResolveImage)gpa(device, "vkCmdResolveImage");
    table->CmdResolveImage2KHR =
        (PFN_vkCmdResolveImage2KHR)gpa(device, "vkCmdResolveImage2KHR");
    table->CmdSetBlendConstants =
        (PFN_vkCmdSetBlendConstants)gpa(device, "vkCmdSetBlendConstants");
    table->CmdSetCheckpointNV =
        (PFN_vkCmdSetCheckpointNV)gpa(device, "vkCmdSetCheckpointNV");
    table->CmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)gpa(
        device, "vkCmdSetCoarseSampleOrderNV");
    table->CmdSetCullModeEXT =
        (PFN_vkCmdSetCullModeEXT)gpa(device, "vkCmdSetCullModeEXT");
    table->CmdSetDepthBias =
        (PFN_vkCmdSetDepthBias)gpa(device, "vkCmdSetDepthBias");
    table->CmdSetDepthBounds =
        (PFN_vkCmdSetDepthBounds)gpa(device, "vkCmdSetDepthBounds");
    table->CmdSetDepthBoundsTestEnableEXT =
        (PFN_vkCmdSetDepthBoundsTestEnableEXT)gpa(
            device, "vkCmdSetDepthBoundsTestEnableEXT");
    table->CmdSetDepthCompareOpEXT =
        (PFN_vkCmdSetDepthCompareOpEXT)gpa(device, "vkCmdSetDepthCompareOpEXT");
    table->CmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)gpa(
        device, "vkCmdSetDepthTestEnableEXT");
    table->CmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)gpa(
        device, "vkCmdSetDepthWriteEnableEXT");
    table->CmdSetDeviceMask =
        (PFN_vkCmdSetDeviceMask)gpa(device, "vkCmdSetDeviceMask");
    table->CmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)gpa(
        device, "vkCmdSetDiscardRectangleEXT");
    table->CmdSetEvent = (PFN_vkCmdSetEvent)gpa(device, "vkCmdSetEvent");
    table->CmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)gpa(
        device, "vkCmdSetExclusiveScissorNV");
    table->CmdSetFragmentShadingRateKHR =
        (PFN_vkCmdSetFragmentShadingRateKHR)gpa(
            device, "vkCmdSetFragmentShadingRateKHR");
    table->CmdSetFrontFaceEXT =
        (PFN_vkCmdSetFrontFaceEXT)gpa(device, "vkCmdSetFrontFaceEXT");
    table->CmdSetLineStippleEXT =
        (PFN_vkCmdSetLineStippleEXT)gpa(device, "vkCmdSetLineStippleEXT");
    table->CmdSetLineWidth =
        (PFN_vkCmdSetLineWidth)gpa(device, "vkCmdSetLineWidth");
    table->CmdSetPerformanceMarkerINTEL =
        (PFN_vkCmdSetPerformanceMarkerINTEL)gpa(
            device, "vkCmdSetPerformanceMarkerINTEL");
    table->CmdSetPerformanceOverrideINTEL =
        (PFN_vkCmdSetPerformanceOverrideINTEL)gpa(
            device, "vkCmdSetPerformanceOverrideINTEL");
    table->CmdSetPerformanceStreamMarkerINTEL =
        (PFN_vkCmdSetPerformanceStreamMarkerINTEL)gpa(
            device, "vkCmdSetPerformanceStreamMarkerINTEL");
    table->CmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)gpa(
        device, "vkCmdSetPrimitiveTopologyEXT");
    table->CmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)gpa(
        device, "vkCmdSetSampleLocationsEXT");
    table->CmdSetScissor = (PFN_vkCmdSetScissor)gpa(device, "vkCmdSetScissor");
    table->CmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)gpa(
        device, "vkCmdSetScissorWithCountEXT");
    table->CmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)gpa(
        device, "vkCmdSetStencilCompareMask");
    table->CmdSetStencilOpEXT =
        (PFN_vkCmdSetStencilOpEXT)gpa(device, "vkCmdSetStencilOpEXT");
    table->CmdSetStencilReference =
        (PFN_vkCmdSetStencilReference)gpa(device, "vkCmdSetStencilReference");
    table->CmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)gpa(
        device, "vkCmdSetStencilTestEnableEXT");
    table->CmdSetStencilWriteMask =
        (PFN_vkCmdSetStencilWriteMask)gpa(device, "vkCmdSetStencilWriteMask");
    table->CmdSetViewport =
        (PFN_vkCmdSetViewport)gpa(device, "vkCmdSetViewport");
    table->CmdSetViewportShadingRatePaletteNV =
        (PFN_vkCmdSetViewportShadingRatePaletteNV)gpa(
            device, "vkCmdSetViewportShadingRatePaletteNV");
    table->CmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)gpa(
        device, "vkCmdSetViewportWScalingNV");
    table->CmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)gpa(
        device, "vkCmdSetViewportWithCountEXT");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CmdTraceRaysIndirectKHR =
        (PFN_vkCmdTraceRaysIndirectKHR)gpa(device, "vkCmdTraceRaysIndirectKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CmdTraceRaysKHR =
        (PFN_vkCmdTraceRaysKHR)gpa(device, "vkCmdTraceRaysKHR");
#endif
    table->CmdTraceRaysNV =
        (PFN_vkCmdTraceRaysNV)gpa(device, "vkCmdTraceRaysNV");
    table->CmdUpdateBuffer =
        (PFN_vkCmdUpdateBuffer)gpa(device, "vkCmdUpdateBuffer");
    table->CmdWaitEvents = (PFN_vkCmdWaitEvents)gpa(device, "vkCmdWaitEvents");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CmdWriteAccelerationStructuresPropertiesKHR =
        (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)gpa(
            device, "vkCmdWriteAccelerationStructuresPropertiesKHR");
#endif
    table->CmdWriteBufferMarkerAMD =
        (PFN_vkCmdWriteBufferMarkerAMD)gpa(device, "vkCmdWriteBufferMarkerAMD");
    table->CmdWriteTimestamp =
        (PFN_vkCmdWriteTimestamp)gpa(device, "vkCmdWriteTimestamp");
    table->CompileDeferredNV =
        (PFN_vkCompileDeferredNV)gpa(device, "vkCompileDeferredNV");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CopyAccelerationStructureKHR =
        (PFN_vkCopyAccelerationStructureKHR)gpa(
            device, "vkCopyAccelerationStructureKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CopyAccelerationStructureToMemoryKHR =
        (PFN_vkCopyAccelerationStructureToMemoryKHR)gpa(
            device, "vkCopyAccelerationStructureToMemoryKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CopyMemoryToAccelerationStructureKHR =
        (PFN_vkCopyMemoryToAccelerationStructureKHR)gpa(
            device, "vkCopyMemoryToAccelerationStructureKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CreateAccelerationStructureKHR =
        (PFN_vkCreateAccelerationStructureKHR)gpa(
            device, "vkCreateAccelerationStructureKHR");
#endif
    table->CreateAccelerationStructureNV =
        (PFN_vkCreateAccelerationStructureNV)gpa(
            device, "vkCreateAccelerationStructureNV");
    table->CreateBuffer = (PFN_vkCreateBuffer)gpa(device, "vkCreateBuffer");
    table->CreateBufferView =
        (PFN_vkCreateBufferView)gpa(device, "vkCreateBufferView");
    table->CreateCommandPool =
        (PFN_vkCreateCommandPool)gpa(device, "vkCreateCommandPool");
    table->CreateComputePipelines =
        (PFN_vkCreateComputePipelines)gpa(device, "vkCreateComputePipelines");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR)gpa(
        device, "vkCreateDeferredOperationKHR");
#endif
    table->CreateDescriptorPool =
        (PFN_vkCreateDescriptorPool)gpa(device, "vkCreateDescriptorPool");
    table->CreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)gpa(
        device, "vkCreateDescriptorSetLayout");
    table->CreateDescriptorUpdateTemplate =
        (PFN_vkCreateDescriptorUpdateTemplate)gpa(
            device, "vkCreateDescriptorUpdateTemplate");
    table->CreateEvent = (PFN_vkCreateEvent)gpa(device, "vkCreateEvent");
    table->CreateFence = (PFN_vkCreateFence)gpa(device, "vkCreateFence");
    table->CreateFramebuffer =
        (PFN_vkCreateFramebuffer)gpa(device, "vkCreateFramebuffer");
    table->CreateGraphicsPipelines =
        (PFN_vkCreateGraphicsPipelines)gpa(device, "vkCreateGraphicsPipelines");
    table->CreateImage = (PFN_vkCreateImage)gpa(device, "vkCreateImage");
    table->CreateImageView =
        (PFN_vkCreateImageView)gpa(device, "vkCreateImageView");
    table->CreateIndirectCommandsLayoutNV =
        (PFN_vkCreateIndirectCommandsLayoutNV)gpa(
            device, "vkCreateIndirectCommandsLayoutNV");
    table->CreatePipelineCache =
        (PFN_vkCreatePipelineCache)gpa(device, "vkCreatePipelineCache");
    table->CreatePipelineLayout =
        (PFN_vkCreatePipelineLayout)gpa(device, "vkCreatePipelineLayout");
    table->CreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)gpa(
        device, "vkCreatePrivateDataSlotEXT");
    table->CreateQueryPool =
        (PFN_vkCreateQueryPool)gpa(device, "vkCreateQueryPool");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CreateRayTracingPipelinesKHR =
        (PFN_vkCreateRayTracingPipelinesKHR)gpa(
            device, "vkCreateRayTracingPipelinesKHR");
#endif
    table->CreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)gpa(
        device, "vkCreateRayTracingPipelinesNV");
    table->CreateRenderPass =
        (PFN_vkCreateRenderPass)gpa(device, "vkCreateRenderPass");
    table->CreateRenderPass2 =
        (PFN_vkCreateRenderPass2)gpa(device, "vkCreateRenderPass2");
    table->CreateSampler = (PFN_vkCreateSampler)gpa(device, "vkCreateSampler");
    table->CreateSamplerYcbcrConversion =
        (PFN_vkCreateSamplerYcbcrConversion)gpa(
            device, "vkCreateSamplerYcbcrConversion");
    table->CreateSemaphore =
        (PFN_vkCreateSemaphore)gpa(device, "vkCreateSemaphore");
    table->CreateShaderModule =
        (PFN_vkCreateShaderModule)gpa(device, "vkCreateShaderModule");
    table->CreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)gpa(
        device, "vkCreateSharedSwapchainsKHR");
    table->CreateSwapchainKHR =
        (PFN_vkCreateSwapchainKHR)gpa(device, "vkCreateSwapchainKHR");
    table->CreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)gpa(
        device, "vkCreateValidationCacheEXT");
    table->DebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT)gpa(
        device, "vkDebugMarkerSetObjectNameEXT");
    table->DebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT)gpa(
        device, "vkDebugMarkerSetObjectTagEXT");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->DeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR)gpa(
        device, "vkDeferredOperationJoinKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->DestroyAccelerationStructureKHR =
        (PFN_vkDestroyAccelerationStructureKHR)gpa(
            device, "vkDestroyAccelerationStructureKHR");
#endif
    table->DestroyBuffer = (PFN_vkDestroyBuffer)gpa(device, "vkDestroyBuffer");
    table->DestroyBufferView =
        (PFN_vkDestroyBufferView)gpa(device, "vkDestroyBufferView");
    table->DestroyCommandPool =
        (PFN_vkDestroyCommandPool)gpa(device, "vkDestroyCommandPool");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->DestroyDeferredOperationKHR = (PFN_vkDestroyDeferredOperationKHR)gpa(
        device, "vkDestroyDeferredOperationKHR");
#endif
    table->DestroyDescriptorPool =
        (PFN_vkDestroyDescriptorPool)gpa(device, "vkDestroyDescriptorPool");
    table->DestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout)gpa(
        device, "vkDestroyDescriptorSetLayout");
    table->DestroyDescriptorUpdateTemplate =
        (PFN_vkDestroyDescriptorUpdateTemplate)gpa(
            device, "vkDestroyDescriptorUpdateTemplate");
    table->DestroyDevice = (PFN_vkDestroyDevice)gpa(device, "vkDestroyDevice");
    table->DestroyEvent = (PFN_vkDestroyEvent)gpa(device, "vkDestroyEvent");
    table->DestroyFence = (PFN_vkDestroyFence)gpa(device, "vkDestroyFence");
    table->DestroyFramebuffer =
        (PFN_vkDestroyFramebuffer)gpa(device, "vkDestroyFramebuffer");
    table->DestroyImage = (PFN_vkDestroyImage)gpa(device, "vkDestroyImage");
    table->DestroyImageView =
        (PFN_vkDestroyImageView)gpa(device, "vkDestroyImageView");
    table->DestroyIndirectCommandsLayoutNV =
        (PFN_vkDestroyIndirectCommandsLayoutNV)gpa(
            device, "vkDestroyIndirectCommandsLayoutNV");
    table->DestroyPipeline =
        (PFN_vkDestroyPipeline)gpa(device, "vkDestroyPipeline");
    table->DestroyPipelineCache =
        (PFN_vkDestroyPipelineCache)gpa(device, "vkDestroyPipelineCache");
    table->DestroyPipelineLayout =
        (PFN_vkDestroyPipelineLayout)gpa(device, "vkDestroyPipelineLayout");
    table->DestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)gpa(
        device, "vkDestroyPrivateDataSlotEXT");
    table->DestroyQueryPool =
        (PFN_vkDestroyQueryPool)gpa(device, "vkDestroyQueryPool");
    table->DestroyRenderPass =
        (PFN_vkDestroyRenderPass)gpa(device, "vkDestroyRenderPass");
    table->DestroySampler =
        (PFN_vkDestroySampler)gpa(device, "vkDestroySampler");
    table->DestroySamplerYcbcrConversion =
        (PFN_vkDestroySamplerYcbcrConversion)gpa(
            device, "vkDestroySamplerYcbcrConversion");
    table->DestroySemaphore =
        (PFN_vkDestroySemaphore)gpa(device, "vkDestroySemaphore");
    table->DestroyShaderModule =
        (PFN_vkDestroyShaderModule)gpa(device, "vkDestroyShaderModule");
    table->DestroySwapchainKHR =
        (PFN_vkDestroySwapchainKHR)gpa(device, "vkDestroySwapchainKHR");
    table->DestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)gpa(
        device, "vkDestroyValidationCacheEXT");
    table->DeviceWaitIdle =
        (PFN_vkDeviceWaitIdle)gpa(device, "vkDeviceWaitIdle");
    table->DisplayPowerControlEXT =
        (PFN_vkDisplayPowerControlEXT)gpa(device, "vkDisplayPowerControlEXT");
    table->EndCommandBuffer =
        (PFN_vkEndCommandBuffer)gpa(device, "vkEndCommandBuffer");
    table->FlushMappedMemoryRanges =
        (PFN_vkFlushMappedMemoryRanges)gpa(device, "vkFlushMappedMemoryRanges");
    table->FreeCommandBuffers =
        (PFN_vkFreeCommandBuffers)gpa(device, "vkFreeCommandBuffers");
    table->FreeDescriptorSets =
        (PFN_vkFreeDescriptorSets)gpa(device, "vkFreeDescriptorSets");
    table->FreeMemory = (PFN_vkFreeMemory)gpa(device, "vkFreeMemory");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->GetAccelerationStructureDeviceAddressKHR =
        (PFN_vkGetAccelerationStructureDeviceAddressKHR)gpa(
            device, "vkGetAccelerationStructureDeviceAddressKHR");
#endif
    table->GetAccelerationStructureHandleNV =
        (PFN_vkGetAccelerationStructureHandleNV)gpa(
            device, "vkGetAccelerationStructureHandleNV");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->GetAccelerationStructureMemoryRequirementsKHR =
        (PFN_vkGetAccelerationStructureMemoryRequirementsKHR)gpa(
            device, "vkGetAccelerationStructureMemoryRequirementsKHR");
#endif
    table->GetAccelerationStructureMemoryRequirementsNV =
        (PFN_vkGetAccelerationStructureMemoryRequirementsNV)gpa(
            device, "vkGetAccelerationStructureMemoryRequirementsNV");
    table->GetBufferDeviceAddress =
        (PFN_vkGetBufferDeviceAddress)gpa(device, "vkGetBufferDeviceAddress");
    table->GetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements)gpa(
        device, "vkGetBufferMemoryRequirements");
    table->GetBufferMemoryRequirements2 =
        (PFN_vkGetBufferMemoryRequirements2)gpa(
            device, "vkGetBufferMemoryRequirements2");
    table->GetBufferOpaqueCaptureAddress =
        (PFN_vkGetBufferOpaqueCaptureAddress)gpa(
            device, "vkGetBufferOpaqueCaptureAddress");
    table->GetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)gpa(
        device, "vkGetCalibratedTimestampsEXT");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->GetDeferredOperationMaxConcurrencyKHR =
        (PFN_vkGetDeferredOperationMaxConcurrencyKHR)gpa(
            device, "vkGetDeferredOperationMaxConcurrencyKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->GetDeferredOperationResultKHR =
        (PFN_vkGetDeferredOperationResultKHR)gpa(
            device, "vkGetDeferredOperationResultKHR");
#endif
    table->GetDescriptorSetLayoutSupport =
        (PFN_vkGetDescriptorSetLayoutSupport)gpa(
            device, "vkGetDescriptorSetLayoutSupport");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->GetDeviceAccelerationStructureCompatibilityKHR =
        (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)gpa(
            device, "vkGetDeviceAccelerationStructureCompatibilityKHR");
#endif
    table->GetDeviceGroupPeerMemoryFeatures =
        (PFN_vkGetDeviceGroupPeerMemoryFeatures)gpa(
            device, "vkGetDeviceGroupPeerMemoryFeatures");
    table->GetDeviceGroupPresentCapabilitiesKHR =
        (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)gpa(
            device, "vkGetDeviceGroupPresentCapabilitiesKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->GetDeviceGroupSurfacePresentModes2EXT =
        (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)gpa(
            device, "vkGetDeviceGroupSurfacePresentModes2EXT");
#endif
    table->GetDeviceGroupSurfacePresentModesKHR =
        (PFN_vkGetDeviceGroupSurfacePresentModesKHR)gpa(
            device, "vkGetDeviceGroupSurfacePresentModesKHR");
    table->GetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)gpa(
        device, "vkGetDeviceMemoryCommitment");
    table->GetDeviceMemoryOpaqueCaptureAddress =
        (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)gpa(
            device, "vkGetDeviceMemoryOpaqueCaptureAddress");
    table->GetDeviceQueue =
        (PFN_vkGetDeviceQueue)gpa(device, "vkGetDeviceQueue");
    table->GetDeviceQueue2 =
        (PFN_vkGetDeviceQueue2)gpa(device, "vkGetDeviceQueue2");
    table->GetEventStatus =
        (PFN_vkGetEventStatus)gpa(device, "vkGetEventStatus");
    table->GetFenceFdKHR = (PFN_vkGetFenceFdKHR)gpa(device, "vkGetFenceFdKHR");
    table->GetFenceStatus =
        (PFN_vkGetFenceStatus)gpa(device, "vkGetFenceStatus");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->GetFenceWin32HandleKHR =
        (PFN_vkGetFenceWin32HandleKHR)gpa(device, "vkGetFenceWin32HandleKHR");
#endif
    table->GetGeneratedCommandsMemoryRequirementsNV =
        (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)gpa(
            device, "vkGetGeneratedCommandsMemoryRequirementsNV");
    table->GetImageDrmFormatModifierPropertiesEXT =
        (PFN_vkGetImageDrmFormatModifierPropertiesEXT)gpa(
            device, "vkGetImageDrmFormatModifierPropertiesEXT");
    table->GetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)gpa(
        device, "vkGetImageMemoryRequirements");
    table->GetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)gpa(
        device, "vkGetImageMemoryRequirements2");
    table->GetImageSparseMemoryRequirements =
        (PFN_vkGetImageSparseMemoryRequirements)gpa(
            device, "vkGetImageSparseMemoryRequirements");
    table->GetImageSparseMemoryRequirements2 =
        (PFN_vkGetImageSparseMemoryRequirements2)gpa(
            device, "vkGetImageSparseMemoryRequirements2");
    table->GetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)gpa(
        device, "vkGetImageSubresourceLayout");
    table->GetImageViewAddressNVX =
        (PFN_vkGetImageViewAddressNVX)gpa(device, "vkGetImageViewAddressNVX");
    table->GetImageViewHandleNVX =
        (PFN_vkGetImageViewHandleNVX)gpa(device, "vkGetImageViewHandleNVX");
    table->GetMemoryFdKHR =
        (PFN_vkGetMemoryFdKHR)gpa(device, "vkGetMemoryFdKHR");
    table->GetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)gpa(
        device, "vkGetMemoryFdPropertiesKHR");
    table->GetMemoryHostPointerPropertiesEXT =
        (PFN_vkGetMemoryHostPointerPropertiesEXT)gpa(
            device, "vkGetMemoryHostPointerPropertiesEXT");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->GetMemoryWin32HandleKHR =
        (PFN_vkGetMemoryWin32HandleKHR)gpa(device, "vkGetMemoryWin32HandleKHR");
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->GetMemoryWin32HandleNV =
        (PFN_vkGetMemoryWin32HandleNV)gpa(device, "vkGetMemoryWin32HandleNV");
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->GetMemoryWin32HandlePropertiesKHR =
        (PFN_vkGetMemoryWin32HandlePropertiesKHR)gpa(
            device, "vkGetMemoryWin32HandlePropertiesKHR");
#endif
    table->GetPastPresentationTimingGOOGLE =
        (PFN_vkGetPastPresentationTimingGOOGLE)gpa(
            device, "vkGetPastPresentationTimingGOOGLE");
    table->GetPerformanceParameterINTEL =
        (PFN_vkGetPerformanceParameterINTEL)gpa(
            device, "vkGetPerformanceParameterINTEL");
    table->GetPipelineCacheData =
        (PFN_vkGetPipelineCacheData)gpa(device, "vkGetPipelineCacheData");
    table->GetPipelineExecutableInternalRepresentationsKHR =
        (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)gpa(
            device, "vkGetPipelineExecutableInternalRepresentationsKHR");
    table->GetPipelineExecutablePropertiesKHR =
        (PFN_vkGetPipelineExecutablePropertiesKHR)gpa(
            device, "vkGetPipelineExecutablePropertiesKHR");
    table->GetPipelineExecutableStatisticsKHR =
        (PFN_vkGetPipelineExecutableStatisticsKHR)gpa(
            device, "vkGetPipelineExecutableStatisticsKHR");
    table->GetPrivateDataEXT =
        (PFN_vkGetPrivateDataEXT)gpa(device, "vkGetPrivateDataEXT");
    table->GetQueryPoolResults =
        (PFN_vkGetQueryPoolResults)gpa(device, "vkGetQueryPoolResults");
    table->GetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)gpa(
        device, "vkGetQueueCheckpointDataNV");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->GetRayTracingCaptureReplayShaderGroupHandlesKHR =
        (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)gpa(
            device, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->GetRayTracingShaderGroupHandlesKHR =
        (PFN_vkGetRayTracingShaderGroupHandlesKHR)gpa(
            device, "vkGetRayTracingShaderGroupHandlesKHR");
#endif
    table->GetRefreshCycleDurationGOOGLE =
        (PFN_vkGetRefreshCycleDurationGOOGLE)gpa(
            device, "vkGetRefreshCycleDurationGOOGLE");
    table->GetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)gpa(
        device, "vkGetRenderAreaGranularity");
    table->GetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)gpa(
        device, "vkGetSemaphoreCounterValue");
    table->GetSemaphoreFdKHR =
        (PFN_vkGetSemaphoreFdKHR)gpa(device, "vkGetSemaphoreFdKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->GetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR)gpa(
        device, "vkGetSemaphoreWin32HandleKHR");
#endif
    table->GetShaderInfoAMD =
        (PFN_vkGetShaderInfoAMD)gpa(device, "vkGetShaderInfoAMD");
    table->GetSwapchainCounterEXT =
        (PFN_vkGetSwapchainCounterEXT)gpa(device, "vkGetSwapchainCounterEXT");
    table->GetSwapchainImagesKHR =
        (PFN_vkGetSwapchainImagesKHR)gpa(device, "vkGetSwapchainImagesKHR");
    table->GetSwapchainStatusKHR =
        (PFN_vkGetSwapchainStatusKHR)gpa(device, "vkGetSwapchainStatusKHR");
    table->GetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)gpa(
        device, "vkGetValidationCacheDataEXT");
    table->ImportFenceFdKHR =
        (PFN_vkImportFenceFdKHR)gpa(device, "vkImportFenceFdKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->ImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)gpa(
        device, "vkImportFenceWin32HandleKHR");
#endif
    table->ImportSemaphoreFdKHR =
        (PFN_vkImportSemaphoreFdKHR)gpa(device, "vkImportSemaphoreFdKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->ImportSemaphoreWin32HandleKHR =
        (PFN_vkImportSemaphoreWin32HandleKHR)gpa(
            device, "vkImportSemaphoreWin32HandleKHR");
#endif
    table->InitializePerformanceApiINTEL =
        (PFN_vkInitializePerformanceApiINTEL)gpa(
            device, "vkInitializePerformanceApiINTEL");
    table->InvalidateMappedMemoryRanges =
        (PFN_vkInvalidateMappedMemoryRanges)gpa(
            device, "vkInvalidateMappedMemoryRanges");
    table->MapMemory = (PFN_vkMapMemory)gpa(device, "vkMapMemory");
    table->MergePipelineCaches =
        (PFN_vkMergePipelineCaches)gpa(device, "vkMergePipelineCaches");
    table->MergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)gpa(
        device, "vkMergeValidationCachesEXT");
    table->QueueBeginDebugUtilsLabelEXT =
        (PFN_vkQueueBeginDebugUtilsLabelEXT)gpa(
            device, "vkQueueBeginDebugUtilsLabelEXT");
    table->QueueBindSparse =
        (PFN_vkQueueBindSparse)gpa(device, "vkQueueBindSparse");
    table->QueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)gpa(
        device, "vkQueueEndDebugUtilsLabelEXT");
    table->QueueInsertDebugUtilsLabelEXT =
        (PFN_vkQueueInsertDebugUtilsLabelEXT)gpa(
            device, "vkQueueInsertDebugUtilsLabelEXT");
    table->QueuePresentKHR =
        (PFN_vkQueuePresentKHR)gpa(device, "vkQueuePresentKHR");
    table->QueueSetPerformanceConfigurationINTEL =
        (PFN_vkQueueSetPerformanceConfigurationINTEL)gpa(
            device, "vkQueueSetPerformanceConfigurationINTEL");
    table->QueueSubmit = (PFN_vkQueueSubmit)gpa(device, "vkQueueSubmit");
    table->QueueWaitIdle = (PFN_vkQueueWaitIdle)gpa(device, "vkQueueWaitIdle");
    table->RegisterDeviceEventEXT =
        (PFN_vkRegisterDeviceEventEXT)gpa(device, "vkRegisterDeviceEventEXT");
    table->RegisterDisplayEventEXT =
        (PFN_vkRegisterDisplayEventEXT)gpa(device, "vkRegisterDisplayEventEXT");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->ReleaseFullScreenExclusiveModeEXT =
        (PFN_vkReleaseFullScreenExclusiveModeEXT)gpa(
            device, "vkReleaseFullScreenExclusiveModeEXT");
#endif
    table->ReleasePerformanceConfigurationINTEL =
        (PFN_vkReleasePerformanceConfigurationINTEL)gpa(
            device, "vkReleasePerformanceConfigurationINTEL");
    table->ReleaseProfilingLockKHR =
        (PFN_vkReleaseProfilingLockKHR)gpa(device, "vkReleaseProfilingLockKHR");
    table->ResetCommandBuffer =
        (PFN_vkResetCommandBuffer)gpa(device, "vkResetCommandBuffer");
    table->ResetCommandPool =
        (PFN_vkResetCommandPool)gpa(device, "vkResetCommandPool");
    table->ResetDescriptorPool =
        (PFN_vkResetDescriptorPool)gpa(device, "vkResetDescriptorPool");
    table->ResetEvent = (PFN_vkResetEvent)gpa(device, "vkResetEvent");
    table->ResetFences = (PFN_vkResetFences)gpa(device, "vkResetFences");
    table->ResetQueryPool =
        (PFN_vkResetQueryPool)gpa(device, "vkResetQueryPool");
    table->SetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)gpa(
        device, "vkSetDebugUtilsObjectNameEXT");
    table->SetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)gpa(
        device, "vkSetDebugUtilsObjectTagEXT");
    table->SetEvent = (PFN_vkSetEvent)gpa(device, "vkSetEvent");
    table->SetHdrMetadataEXT =
        (PFN_vkSetHdrMetadataEXT)gpa(device, "vkSetHdrMetadataEXT");
    table->SetLocalDimmingAMD =
        (PFN_vkSetLocalDimmingAMD)gpa(device, "vkSetLocalDimmingAMD");
    table->SetPrivateDataEXT =
        (PFN_vkSetPrivateDataEXT)gpa(device, "vkSetPrivateDataEXT");
    table->SignalSemaphore =
        (PFN_vkSignalSemaphore)gpa(device, "vkSignalSemaphore");
    table->TrimCommandPool =
        (PFN_vkTrimCommandPool)gpa(device, "vkTrimCommandPool");
    table->UninitializePerformanceApiINTEL =
        (PFN_vkUninitializePerformanceApiINTEL)gpa(
            device, "vkUninitializePerformanceApiINTEL");
    table->UnmapMemory = (PFN_vkUnmapMemory)gpa(device, "vkUnmapMemory");
    table->UpdateDescriptorSetWithTemplate =
        (PFN_vkUpdateDescriptorSetWithTemplate)gpa(
            device, "vkUpdateDescriptorSetWithTemplate");
    table->UpdateDescriptorSets =
        (PFN_vkUpdateDescriptorSets)gpa(device, "vkUpdateDescriptorSets");
    table->WaitForFences = (PFN_vkWaitForFences)gpa(device, "vkWaitForFences");
    table->WaitSemaphores =
        (PFN_vkWaitSemaphores)gpa(device, "vkWaitSemaphores");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->WriteAccelerationStructuresPropertiesKHR =
        (PFN_vkWriteAccelerationStructuresPropertiesKHR)gpa(
            device, "vkWriteAccelerationStructuresPropertiesKHR");
#endif
}
