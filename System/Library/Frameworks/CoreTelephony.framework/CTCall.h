/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CTCall : NSObject {

	NSString* _callState;
	NSString* _callID;

}

@property (nonatomic,copy,readonly) NSString * callState;              //@synthesize callState=_callState - In the implementation block
@property (nonatomic,copy,readonly) NSString * callID;                 //@synthesize callID=_callID - In the implementation block
-(NSString *)callID;
-(NSString *)callState;
@end
