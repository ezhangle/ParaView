/*=========================================================================
  
  Program:   Widgets
  Module:    vtkKWEvent.h
  Language:  C++
  Date:      $Date$
  Version:   $Revision$
  
Copyright (c) 2000-2001 Kitware Inc. 469 Clifton Corporate Parkway,
Clifton Park, NY, 12065, USA.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.

 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

 * Neither the name of Kitware nor the names of any contributors may be used
   to endorse or promote products derived from this software without specific 
   prior written permission.

 * Modified source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS''
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

=========================================================================*/
// .NAME vtkKWEvent - Event enumeration.

#ifndef __vtkKWEvent_h
#define __vtkKWEvent_h


#include "vtkKWObject.h"

class VTK_EXPORT vtkKWEvent
{
  public:
  static const char* GetStringFromEventId(unsigned long event);
  enum {
    KWWidgetEvents = 2000,
    MessageDialogInvokeEvent,
    // VV    
    WindowLevelChangedEvent,
    WindowLevelChangingEvent,
    WindowLevelChangedImageCompositeEvent,
    WindowLevelChangingImageCompositeEvent,
    ViewSelectedEvent,
    ColorImageEvent,
    GradientOpacityFunctionChangedEvent,
    GradientOpacityStateChangedEvent,
    GrayScaleImageEvent,
    InteractiveRenderStartEvent,
    LeftMouseOptionChangedEvent,
    Cursor3DVisibilityChangedEvent,
    Cursor3DPositionChangedEvent,
    Cursor3DPositionChangingEvent,
    CursorInteractivityChangedEvent,
    Cursor3DTypeChangedEvent,
    Cursor3DXColorChangedEvent,
    Cursor3DYColorChangedEvent,
    Cursor3DZColorChangedEvent,
    CroppingRegionsVisibilityChangedEvent,
    CroppingPlanesPositionChangedEvent,
    CroppingRegionFlagsChangedEvent,
    ScaleBarVisibilityChangedEvent,
    DistanceVisibilityChangedEvent,
    AngleVisibilityChangedEvent,
    MiddleMouseOptionChangedEvent,
    MultiPassStillRenderEndEvent,
    MultiPassStillRenderStageChangedEvent,
    OrthoImageCameraResetEvent,
    OrthoImageZoomFactorChangedEvent,
    ProbeInformationChangedEvent,
    RightMouseOptionChangedEvent,
    ScalarColorFunctionChangedEvent,
    ScalarOpacityFunctionChangedEvent,
    ShiftLeftMouseOptionChangedEvent,
    ShiftMiddleMouseOptionChangedEvent,
    ShiftRightMouseOptionChangedEvent,
    ControlLeftMouseOptionChangedEvent,
    ControlMiddleMouseOptionChangedEvent,
    ControlRightMouseOptionChangedEvent,
    EnableShadingEvent,
    AmbientChangedEvent,
    DiffuseChangedEvent,
    SpecularChangedEvent,
    SpecularPowerChangedEvent,
    TransferFunctionsChangedEvent,
    TransferFunctionsChangingEvent,
    ContourAnnotationAddEvent,
    ContourAnnotationRemoveEvent,
    ContourAnnotationChangeColorEvent,
    ContourAnnotationChangeLineWidthEvent,
    BackgroundColorChangedEvent,
    AnnotationColorChangedEvent,
    ChangeProjectionEvent,
    PerspectiveViewAngleChangedEvent,
    LightboxResolutionChangedEvent,
    ChangePrinterDPIEvent,
    ChangeMouseOperationsEvent,
    ChangeStandardInteractivityEvent,
    SwitchToVolumeProEvent,
    ViewAnnotationChangedEvent,
    // PV
    InitializeTraceEvent,
    ErrorMessageEvent,
    WarningMessageEvent,
    ManipulatorModifiedEvent,
    WidgetModifiedEvent,
    // 
    FinalBogusNotUsedEvent
  };
};

#endif


