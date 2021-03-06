/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol GEOEncyclopedicInfo, MKPlaceCardEncyclopedicControllerDelegate;
@class MKPlaceTextBlockCell, NSMutableArray, NSString;

@interface MKPlaceEncyclopedicViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate> {

	BOOL _textBlockExpanded;
	MKPlaceTextBlockCell* _textCell;
	NSMutableArray* _factoidCells;
	id<GEOEncyclopedicInfo> _encyclopedicInfo;
	id<MKPlaceCardEncyclopedicControllerDelegate> _encyclopedicControllerDelegate;

}

@property (nonatomic,retain) id<GEOEncyclopedicInfo> encyclopedicInfo;                                                         //@synthesize encyclopedicInfo=_encyclopedicInfo - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardEncyclopedicControllerDelegate> encyclopedicControllerDelegate;              //@synthesize encyclopedicControllerDelegate=_encyclopedicControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
-(id)infoCardChildPossibleActions;
-(void)setEncyclopedicInfo:(id<GEOEncyclopedicInfo>)arg1 ;
-(void)_viewEncyclopedicContent;
-(id)_factoids;
-(id)_textBlockTitle;
-(id)_textBlockText;
-(id<MKPlaceCardEncyclopedicControllerDelegate>)encyclopedicControllerDelegate;
-(void)setEncyclopedicControllerDelegate:(id<MKPlaceCardEncyclopedicControllerDelegate>)arg1 ;
-(void)_updateViews;
@end

