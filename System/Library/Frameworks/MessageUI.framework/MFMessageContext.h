/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSArray, MFMessagePayload;


@protocol MFMessageContext <NSObject>
@property (nonatomic,readonly) NSUUID * senderIdentifier; 
@property (nonatomic,readonly) NSArray * recipientIdentifiers; 
@property (nonatomic,readonly) MFMessagePayload * inputMessagePayload; 
@required
-(NSArray *)recipientIdentifiers;
-(void)updateMessagePayload:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)insertText:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)insertImage:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)insertMediaAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)insertStickerWithImage:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)insertStickerWithMediaAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSUUID *)senderIdentifier;
-(MFMessagePayload *)inputMessagePayload;

@end

