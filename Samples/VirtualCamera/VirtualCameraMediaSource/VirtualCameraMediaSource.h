//
// Copyright (C) Microsoft Corporation. All rights reserved.
//

#pragma once
#ifndef VIRTUALCAMERA_MEDIASOURCE_H
#define VIRTUALCAMERA_MEDIASOURCE_H

#include <initguid.h>

// {7B89B92E-FE71-42D0-8A41-E137D06EA184}
DEFINE_GUID(CLSID_VirtualCameraMediaSource ,
    0x7b89b92e, 0xfe71, 0x42d0, 0x8a, 0x41, 0xe1, 0x37, 0xd0, 0x6e, 0xa1, 0x84);

static LPCWSTR VIRTUALCAMERAMEDIASOURCE_CLSID = L"{7B89B92E-FE71-42D0-8A41-E137D06EA184}";
static LPCWSTR VIRTUALCAMERAMEDIASOURCE_FRIENDLYNAME = L"VirtualCameraMediaSource";

// {3C31A5F8-2795-4FB9-A0A1-C733A65C0CE8}
// VirtualCameraMediaSource activation attributes.
// The value of this attribute is the physical camera symboliclink name that the VirtualCameraMediaSource
// will be using.
DEFINE_GUID(VCAM_DEVICE_INFO,
    0x3c31a5f8, 0x2795, 0x4fb9, 0xa0, 0xa1, 0xc7, 0x33, 0xa6, 0x5c, 0xc, 0xe8);

// Example Custom Property implemented by SimpleMediaSource
// 
// {0CE2EF73-4800-4F53-9B8E-8C06790FC0C7}
static const GUID PROPSETID_SIMPLEMEDIASOURCE_CUSTOMCONTROL =
{ 0xce2ef73, 0x4800, 0x4f53, { 0x9b, 0x8e, 0x8c, 0x6, 0x79, 0xf, 0xc0, 0xc7 } };

enum
{
    KSPROPERTY_SIMPLEMEDIASOURCE_CUSTOMCONTROL_COLORMODE = 0,
    KSPROPERTY_SIMPLEMEDIASOURCE_CUSTOMCONTROL_END  // all ids must be defined before this.
};

#define KSPROPERTY_SIMPLEMEDIASOURCE_CUSTOMCONTROL_COLORMODE_GRAYSCALE        0x00FFFFFFL
#define KSPROPERTY_SIMPLEMEDIASOURCE_CUSTOMCONTROL_COLORMODE_RED              0x00FF0000L
#define KSPROPERTY_SIMPLEMEDIASOURCE_CUSTOMCONTROL_COLORMODE_GREEN            0x0000FF00L
#define KSPROPERTY_SIMPLEMEDIASOURCE_CUSTOMCONTROL_COLORMODE_BLUE             0x000000FFL

typedef struct {
    ULONG      StreamId;
    ULONG      ColorMode;
} KSPROPERTY_SIMPLEMEDIASOURCE_CUSTOMCONTROL_COLORMODE_S, * PKSPROPERTY_SIMPLEMEDIASOURCE_CUSTOMCONTROL_COLORMODE_S;

#endif