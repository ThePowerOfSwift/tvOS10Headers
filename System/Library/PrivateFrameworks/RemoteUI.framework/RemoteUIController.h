/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>
#import <libobjc.A.dylib/RUIParserDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol RemoteUIControllerDelegate;
@class RUINavigationController, NSMutableArray, NSMutableDictionary, RUIPage, NSString, UIViewController, RUILoader, NSURLSessionConfiguration, RUIStyle, NSUUID, UINavigationController, NSArray;

@interface RemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, RUIParserDelegate, UINavigationControllerDelegate> {

	RUINavigationController* _modalNavigationController;
	NSMutableArray* _objectModels;
	NSMutableArray* _modalObjectModels;
	NSMutableDictionary* _elementChangeHandlers;
	RUIPage* _pageOriginatingLoad;
	NSString* _listeningForSMSIdentifier;
	NSString* _SMSAutoFillToken;
	BOOL _testMode;
	UIViewController* _hostViewController;
	RUILoader* _loader;
	NSString* _userAgentString;
	id<RemoteUIControllerDelegate> _delegate;
	/*^block*/id _loadCompletion;
	NSURLSessionConfiguration* _sessionConfiguration;
	RUIStyle* _style;
	NSUUID* _UUID;

}

@property (nonatomic,copy) NSUUID * UUID;                                                       //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * hostViewController;                      //@synthesize hostViewController=_hostViewController - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController; 
@property (nonatomic,retain) RUILoader * loader;                                                //@synthesize loader=_loader - In the implementation block
@property (nonatomic,copy) NSString * userAgentString;                                          //@synthesize userAgentString=_userAgentString - In the implementation block
@property (assign,nonatomic,__weak) id<RemoteUIControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id loadCompletion;                                                   //@synthesize loadCompletion=_loadCompletion - In the implementation block
@property (nonatomic,copy) NSURLSessionConfiguration * sessionConfiguration;                    //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (nonatomic,retain) RUIStyle * style;                                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSArray * displayedPages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<RemoteUIControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<RemoteUIControllerDelegate>)delegate;
-(RUIStyle *)style;
-(NSUUID *)UUID;
-(void)setStyle:(RUIStyle *)arg1 ;
-(UINavigationController *)navigationController;
-(void)loadRequest:(id)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)loadRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHostViewController:(UIViewController *)arg1 ;
-(id)dismissObjectModelsAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHandlerForElementName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)loadData:(id)arg1 baseURL:(id)arg2 ;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(void)_enableTestMode;
-(void)_stopListeningForSMSAutoFill;
-(void)_loadURL:(id)arg1 fromObjectModel:(id)arg2 postBody:(id)arg3 ;
-(void)_loadURL:(id)arg1 postBody:(id)arg2 fromObjectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_didRemoveObjectModel:(id)arg1 ;
-(void)_willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)_removePreviousObjectModelsBackToIdentifier:(id)arg1 ;
-(void)_didPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(id)_objectModelStack;
-(void)_setHandlerWithKey:(id)arg1 forElementsMatching:(/*^block*/id)arg2 handler:(/*^block*/id)arg3 ;
-(id)setHandlerForElementsMatching:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_shouldAnimate;
-(void)refreshTopModelWithModel:(id)arg1 ;
-(void)_modalViewControllerWasPopped:(id)arg1 ;
-(void)_modalNavigationWasDismissed;
-(void)_beginListeningForSMSAutoFill;
-(id)parser:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_objectModels;
-(id)_modalObjectModels;
-(void)setHandlerForButtonsMatching:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setHandlerForButtonName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSString *)userAgentString;
-(void)setUserAgentString:(NSString *)arg1 ;
-(void)setSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(void)removeHandlerForKey:(id)arg1 ;
-(void)setLoader:(RUILoader *)arg1 ;
-(RUILoader *)loader;
-(void)setUUID:(NSUUID *)arg1 ;
-(UIViewController *)hostViewController;
-(void)setLoadCompletion:(id)arg1 ;
-(id)loadCompletion;
-(void)pushObjectModel:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 ;
-(NSArray *)displayedPages;
-(id)popObjectModelAnimated:(BOOL)arg1 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 topActionSignal:(id)arg3 ;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)sessionConfigurationForLoader:(id)arg1 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(id)viewControllerForAlertPresentation;
-(void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(BOOL)arg3 ;
-(void)objectModel:(id)arg1 elementDidChange:(id)arg2 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)objectModel:(id)arg1 shouldDisplayNamedElement:(id)arg2 page:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)objectModel:(id)arg1 willLoadLinkURL:(id)arg2 attributes:(id)arg3 ;
@end

