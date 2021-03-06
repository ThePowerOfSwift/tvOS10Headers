/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class MPStoreUserEnvironment;

@interface MPStoreModelRequest : MPModelRequest {

	BOOL _didSetTimeoutInterval;
	MPStoreUserEnvironment* _userEnvironment;
	double _timeoutInterval;

}

@property (nonatomic,copy) MPStoreUserEnvironment * userEnvironment;              //@synthesize userEnvironment=_userEnvironment - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(MPStoreUserEnvironment *)userEnvironment;
-(void)setUserEnvironment:(MPStoreUserEnvironment *)arg1 ;
@end

