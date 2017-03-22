/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactContentViewController.h>

@class ABContactView, ABContactHeaderView;

@interface ABContactViewController : CNContactContentViewController

@property (nonatomic,readonly) ABContactView * contactView; 
@property (nonatomic,readonly) ABContactHeaderView * contactHeaderView; 
@property (assign,nonatomic) id<ABContactViewControllerDelegate> contactDelegate; 
-(id)cardGroupForProperty:(id)arg1 ;
-(void)applyStyleProvider:(id)arg1 ;
@end
