/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface PSSubtitleDisclosureTableCell : PSTableCell {

	UILabel* _valueLabel;

}
+(long long)cellStyle;
-(void)layoutSubviews;
-(BOOL)canReload;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)_valueLabelForSpecifier:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end
