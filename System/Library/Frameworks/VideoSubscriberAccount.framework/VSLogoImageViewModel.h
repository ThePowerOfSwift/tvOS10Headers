/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSItemProvider, UIImage, NSString;


@protocol VSLogoImageViewModel <NSObject>
@property (nonatomic,retain) NSItemProvider * logoProvider; 
@property (nonatomic,retain) UIImage * logo; 
@property (nonatomic,copy) NSString * logoAccessibilityLabel; 
@required
-(UIImage *)logo;
-(void)setLogo:(id)arg1;
-(void)setLogoProvider:(id)arg1;
-(NSItemProvider *)logoProvider;
-(NSString *)logoAccessibilityLabel;
-(void)setLogoAccessibilityLabel:(id)arg1;

@end
