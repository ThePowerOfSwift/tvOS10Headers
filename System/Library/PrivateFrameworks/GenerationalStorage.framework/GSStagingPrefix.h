/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSData;

@interface GSStagingPrefix : NSObject {

	unsigned char _volumeUUID[16];
	int _deviceID;
	NSString* _path;
	NSArray* _pathComponents;
	NSData* _extension;
	long long _sandboxHandle;

}
-(void)finalize;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)_connectionWithDaemonWasLost;
-(void)_invalidate:(BOOL)arg1 ;
-(BOOL)_refreshWithError:(id*)arg1 ;
-(id)initWithDocumentID:(id)arg1 ;
-(id)stagingPathforCreatingAdditionWithError:(id*)arg1 ;
-(BOOL)isStagedPath:(id)arg1 ;
-(void)cleanupStagingPath:(id)arg1 ;
@end
