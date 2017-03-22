/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <CloudDocs/CloudDocs-Structs.h>
@class NSURL, NSString, NSObject;

@interface BRCLogState : NSObject {

	asl_object_sRef _asl_store;
	asl_object_sRef _asl_client;
	NSURL* _directory;
	NSString* _basename;
	int _fd;
	NSObject*<OS_dispatch_source> _fdDeletionWatcher;

}

@property (nonatomic,retain) NSURL * directory;                //@synthesize directory=_directory - In the implementation block
@property (nonatomic,retain) NSString * basename;              //@synthesize basename=_basename - In the implementation block
+(id)defaultLogState;
-(id)init;
-(int)indentationLevel;
-(NSURL *)directory;
-(void)setDirectory:(NSURL *)arg1 ;
-(void)setBasename:(NSString *)arg1 ;
-(NSString *)basename;
-(void)_setLevel:(int)arg1 ;
-(void)closeLog;
-(void)openASLStoreIfNeeded;
-(const char*)currentSectionID;
-(void)logMsg:(int)arg1 facility:(const char*)arg2 func:(const char*)arg3 src:(const char*)arg4 lno:(int)arg5 msg:(const char*)arg6 aslmsg:(asl_object_sRef)arg7 ;
-(void)setPath:(const char*)arg1 base:(const char*)arg2 ;
@end
