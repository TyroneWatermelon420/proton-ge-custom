#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.6.10/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRTrackedCamera_IVRTrackedCamera_005.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraErrorNameFromEnum((vr::EVRTrackedCameraError)params->eCameraError);
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_005_HasCamera_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->HasCamera((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (bool *)params->pHasCamera);
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraFrameSize((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::EVRTrackedCameraFrameType)params->eFrameType, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight, (uint32_t *)params->pnFrameBufferSize);
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraIntrinsics((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (uint32_t)params->nCameraIndex, (vr::EVRTrackedCameraFrameType)params->eFrameType, (vr::HmdVector2_t *)params->pFocalLength, (vr::HmdVector2_t *)params->pCenter);
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraProjection((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (uint32_t)params->nCameraIndex, (vr::EVRTrackedCameraFrameType)params->eFrameType, (float)params->flZNear, (float)params->flZFar, (vr::HmdMatrix44_t *)params->pProjection);
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->AcquireVideoStreamingService((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::TrackedCameraHandle_t *)params->pHandle);
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->ReleaseVideoStreamingService((vr::TrackedCameraHandle_t)params->hTrackedCamera);
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer_params *params )
{
    CameraVideoStreamFrameHeader_t lin_pFrameHeader;
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_win_to_lin( params->pFrameHeader, &lin_pFrameHeader );
    uint32_t lin_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(lin_pFrameHeader) : 0;
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetVideoStreamFrameBuffer((vr::TrackedCameraHandle_t)params->hTrackedCamera, (vr::EVRTrackedCameraFrameType)params->eFrameType, (void *)params->pFrameBuffer, (uint32_t)params->nFrameBufferSize, params->pFrameHeader ? &lin_pFrameHeader : nullptr, lin_nFrameHeaderSize);
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_lin_to_win( &lin_pFrameHeader, params->pFrameHeader, params->nFrameHeaderSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetVideoStreamTextureSize((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::EVRTrackedCameraFrameType)params->eFrameType, (vr::VRTextureBounds_t *)params->pTextureBounds, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11_params *params )
{
    CameraVideoStreamFrameHeader_t lin_pFrameHeader;
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_win_to_lin( params->pFrameHeader, &lin_pFrameHeader );
    uint32_t lin_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(lin_pFrameHeader) : 0;
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetVideoStreamTextureD3D11((vr::TrackedCameraHandle_t)params->hTrackedCamera, (vr::EVRTrackedCameraFrameType)params->eFrameType, (void *)params->pD3D11DeviceOrResource, (void **)params->ppD3D11ShaderResourceView, params->pFrameHeader ? &lin_pFrameHeader : nullptr, lin_nFrameHeaderSize);
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_lin_to_win( &lin_pFrameHeader, params->pFrameHeader, params->nFrameHeaderSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL_params *params )
{
    CameraVideoStreamFrameHeader_t lin_pFrameHeader;
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_win_to_lin( params->pFrameHeader, &lin_pFrameHeader );
    uint32_t lin_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(lin_pFrameHeader) : 0;
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetVideoStreamTextureGL((vr::TrackedCameraHandle_t)params->hTrackedCamera, (vr::EVRTrackedCameraFrameType)params->eFrameType, (vr::glUInt_t *)params->pglTextureId, params->pFrameHeader ? &lin_pFrameHeader : nullptr, lin_nFrameHeaderSize);
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_lin_to_win( &lin_pFrameHeader, params->pFrameHeader, params->nFrameHeaderSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->ReleaseVideoStreamTextureGL((vr::TrackedCameraHandle_t)params->hTrackedCamera, (vr::glUInt_t)params->glTextureId);
}

#ifdef __cplusplus
}
#endif
