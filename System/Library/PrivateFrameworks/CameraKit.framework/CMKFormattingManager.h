/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMKFormattingManager : NSObject {

	BOOL _wantsCustomKerning;
	BOOL _supportsVerticalText;

}

@property (nonatomic,readonly) BOOL wantsCustomKerning;                //@synthesize wantsCustomKerning=_wantsCustomKerning - In the implementation block
@property (nonatomic,readonly) BOOL supportsVerticalText;              //@synthesize supportsVerticalText=_supportsVerticalText - In the implementation block
+(id)sharedManager;
-(id)init;
-(BOOL)wantsCustomKerning;
-(void)_commonCMKFormattingManagerInitialization;
-(BOOL)supportsVerticalText;
@end

