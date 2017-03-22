/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class ATFileBuffer, NSObject, NSPipe, NSFileHandle;

@interface ATFileBufferedPipe : NSObject {

	ATFileBuffer* _buffer;
	NSObject*<OS_dispatch_queue> _queue;
	NSPipe* _inputPipe;
	NSPipe* _outputPipe;
	NSObject*<OS_dispatch_source> _writeSource;
	NSObject*<OS_dispatch_source> _readSource;
	BOOL _readyForData;
	BOOL _readyToClose;
	NSFileHandle* _fileHandleForReading;
	NSFileHandle* _fileHandleForWriting;

}

@property (retain,readonly) NSFileHandle * fileHandleForReading;              //@synthesize fileHandleForReading=_fileHandleForReading - In the implementation block
@property (retain,readonly) NSFileHandle * fileHandleForWriting;              //@synthesize fileHandleForWriting=_fileHandleForWriting - In the implementation block
+(id)pipe;
-(NSFileHandle *)fileHandleForReading;
-(NSFileHandle *)fileHandleForWriting;
-(id)init;
-(void)_outputReadyForWriting:(unsigned long long)arg1 ;
-(void)_inputReadyForReading:(unsigned long long)arg1 ;
-(id)_bufferedWrite:(id)arg1 ;
@end
