/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNAvatarCardController.h>
#import <libobjc.A.dylib/CNAvatarCardViewControllerDelegate.h>
#import <UIKit/UIAlertControllerSystemProvidedPresentationDelegate.h>

@class CNAvatarCardViewController, UIAlertController, NSString;

@interface CNAvatarCardHybridController : CNAvatarCardController <CNAvatarCardViewControllerDelegate, UIAlertControllerSystemProvidedPresentationDelegate> {

	CNAvatarCardViewController* _cardViewController;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) CNAvatarCardViewController * cardViewController;              //@synthesize cardViewController=_cardViewController - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                          //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setSourceView:(id)arg1 ;
-(BOOL)isVisible;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(BOOL)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(CGPoint)arg2 ;
-(UIAlertController *)alertController;
-(void)_didBeginSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setContacts:(id)arg1 ;
-(void)cardViewControllerDidUpdatePreferredSize:(id)arg1 ;
-(id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)cardViewController:(id)arg1 willShowActions:(id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setupCardViewControllerWithContacts:(id)arg1 ;
-(CNAvatarCardViewController *)cardViewController;
-(void)setCardViewController:(CNAvatarCardViewController *)arg1 ;
-(void)_setupAlertController;
-(void)_prepareAlertController;
-(void)cardViewControllerWillDismiss:(id)arg1 ;
-(void)cardViewControllerDidDismiss:(id)arg1 ;
-(id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1 ;
@end

