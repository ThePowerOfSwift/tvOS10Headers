/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CNiOSABConstantsMapping : NSObject {

	NSDictionary* _mapping;
	id _defaultConstant;

}

@property (nonatomic,retain) NSDictionary * mapping;              //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,retain) id defaultConstant;                  //@synthesize defaultConstant=_defaultConstant - In the implementation block
+(id)CNToABSourceTypeConstantsMapping;
+(id)ABToCNContainerTypeConstantsMapping;
+(id)ABtoCNContactDisplayNameOrderConstantsMapping;
+(id)CNToABCompositeNameFormatConstantsMapping;
+(id)ABToCNContactSortOrderConstantsMapping;
+(id)CNToABPersonShortNameFormatConstantsMapping;
+(id)ABToCNContactShortNameFormatConstantsMapping;
+(id)ABToCNLabelConstantsMapping;
+(id)CNToABLabelConstantsMapping;
+(id)ABToCNPersonInstantMessageConstantsMapping;
+(id)CNToABPersonInstantMessageConstantsMapping;
+(id)ABToCNPersonSocialProfileConstantsMapping;
+(id)CNToABPersonSocialProfileConstantsMapping;
+(id)CNToABPersonSortOrderingConstantsMapping;
+(id)ABToCNPersonKindConstantsMapping;
+(id)ABToCNPersonAddressConstantsMapping;
+(id)CNToABPersonKindConstantsMapping;
+(id)CNToABPersonAddressConstantsMapping;
-(void)dealloc;
-(id)mappedConstant:(id)arg1 ;
-(id)initWithMapping:(id)arg1 ;
-(id)invertedMapping;
-(void)setDefaultConstant:(id)arg1 ;
-(id)defaultConstant;
-(NSDictionary *)mapping;
-(void)setMapping:(NSDictionary *)arg1 ;
@end

