/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSMapTable, NSArray;

@interface GKRuleSystem : NSObject {

	NSMutableDictionary* _state;
	NSMutableArray* _rules;
	NSMutableArray* _agenda;
	NSMutableArray* _toBeExecuted;
	NSMutableArray* _executed;
	NSMapTable* _gradeByFact;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain,readonly) NSArray * rules; 
@property (nonatomic,retain,readonly) NSArray * agenda; 
@property (nonatomic,retain,readonly) NSArray * executed; 
@property (nonatomic,retain,readonly) NSArray * facts; 
-(id)init;
-(NSMutableDictionary *)state;
-(void)reset;
-(void)addRule:(id)arg1 ;
-(void)evaluate;
-(NSArray *)rules;
-(void)_addRuleToAgenda:(id)arg1 ;
-(void)assertFact:(id)arg1 grade:(float)arg2 ;
-(void)retractFact:(id)arg1 grade:(float)arg2 ;
-(NSArray *)agenda;
-(NSArray *)executed;
-(void)addRulesFromArray:(id)arg1 ;
-(void)removeAllRules;
-(NSArray *)facts;
-(float)gradeForFact:(id)arg1 ;
-(float)minimumGradeForFacts:(id)arg1 ;
-(float)maximumGradeForFacts:(id)arg1 ;
-(void)assertFact:(id)arg1 ;
-(void)retractFact:(id)arg1 ;
@end
