/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <MobileCoreServices/_LSDService.h>

@interface _LSDDeviceIdentifierService : _LSDService
+(void)clearIdentifiersForUninstallationWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(void)generateIdentifiersForInstallationWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(id)vendorNameForDeviceIdentifiersWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(Class)clientClass;
+(id)XPCInterface;
+(unsigned short)connectionType;
+(id)dispatchQueue;
@end

