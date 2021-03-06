/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLXPCTransaction : NSObject {

	const char* _identifier;

}
+(void)initialize;
+(id)callStackSymbols;
+(void)_startTrackingTransaction:(id)arg1 ;
+(void)_stopTrackingTransaction:(id)arg1 ;
+(void)discardCallStackSymbols:(id)arg1 ;
+(id)openXPCTransactionStatus;
+(id)transaction:(const char*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithIdentifier:(const char*)arg1 ;
-(id)_statusDescription;
-(void)stillAlive;
@end

