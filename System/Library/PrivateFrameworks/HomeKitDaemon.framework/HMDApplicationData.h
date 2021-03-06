/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@class NSMutableDictionary, NSString;

@interface HMDApplicationData : NSObject <NSSecureCoding, HMFDumpState> {

	NSMutableDictionary* _appDataDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * appDataDictionary;              //@synthesize appDataDictionary=_appDataDictionary - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(BOOL)isEmpty;
-(id)dumpState;
-(void)removeApplicationDataForIdentifier:(id)arg1 ;
-(void)setApplicationData:(id)arg1 forIdentifier:(id)arg2 ;
-(id)applicationDataForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)appDataDictionary;
-(void)setAppDataDictionary:(NSMutableDictionary *)arg1 ;
@end

