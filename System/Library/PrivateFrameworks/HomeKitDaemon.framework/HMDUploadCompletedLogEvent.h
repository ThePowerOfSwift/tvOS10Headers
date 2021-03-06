/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSError;

@interface HMDUploadCompletedLogEvent : HMDLogEvent {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)uuid;
+(id)uploadCompletedWithError:(id)arg1 ;
-(NSError *)error;
-(id)initUploadWithError:(id)arg1 ;
@end

