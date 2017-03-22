/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHPhoneBookManagerProtocol <NSObject>
@required
+(id)get;
-(id)getRecordId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(BOOL)arg3;
-(BOOL)isABContactASuggestion;
-(id)getPersonsNameForRecord:(const void*)arg1;
-(id)getLocalizedCallerIdLabelForRecord:(const void*)arg1 withMultiValueId:(id)arg2 withCallerIdIsEmail:(BOOL)arg3;

@end
