/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface ABMemberNameViewCache : NSObject {

	NSCache* _styleProvidersCache;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)memberNameRegularFontForStyleProvider:(id)arg1 ;
-(id)regularTextAttributesForStyleProvider:(id)arg1 ;
-(id)boldTextAttributesForStyleProvider:(id)arg1 ;
-(id)placeholderTextAttributesForStyleProvider:(id)arg1 ;
-(id)_cacheForStyleProvider:(id)arg1 ;
-(id)memberNameBoldFontForStyleProvider:(id)arg1 ;
-(id)memberNamePlaceholderFontForStyleProvider:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

