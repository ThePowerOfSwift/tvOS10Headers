/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CNBufferingStrategy.h>

@class NSString;

@interface _CNSpatialBufferingStrategy : NSObject <_CNBufferingStrategy> {

	unsigned long long _capacity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3 ;
-(void)bufferDidSendResults:(id)arg1 ;
@end
