/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AceObject;


@protocol SiriUIViewController <NSObject>
@property (nonatomic,retain) AceObject * aceObject; 
@optional
-(double)desiredHeightForWidth:(double)arg1;
-(id)navigationTitle;
-(void)endEditingAndCorrect:(BOOL)arg1;
-(void)endEditingAndCorrectByTouchPoint:(CGPoint)arg1;
-(void)handleChangeUtteranceCommand:(id)arg1;
-(void)siriDidScrollVisible:(BOOL)arg1;
-(double)desiredHeight;

@required
-(AceObject *)aceObject;
-(void)setAceObject:(id)arg1;
-(void)siriWillActivateFromSource:(long long)arg1;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;

@end

