#pragma once

#include <vulkan/vulkan.h>

void* get_key(void* inst); 

typedef struct vk_instance_dispatch_table {
    PFN_vkGetInstanceProcAddr GetInstanceProcAddr;
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    PFN_vkAcquireXlibDisplayEXT AcquireXlibDisplayEXT;
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    PFN_vkCreateAndroidSurfaceKHR CreateAndroidSurfaceKHR;
#endif
    PFN_vkCreateDebugReportCallbackEXT CreateDebugReportCallbackEXT;
    PFN_vkCreateDebugUtilsMessengerEXT CreateDebugUtilsMessengerEXT;
    PFN_vkCreateDevice CreateDevice;
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    PFN_vkCreateDirectFBSurfaceEXT CreateDirectFBSurfaceEXT;
#endif
    PFN_vkCreateDisplayModeKHR CreateDisplayModeKHR;
    PFN_vkCreateDisplayPlaneSurfaceKHR CreateDisplayPlaneSurfaceKHR;
    PFN_vkCreateHeadlessSurfaceEXT CreateHeadlessSurfaceEXT;
#ifdef VK_USE_PLATFORM_IOS_MVK
    PFN_vkCreateIOSSurfaceMVK CreateIOSSurfaceMVK;
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
    PFN_vkCreateImagePipeSurfaceFUCHSIA CreateImagePipeSurfaceFUCHSIA;
#endif
    PFN_vkCreateInstance CreateInstance;
#ifdef VK_USE_PLATFORM_MACOS_MVK
    PFN_vkCreateMacOSSurfaceMVK CreateMacOSSurfaceMVK;
#endif
#ifdef VK_USE_PLATFORM_METAL_EXT
    PFN_vkCreateMetalSurfaceEXT CreateMetalSurfaceEXT;
#endif
#ifdef VK_USE_PLATFORM_GGP
    PFN_vkCreateStreamDescriptorSurfaceGGP CreateStreamDescriptorSurfaceGGP;
#endif
#ifdef VK_USE_PLATFORM_VI_NN
    PFN_vkCreateViSurfaceNN CreateViSurfaceNN;
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    PFN_vkCreateWaylandSurfaceKHR CreateWaylandSurfaceKHR;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkCreateWin32SurfaceKHR CreateWin32SurfaceKHR;
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    PFN_vkCreateXcbSurfaceKHR CreateXcbSurfaceKHR;
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
    PFN_vkCreateXlibSurfaceKHR CreateXlibSurfaceKHR;
#endif
    PFN_vkDebugReportMessageEXT DebugReportMessageEXT;
    PFN_vkDestroyDebugReportCallbackEXT DestroyDebugReportCallbackEXT;
    PFN_vkDestroyDebugUtilsMessengerEXT DestroyDebugUtilsMessengerEXT;
    PFN_vkDestroyInstance DestroyInstance;
    PFN_vkDestroySurfaceKHR DestroySurfaceKHR;
    PFN_vkEnumerateDeviceExtensionProperties EnumerateDeviceExtensionProperties;
    PFN_vkEnumerateDeviceLayerProperties EnumerateDeviceLayerProperties;
    PFN_vkEnumerateInstanceExtensionProperties
        EnumerateInstanceExtensionProperties;
    PFN_vkEnumerateInstanceLayerProperties EnumerateInstanceLayerProperties;
    PFN_vkEnumerateInstanceVersion EnumerateInstanceVersion;
    PFN_vkEnumeratePhysicalDeviceGroups EnumeratePhysicalDeviceGroups;
    PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR
        EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
    PFN_vkEnumeratePhysicalDevices EnumeratePhysicalDevices;
    PFN_vkGetDisplayModeProperties2KHR GetDisplayModeProperties2KHR;
    PFN_vkGetDisplayModePropertiesKHR GetDisplayModePropertiesKHR;
    PFN_vkGetDisplayPlaneCapabilities2KHR GetDisplayPlaneCapabilities2KHR;
    PFN_vkGetDisplayPlaneCapabilitiesKHR GetDisplayPlaneCapabilitiesKHR;
    PFN_vkGetDisplayPlaneSupportedDisplaysKHR
        GetDisplayPlaneSupportedDisplaysKHR;
    PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT
        GetPhysicalDeviceCalibrateableTimeDomainsEXT;
    PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV
        GetPhysicalDeviceCooperativeMatrixPropertiesNV;
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT
        GetPhysicalDeviceDirectFBPresentationSupportEXT;
#endif
    PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR
        GetPhysicalDeviceDisplayPlaneProperties2KHR;
    PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR
        GetPhysicalDeviceDisplayPlanePropertiesKHR;
    PFN_vkGetPhysicalDeviceDisplayProperties2KHR
        GetPhysicalDeviceDisplayProperties2KHR;
    PFN_vkGetPhysicalDeviceDisplayPropertiesKHR
        GetPhysicalDeviceDisplayPropertiesKHR;
    PFN_vkGetPhysicalDeviceExternalBufferProperties
        GetPhysicalDeviceExternalBufferProperties;
    PFN_vkGetPhysicalDeviceExternalFenceProperties
        GetPhysicalDeviceExternalFenceProperties;
    PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV
        GetPhysicalDeviceExternalImageFormatPropertiesNV;
    PFN_vkGetPhysicalDeviceExternalSemaphoreProperties
        GetPhysicalDeviceExternalSemaphoreProperties;
    PFN_vkGetPhysicalDeviceFeatures GetPhysicalDeviceFeatures;
    PFN_vkGetPhysicalDeviceFeatures2 GetPhysicalDeviceFeatures2;
    PFN_vkGetPhysicalDeviceFormatProperties GetPhysicalDeviceFormatProperties;
    PFN_vkGetPhysicalDeviceFormatProperties2 GetPhysicalDeviceFormatProperties2;
    PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR
        GetPhysicalDeviceFragmentShadingRatesKHR;
    PFN_vkGetPhysicalDeviceImageFormatProperties
        GetPhysicalDeviceImageFormatProperties;
    PFN_vkGetPhysicalDeviceImageFormatProperties2
        GetPhysicalDeviceImageFormatProperties2;
    PFN_vkGetPhysicalDeviceMemoryProperties GetPhysicalDeviceMemoryProperties;
    PFN_vkGetPhysicalDeviceMemoryProperties2 GetPhysicalDeviceMemoryProperties2;
    PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT
        GetPhysicalDeviceMultisamplePropertiesEXT;
    PFN_vkGetPhysicalDevicePresentRectanglesKHR
        GetPhysicalDevicePresentRectanglesKHR;
    PFN_vkGetPhysicalDeviceProperties GetPhysicalDeviceProperties;
    PFN_vkGetPhysicalDeviceProperties2 GetPhysicalDeviceProperties2;
    PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR
        GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
    PFN_vkGetPhysicalDeviceQueueFamilyProperties
        GetPhysicalDeviceQueueFamilyProperties;
    PFN_vkGetPhysicalDeviceQueueFamilyProperties2
        GetPhysicalDeviceQueueFamilyProperties2;
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties
        GetPhysicalDeviceSparseImageFormatProperties;
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties2
        GetPhysicalDeviceSparseImageFormatProperties2;
    PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV
        GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT
        GetPhysicalDeviceSurfaceCapabilities2EXT;
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR
        GetPhysicalDeviceSurfaceCapabilities2KHR;
    PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR
        GetPhysicalDeviceSurfaceCapabilitiesKHR;
    PFN_vkGetPhysicalDeviceSurfaceFormats2KHR
        GetPhysicalDeviceSurfaceFormats2KHR;
    PFN_vkGetPhysicalDeviceSurfaceFormatsKHR GetPhysicalDeviceSurfaceFormatsKHR;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT
        GetPhysicalDeviceSurfacePresentModes2EXT;
#endif
    PFN_vkGetPhysicalDeviceSurfacePresentModesKHR
        GetPhysicalDeviceSurfacePresentModesKHR;
    PFN_vkGetPhysicalDeviceSurfaceSupportKHR GetPhysicalDeviceSurfaceSupportKHR;
    PFN_vkGetPhysicalDeviceToolPropertiesEXT GetPhysicalDeviceToolPropertiesEXT;
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR
        GetPhysicalDeviceWaylandPresentationSupportKHR;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR
        GetPhysicalDeviceWin32PresentationSupportKHR;
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR
        GetPhysicalDeviceXcbPresentationSupportKHR;
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
    PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR
        GetPhysicalDeviceXlibPresentationSupportKHR;
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    PFN_vkGetRandROutputDisplayEXT GetRandROutputDisplayEXT;
#endif
    PFN_vkReleaseDisplayEXT ReleaseDisplayEXT;
    PFN_vkSubmitDebugUtilsMessageEXT SubmitDebugUtilsMessageEXT;
} instance_dispatch_table_t;

