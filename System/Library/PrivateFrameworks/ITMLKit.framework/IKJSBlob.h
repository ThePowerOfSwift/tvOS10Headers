/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSBlob.h>

@protocol IKJSBlob <JSExport>
@end


@class NSData;

@interface IKJSBlob : IKJSObject <IKJSBlob> {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data; 
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
@end

