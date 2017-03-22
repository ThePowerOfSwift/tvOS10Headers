/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@interface IDSSocketPairAckMessage : IDSSocketPairMessage {

	unsigned _sequenceNumber;

}

@property (nonatomic,readonly) unsigned sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(unsigned)sequenceNumber;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithSequenceNumber:(unsigned)arg1 ;
-(unsigned char)command;
@end