typedef struct vk_device_dispatch_table {
    PFN_vkGetDeviceProcAddr GetDeviceProcAddr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkAcquireFullScreenExclusiveModeEXT AcquireFullScreenExclusiveModeEXT;
#endif
    PFN_vkAcquireNextImage2KHR AcquireNextImage2KHR;
    PFN_vkAcquireNextImageKHR AcquireNextImageKHR;
    PFN_vkAcquirePerformanceConfigurationINTEL
        AcquirePerformanceConfigurationINTEL;
    PFN_vkAcquireProfilingLockKHR AcquireProfilingLockKHR;
    PFN_vkAllocateCommandBuffers AllocateCommandBuffers;
    PFN_vkAllocateDescriptorSets AllocateDescriptorSets;
    PFN_vkAllocateMemory AllocateMemory;
    PFN_vkBeginCommandBuffer BeginCommandBuffer;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkBindAccelerationStructureMemoryKHR BindAccelerationStructureMemoryKHR;
#endif
    PFN_vkBindBufferMemory BindBufferMemory;
    PFN_vkBindBufferMemory2 BindBufferMemory2;
    PFN_vkBindImageMemory BindImageMemory;
    PFN_vkBindImageMemory2 BindImageMemory2;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkBuildAccelerationStructureKHR BuildAccelerationStructureKHR;
#endif
    PFN_vkCmdBeginConditionalRenderingEXT CmdBeginConditionalRenderingEXT;
    PFN_vkCmdBeginDebugUtilsLabelEXT CmdBeginDebugUtilsLabelEXT;
    PFN_vkCmdBeginQuery CmdBeginQuery;
    PFN_vkCmdBeginQueryIndexedEXT CmdBeginQueryIndexedEXT;
    PFN_vkCmdBeginRenderPass CmdBeginRenderPass;
    PFN_vkCmdBeginRenderPass2 CmdBeginRenderPass2;
    PFN_vkCmdBeginTransformFeedbackEXT CmdBeginTransformFeedbackEXT;
    PFN_vkCmdBindDescriptorSets CmdBindDescriptorSets;
    PFN_vkCmdBindIndexBuffer CmdBindIndexBuffer;
    PFN_vkCmdBindPipeline CmdBindPipeline;
    PFN_vkCmdBindPipelineShaderGroupNV CmdBindPipelineShaderGroupNV;
    PFN_vkCmdBindShadingRateImageNV CmdBindShadingRateImageNV;
    PFN_vkCmdBindTransformFeedbackBuffersEXT CmdBindTransformFeedbackBuffersEXT;
    PFN_vkCmdBindVertexBuffers CmdBindVertexBuffers;
    PFN_vkCmdBindVertexBuffers2EXT CmdBindVertexBuffers2EXT;
    PFN_vkCmdBlitImage CmdBlitImage;
    PFN_vkCmdBlitImage2KHR CmdBlitImage2KHR;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdBuildAccelerationStructureIndirectKHR
        CmdBuildAccelerationStructureIndirectKHR;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdBuildAccelerationStructureKHR CmdBuildAccelerationStructureKHR;
#endif
    PFN_vkCmdBuildAccelerationStructureNV CmdBuildAccelerationStructureNV;
    PFN_vkCmdClearAttachments CmdClearAttachments;
    PFN_vkCmdClearColorImage CmdClearColorImage;
    PFN_vkCmdClearDepthStencilImage CmdClearDepthStencilImage;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdCopyAccelerationStructureKHR CmdCopyAccelerationStructureKHR;
#endif
    PFN_vkCmdCopyAccelerationStructureNV CmdCopyAccelerationStructureNV;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdCopyAccelerationStructureToMemoryKHR
        CmdCopyAccelerationStructureToMemoryKHR;
#endif
    PFN_vkCmdCopyBuffer CmdCopyBuffer;
    PFN_vkCmdCopyBuffer2KHR CmdCopyBuffer2KHR;
    PFN_vkCmdCopyBufferToImage CmdCopyBufferToImage;
    PFN_vkCmdCopyBufferToImage2KHR CmdCopyBufferToImage2KHR;
    PFN_vkCmdCopyImage CmdCopyImage;
    PFN_vkCmdCopyImage2KHR CmdCopyImage2KHR;
    PFN_vkCmdCopyImageToBuffer CmdCopyImageToBuffer;
    PFN_vkCmdCopyImageToBuffer2KHR CmdCopyImageToBuffer2KHR;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdCopyMemoryToAccelerationStructureKHR
        CmdCopyMemoryToAccelerationStructureKHR;
#endif
    PFN_vkCmdCopyQueryPoolResults CmdCopyQueryPoolResults;
    PFN_vkCmdDebugMarkerBeginEXT CmdDebugMarkerBeginEXT;
    PFN_vkCmdDebugMarkerEndEXT CmdDebugMarkerEndEXT;
    PFN_vkCmdDebugMarkerInsertEXT CmdDebugMarkerInsertEXT;
    PFN_vkCmdDispatch CmdDispatch;
    PFN_vkCmdDispatchBase CmdDispatchBase;
    PFN_vkCmdDispatchIndirect CmdDispatchIndirect;
    PFN_vkCmdDraw CmdDraw;
    PFN_vkCmdDrawIndexed CmdDrawIndexed;
    PFN_vkCmdDrawIndexedIndirect CmdDrawIndexedIndirect;
    PFN_vkCmdDrawIndexedIndirectCount CmdDrawIndexedIndirectCount;
    PFN_vkCmdDrawIndirect CmdDrawIndirect;
    PFN_vkCmdDrawIndirectByteCountEXT CmdDrawIndirectByteCountEXT;
    PFN_vkCmdDrawIndirectCount CmdDrawIndirectCount;
    PFN_vkCmdDrawMeshTasksIndirectCountNV CmdDrawMeshTasksIndirectCountNV;
    PFN_vkCmdDrawMeshTasksIndirectNV CmdDrawMeshTasksIndirectNV;
    PFN_vkCmdDrawMeshTasksNV CmdDrawMeshTasksNV;
    PFN_vkCmdEndConditionalRenderingEXT CmdEndConditionalRenderingEXT;
    PFN_vkCmdEndDebugUtilsLabelEXT CmdEndDebugUtilsLabelEXT;
    PFN_vkCmdEndQuery CmdEndQuery;
    PFN_vkCmdEndQueryIndexedEXT CmdEndQueryIndexedEXT;
    PFN_vkCmdEndRenderPass CmdEndRenderPass;
    PFN_vkCmdEndRenderPass2 CmdEndRenderPass2;
    PFN_vkCmdEndTransformFeedbackEXT CmdEndTransformFeedbackEXT;
    PFN_vkCmdExecuteCommands CmdExecuteCommands;
    PFN_vkCmdExecuteGeneratedCommandsNV CmdExecuteGeneratedCommandsNV;
    PFN_vkCmdFillBuffer CmdFillBuffer;
    PFN_vkCmdInsertDebugUtilsLabelEXT CmdInsertDebugUtilsLabelEXT;
    PFN_vkCmdNextSubpass CmdNextSubpass;
    PFN_vkCmdNextSubpass2 CmdNextSubpass2;
    PFN_vkCmdPipelineBarrier CmdPipelineBarrier;
    PFN_vkCmdPreprocessGeneratedCommandsNV CmdPreprocessGeneratedCommandsNV;
    PFN_vkCmdPushConstants CmdPushConstants;
    PFN_vkCmdPushDescriptorSetKHR CmdPushDescriptorSetKHR;
    PFN_vkCmdPushDescriptorSetWithTemplateKHR
        CmdPushDescriptorSetWithTemplateKHR;
    PFN_vkCmdResetEvent CmdResetEvent;
    PFN_vkCmdResetQueryPool CmdResetQueryPool;
    PFN_vkCmdResolveImage CmdResolveImage;
    PFN_vkCmdResolveImage2KHR CmdResolveImage2KHR;
    PFN_vkCmdSetBlendConstants CmdSetBlendConstants;
    PFN_vkCmdSetCheckpointNV CmdSetCheckpointNV;
    PFN_vkCmdSetCoarseSampleOrderNV CmdSetCoarseSampleOrderNV;
    PFN_vkCmdSetCullModeEXT CmdSetCullModeEXT;
    PFN_vkCmdSetDepthBias CmdSetDepthBias;
    PFN_vkCmdSetDepthBounds CmdSetDepthBounds;
    PFN_vkCmdSetDepthBoundsTestEnableEXT CmdSetDepthBoundsTestEnableEXT;
    PFN_vkCmdSetDepthCompareOpEXT CmdSetDepthCompareOpEXT;
    PFN_vkCmdSetDepthTestEnableEXT CmdSetDepthTestEnableEXT;
    PFN_vkCmdSetDepthWriteEnableEXT CmdSetDepthWriteEnableEXT;
    PFN_vkCmdSetDeviceMask CmdSetDeviceMask;
    PFN_vkCmdSetDiscardRectangleEXT CmdSetDiscardRectangleEXT;
    PFN_vkCmdSetEvent CmdSetEvent;
    PFN_vkCmdSetExclusiveScissorNV CmdSetExclusiveScissorNV;
    PFN_vkCmdSetFragmentShadingRateKHR CmdSetFragmentShadingRateKHR;
    PFN_vkCmdSetFrontFaceEXT CmdSetFrontFaceEXT;
    PFN_vkCmdSetLineStippleEXT CmdSetLineStippleEXT;
    PFN_vkCmdSetLineWidth CmdSetLineWidth;
    PFN_vkCmdSetPerformanceMarkerINTEL CmdSetPerformanceMarkerINTEL;
    PFN_vkCmdSetPerformanceOverrideINTEL CmdSetPerformanceOverrideINTEL;
    PFN_vkCmdSetPerformanceStreamMarkerINTEL CmdSetPerformanceStreamMarkerINTEL;
    PFN_vkCmdSetPrimitiveTopologyEXT CmdSetPrimitiveTopologyEXT;
    PFN_vkCmdSetSampleLocationsEXT CmdSetSampleLocationsEXT;
    PFN_vkCmdSetScissor CmdSetScissor;
    PFN_vkCmdSetScissorWithCountEXT CmdSetScissorWithCountEXT;
    PFN_vkCmdSetStencilCompareMask CmdSetStencilCompareMask;
    PFN_vkCmdSetStencilOpEXT CmdSetStencilOpEXT;
    PFN_vkCmdSetStencilReference CmdSetStencilReference;
    PFN_vkCmdSetStencilTestEnableEXT CmdSetStencilTestEnableEXT;
    PFN_vkCmdSetStencilWriteMask CmdSetStencilWriteMask;
    PFN_vkCmdSetViewport CmdSetViewport;
    PFN_vkCmdSetViewportShadingRatePaletteNV CmdSetViewportShadingRatePaletteNV;
    PFN_vkCmdSetViewportWScalingNV CmdSetViewportWScalingNV;
    PFN_vkCmdSetViewportWithCountEXT CmdSetViewportWithCountEXT;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdTraceRaysIndirectKHR CmdTraceRaysIndirectKHR;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdTraceRaysKHR CmdTraceRaysKHR;
#endif
    PFN_vkCmdTraceRaysNV CmdTraceRaysNV;
    PFN_vkCmdUpdateBuffer CmdUpdateBuffer;
    PFN_vkCmdWaitEvents CmdWaitEvents;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdWriteAccelerationStructuresPropertiesKHR
        CmdWriteAccelerationStructuresPropertiesKHR;
#endif
    PFN_vkCmdWriteBufferMarkerAMD CmdWriteBufferMarkerAMD;
    PFN_vkCmdWriteTimestamp CmdWriteTimestamp;
    PFN_vkCompileDeferredNV CompileDeferredNV;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCopyAccelerationStructureKHR CopyAccelerationStructureKHR;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCopyAccelerationStructureToMemoryKHR
        CopyAccelerationStructureToMemoryKHR;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCopyMemoryToAccelerationStructureKHR
        CopyMemoryToAccelerationStructureKHR;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCreateAccelerationStructureKHR CreateAccelerationStructureKHR;
#endif
    PFN_vkCreateAccelerationStructureNV CreateAccelerationStructureNV;
    PFN_vkCreateBuffer CreateBuffer;
    PFN_vkCreateBufferView CreateBufferView;
    PFN_vkCreateCommandPool CreateCommandPool;
    PFN_vkCreateComputePipelines CreateComputePipelines;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCreateDeferredOperationKHR CreateDeferredOperationKHR;
#endif
    PFN_vkCreateDescriptorPool CreateDescriptorPool;
    PFN_vkCreateDescriptorSetLayout CreateDescriptorSetLayout;
    PFN_vkCreateDescriptorUpdateTemplate CreateDescriptorUpdateTemplate;
    PFN_vkCreateEvent CreateEvent;
    PFN_vkCreateFence CreateFence;
    PFN_vkCreateFramebuffer CreateFramebuffer;
    PFN_vkCreateGraphicsPipelines CreateGraphicsPipelines;
    PFN_vkCreateImage CreateImage;
    PFN_vkCreateImageView CreateImageView;
    PFN_vkCreateIndirectCommandsLayoutNV CreateIndirectCommandsLayoutNV;
    PFN_vkCreatePipelineCache CreatePipelineCache;
    PFN_vkCreatePipelineLayout CreatePipelineLayout;
    PFN_vkCreatePrivateDataSlotEXT CreatePrivateDataSlotEXT;
    PFN_vkCreateQueryPool CreateQueryPool;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCreateRayTracingPipelinesKHR CreateRayTracingPipelinesKHR;
#endif
    PFN_vkCreateRayTracingPipelinesNV CreateRayTracingPipelinesNV;
    PFN_vkCreateRenderPass CreateRenderPass;
    PFN_vkCreateRenderPass2 CreateRenderPass2;
    PFN_vkCreateSampler CreateSampler;
    PFN_vkCreateSamplerYcbcrConversion CreateSamplerYcbcrConversion;
    PFN_vkCreateSemaphore CreateSemaphore;
    PFN_vkCreateShaderModule CreateShaderModule;
    PFN_vkCreateSharedSwapchainsKHR CreateSharedSwapchainsKHR;
    PFN_vkCreateSwapchainKHR CreateSwapchainKHR;
    PFN_vkCreateValidationCacheEXT CreateValidationCacheEXT;
    PFN_vkDebugMarkerSetObjectNameEXT DebugMarkerSetObjectNameEXT;
    PFN_vkDebugMarkerSetObjectTagEXT DebugMarkerSetObjectTagEXT;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkDeferredOperationJoinKHR DeferredOperationJoinKHR;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkDestroyAccelerationStructureKHR DestroyAccelerationStructureKHR;
#endif
    PFN_vkDestroyBuffer DestroyBuffer;
    PFN_vkDestroyBufferView DestroyBufferView;
    PFN_vkDestroyCommandPool DestroyCommandPool;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkDestroyDeferredOperationKHR DestroyDeferredOperationKHR;
#endif
    PFN_vkDestroyDescriptorPool DestroyDescriptorPool;
    PFN_vkDestroyDescriptorSetLayout DestroyDescriptorSetLayout;
    PFN_vkDestroyDescriptorUpdateTemplate DestroyDescriptorUpdateTemplate;
    PFN_vkDestroyDevice DestroyDevice;
    PFN_vkDestroyEvent DestroyEvent;
    PFN_vkDestroyFence DestroyFence;
    PFN_vkDestroyFramebuffer DestroyFramebuffer;
    PFN_vkDestroyImage DestroyImage;
    PFN_vkDestroyImageView DestroyImageView;
    PFN_vkDestroyIndirectCommandsLayoutNV DestroyIndirectCommandsLayoutNV;
    PFN_vkDestroyPipeline DestroyPipeline;
    PFN_vkDestroyPipelineCache DestroyPipelineCache;
    PFN_vkDestroyPipelineLayout DestroyPipelineLayout;
    PFN_vkDestroyPrivateDataSlotEXT DestroyPrivateDataSlotEXT;
    PFN_vkDestroyQueryPool DestroyQueryPool;
    PFN_vkDestroyRenderPass DestroyRenderPass;
    PFN_vkDestroySampler DestroySampler;
    PFN_vkDestroySamplerYcbcrConversion DestroySamplerYcbcrConversion;
    PFN_vkDestroySemaphore DestroySemaphore;
    PFN_vkDestroyShaderModule DestroyShaderModule;
    PFN_vkDestroySwapchainKHR DestroySwapchainKHR;
    PFN_vkDestroyValidationCacheEXT DestroyValidationCacheEXT;
    PFN_vkDeviceWaitIdle DeviceWaitIdle;
    PFN_vkDisplayPowerControlEXT DisplayPowerControlEXT;
    PFN_vkEndCommandBuffer EndCommandBuffer;
    PFN_vkFlushMappedMemoryRanges FlushMappedMemoryRanges;
    PFN_vkFreeCommandBuffers FreeCommandBuffers;
    PFN_vkFreeDescriptorSets FreeDescriptorSets;
    PFN_vkFreeMemory FreeMemory;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetAccelerationStructureDeviceAddressKHR
        GetAccelerationStructureDeviceAddressKHR;
#endif
    PFN_vkGetAccelerationStructureHandleNV GetAccelerationStructureHandleNV;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetAccelerationStructureMemoryRequirementsKHR
        GetAccelerationStructureMemoryRequirementsKHR;
#endif
    PFN_vkGetAccelerationStructureMemoryRequirementsNV
        GetAccelerationStructureMemoryRequirementsNV;
    PFN_vkGetBufferDeviceAddress GetBufferDeviceAddress;
    PFN_vkGetBufferMemoryRequirements GetBufferMemoryRequirements;
    PFN_vkGetBufferMemoryRequirements2 GetBufferMemoryRequirements2;
    PFN_vkGetBufferOpaqueCaptureAddress GetBufferOpaqueCaptureAddress;
    PFN_vkGetCalibratedTimestampsEXT GetCalibratedTimestampsEXT;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetDeferredOperationMaxConcurrencyKHR
        GetDeferredOperationMaxConcurrencyKHR;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetDeferredOperationResultKHR GetDeferredOperationResultKHR;
#endif
    PFN_vkGetDescriptorSetLayoutSupport GetDescriptorSetLayoutSupport;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetDeviceAccelerationStructureCompatibilityKHR
        GetDeviceAccelerationStructureCompatibilityKHR;
#endif
    PFN_vkGetDeviceGroupPeerMemoryFeatures GetDeviceGroupPeerMemoryFeatures;
    PFN_vkGetDeviceGroupPresentCapabilitiesKHR
        GetDeviceGroupPresentCapabilitiesKHR;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetDeviceGroupSurfacePresentModes2EXT
        GetDeviceGroupSurfacePresentModes2EXT;
#endif
    PFN_vkGetDeviceGroupSurfacePresentModesKHR
        GetDeviceGroupSurfacePresentModesKHR;
    PFN_vkGetDeviceMemoryCommitment GetDeviceMemoryCommitment;
    PFN_vkGetDeviceMemoryOpaqueCaptureAddress
        GetDeviceMemoryOpaqueCaptureAddress;
    PFN_vkGetDeviceQueue GetDeviceQueue;
    PFN_vkGetDeviceQueue2 GetDeviceQueue2;
    PFN_vkGetEventStatus GetEventStatus;
    PFN_vkGetFenceFdKHR GetFenceFdKHR;
    PFN_vkGetFenceStatus GetFenceStatus;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetFenceWin32HandleKHR GetFenceWin32HandleKHR;
#endif
    PFN_vkGetGeneratedCommandsMemoryRequirementsNV
        GetGeneratedCommandsMemoryRequirementsNV;
    PFN_vkGetImageDrmFormatModifierPropertiesEXT
        GetImageDrmFormatModifierPropertiesEXT;
    PFN_vkGetImageMemoryRequirements GetImageMemoryRequirements;
    PFN_vkGetImageMemoryRequirements2 GetImageMemoryRequirements2;
    PFN_vkGetImageSparseMemoryRequirements GetImageSparseMemoryRequirements;
    PFN_vkGetImageSparseMemoryRequirements2 GetImageSparseMemoryRequirements2;
    PFN_vkGetImageSubresourceLayout GetImageSubresourceLayout;
    PFN_vkGetImageViewAddressNVX GetImageViewAddressNVX;
    PFN_vkGetImageViewHandleNVX GetImageViewHandleNVX;
    PFN_vkGetMemoryFdKHR GetMemoryFdKHR;
    PFN_vkGetMemoryFdPropertiesKHR GetMemoryFdPropertiesKHR;
    PFN_vkGetMemoryHostPointerPropertiesEXT GetMemoryHostPointerPropertiesEXT;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryWin32HandleKHR GetMemoryWin32HandleKHR;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryWin32HandleNV GetMemoryWin32HandleNV;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryWin32HandlePropertiesKHR GetMemoryWin32HandlePropertiesKHR;
#endif
    PFN_vkGetPastPresentationTimingGOOGLE GetPastPresentationTimingGOOGLE;
    PFN_vkGetPerformanceParameterINTEL GetPerformanceParameterINTEL;
    PFN_vkGetPipelineCacheData GetPipelineCacheData;
    PFN_vkGetPipelineExecutableInternalRepresentationsKHR
        GetPipelineExecutableInternalRepresentationsKHR;
    PFN_vkGetPipelineExecutablePropertiesKHR GetPipelineExecutablePropertiesKHR;
    PFN_vkGetPipelineExecutableStatisticsKHR GetPipelineExecutableStatisticsKHR;
    PFN_vkGetPrivateDataEXT GetPrivateDataEXT;
    PFN_vkGetQueryPoolResults GetQueryPoolResults;
    PFN_vkGetQueueCheckpointDataNV GetQueueCheckpointDataNV;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR
        GetRayTracingCaptureReplayShaderGroupHandlesKHR;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetRayTracingShaderGroupHandlesKHR GetRayTracingShaderGroupHandlesKHR;
#endif
    PFN_vkGetRefreshCycleDurationGOOGLE GetRefreshCycleDurationGOOGLE;
    PFN_vkGetRenderAreaGranularity GetRenderAreaGranularity;
    PFN_vkGetSemaphoreCounterValue GetSemaphoreCounterValue;
    PFN_vkGetSemaphoreFdKHR GetSemaphoreFdKHR;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetSemaphoreWin32HandleKHR GetSemaphoreWin32HandleKHR;
#endif
    PFN_vkGetShaderInfoAMD GetShaderInfoAMD;
    PFN_vkGetSwapchainCounterEXT GetSwapchainCounterEXT;
    PFN_vkGetSwapchainImagesKHR GetSwapchainImagesKHR;
    PFN_vkGetSwapchainStatusKHR GetSwapchainStatusKHR;
    PFN_vkGetValidationCacheDataEXT GetValidationCacheDataEXT;
    PFN_vkImportFenceFdKHR ImportFenceFdKHR;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportFenceWin32HandleKHR ImportFenceWin32HandleKHR;
#endif
    PFN_vkImportSemaphoreFdKHR ImportSemaphoreFdKHR;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportSemaphoreWin32HandleKHR ImportSemaphoreWin32HandleKHR;
#endif
    PFN_vkInitializePerformanceApiINTEL InitializePerformanceApiINTEL;
    PFN_vkInvalidateMappedMemoryRanges InvalidateMappedMemoryRanges;
    PFN_vkMapMemory MapMemory;
    PFN_vkMergePipelineCaches MergePipelineCaches;
    PFN_vkMergeValidationCachesEXT MergeValidationCachesEXT;
    PFN_vkQueueBeginDebugUtilsLabelEXT QueueBeginDebugUtilsLabelEXT;
    PFN_vkQueueBindSparse QueueBindSparse;
    PFN_vkQueueEndDebugUtilsLabelEXT QueueEndDebugUtilsLabelEXT;
    PFN_vkQueueInsertDebugUtilsLabelEXT QueueInsertDebugUtilsLabelEXT;
    PFN_vkQueuePresentKHR QueuePresentKHR;
    PFN_vkQueueSetPerformanceConfigurationINTEL
        QueueSetPerformanceConfigurationINTEL;
    PFN_vkQueueSubmit QueueSubmit;
    PFN_vkQueueWaitIdle QueueWaitIdle;
    PFN_vkRegisterDeviceEventEXT RegisterDeviceEventEXT;
    PFN_vkRegisterDisplayEventEXT RegisterDisplayEventEXT;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkReleaseFullScreenExclusiveModeEXT ReleaseFullScreenExclusiveModeEXT;
#endif
    PFN_vkReleasePerformanceConfigurationINTEL
        ReleasePerformanceConfigurationINTEL;
    PFN_vkReleaseProfilingLockKHR ReleaseProfilingLockKHR;
    PFN_vkResetCommandBuffer ResetCommandBuffer;
    PFN_vkResetCommandPool ResetCommandPool;
    PFN_vkResetDescriptorPool ResetDescriptorPool;
    PFN_vkResetEvent ResetEvent;
    PFN_vkResetFences ResetFences;
    PFN_vkResetQueryPool ResetQueryPool;
    PFN_vkSetDebugUtilsObjectNameEXT SetDebugUtilsObjectNameEXT;
    PFN_vkSetDebugUtilsObjectTagEXT SetDebugUtilsObjectTagEXT;
    PFN_vkSetEvent SetEvent;
    PFN_vkSetHdrMetadataEXT SetHdrMetadataEXT;
    PFN_vkSetLocalDimmingAMD SetLocalDimmingAMD;
    PFN_vkSetPrivateDataEXT SetPrivateDataEXT;
    PFN_vkSignalSemaphore SignalSemaphore;
    PFN_vkTrimCommandPool TrimCommandPool;
    PFN_vkUninitializePerformanceApiINTEL UninitializePerformanceApiINTEL;
    PFN_vkUnmapMemory UnmapMemory;
    PFN_vkUpdateDescriptorSetWithTemplate UpdateDescriptorSetWithTemplate;
    PFN_vkUpdateDescriptorSets UpdateDescriptorSets;
    PFN_vkWaitForFences WaitForFences;
    PFN_vkWaitSemaphores WaitSemaphores;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkWriteAccelerationStructuresPropertiesKHR
        WriteAccelerationStructuresPropertiesKHR;
#endif
} device_dispatch_table_t;

void vk_load_instance_commands(VkInstance instance,
                               PFN_vkGetInstanceProcAddr gpa,
                               instance_dispatch_table_t* table);
void vk_load_device_commands(VkDevice device,
                             PFN_vkGetDeviceProcAddr gpa,
                             device_dispatch_table_t* table);
