/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPlatform : NSObject
+(void)setIsRunningInGeod:(BOOL)arg1 ;
+(id)sharedPlatform;
-(id)buildVersion;
-(id)clientCapabilities;
-(id)hardwareIdentifier;
-(id)osVersion;
-(BOOL)isInternalInstall;
-(id)productName;
-(BOOL)_deviceSupportsNavigation;
-(BOOL)mapsFeatureFreedomEnabled;
-(BOOL)supportsRealisticTiles;
-(BOOL)supportsNavigation;
-(BOOL)supportsNewiOS9Features;
-(BOOL)supportsForceTouch;
-(long long)deviceScreenWidthInPixels;
-(long long)deviceScreenHeightInPixels;
-(double)deviceScreenScale;
@end

