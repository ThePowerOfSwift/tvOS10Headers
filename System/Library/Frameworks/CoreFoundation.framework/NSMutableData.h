/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSMutableData : NSData

@property (readonly) void* mutableBytes; 
@property (assign) unsigned long long length; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dataWithLength:(unsigned long long)arg1 ;
+(id)dataWithCapacity:(unsigned long long)arg1 ;
-(BOOL)_isCompact;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(Class)classForCoder;
-(void)setData:(id)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void)appendData:(id)arg1 ;
-(void*)mutableBytes;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3 ;
@end
