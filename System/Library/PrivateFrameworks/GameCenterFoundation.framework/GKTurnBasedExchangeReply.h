/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKTurnBasedParticipant, GKTurnBasedExchangeReplyInternal, GKTurnBasedMatch, NSData, NSString, NSDate;

@interface GKTurnBasedExchangeReply : NSObject {

	GKTurnBasedParticipant* _recipient;
	GKTurnBasedExchangeReplyInternal* _internal;
	GKTurnBasedMatch* _matchWeak;

}

@property (nonatomic,retain) GKTurnBasedParticipant * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,retain) NSData * data; 
@property (retain) GKTurnBasedExchangeReplyInternal * internal;               //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) GKTurnBasedMatch * match;                        //@synthesize matchWeak=_matchWeak - In the implementation block
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) NSDate * replyDate; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)message;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(GKTurnBasedParticipant *)recipient;
-(void)setRecipient:(GKTurnBasedParticipant *)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKTurnBasedExchangeReplyInternal *)arg1 ;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(GKTurnBasedMatch *)match;
-(GKTurnBasedExchangeReplyInternal *)internal;
@end
