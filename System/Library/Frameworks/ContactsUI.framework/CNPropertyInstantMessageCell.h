/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@interface CNPropertyInstantMessageCell : CNPropertySimpleTransportCell {

	id _action;

}

@property (nonatomic,retain) id action;              //@synthesize action=_action - In the implementation block
-(id)action;
-(void)setAction:(id)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(void)updateTransportButtons;
-(void)transportButton1Clicked:(id)arg1 ;
@end
