/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureDeviceInputInternal, AVCaptureDevice;

@interface AVCaptureDeviceInput : AVCaptureInput {

	AVCaptureDeviceInputInternal* _internal;

}

@property (nonatomic,readonly) AVCaptureDevice * device; 
+(void)initialize;
+(id)deviceInputWithDevice:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(OpaqueCMClockRef)clock;
-(id)ports;
-(id)initWithDevice:(id)arg1 error:(id*)arg2 ;
-(BOOL)_authorizedToUseDevice:(id)arg1 ;
-(void)_sourceFormatDidChange:(opaqueCMFormatDescriptionRef)arg1 ;
-(int)_requestCameraRecordPermissionForDevice:(id)arg1 ;
-(id)notReadyError;
-(AVCaptureDevice *)device;
@end
