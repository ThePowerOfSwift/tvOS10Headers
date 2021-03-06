/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface NSFilePromiseWriteToken : NSObject {

	NSURL* promiseURL;
	NSURL* logicalURL;

}

@property (copy) NSURL * promiseURL; 
@property (copy) NSURL * logicalURL; 
-(NSURL *)logicalURL;
-(void)setPromiseURL:(NSURL *)arg1 ;
-(void)setLogicalURL:(NSURL *)arg1 ;
-(NSURL *)promiseURL;
-(void)dealloc;
@end

