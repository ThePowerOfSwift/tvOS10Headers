/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary;

@interface SBIconDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) long long maxIconListCount; 
@property (assign,nonatomic) BOOL didShowIconReorderAlert; 
@property (nonatomic,readonly) BOOL shouldDisableLiveIcons; 
@property (nonatomic,readonly) NSDictionary * legacyIconState; 
@property (nonatomic,readonly) NSDictionary * legacyIconState2; 
-(void)setLegacyIconState:(NSDictionary *)arg1 ;
-(NSDictionary *)legacyIconState;
-(void)setShouldDisableLiveIcons:(BOOL)arg1 ;
-(BOOL)shouldDisableLiveIcons;
-(void)setDidShowIconReorderAlert:(BOOL)arg1 ;
-(BOOL)didShowIconReorderAlert;
-(void)setMaxIconListCount:(long long)arg1 ;
-(long long)maxIconListCount;
-(void)setLegacyIconState2:(NSDictionary *)arg1 ;
-(NSDictionary *)legacyIconState2;
-(void)_bindAndRegisterDefaults;
-(void)clearLegacyDefaults;
@end
