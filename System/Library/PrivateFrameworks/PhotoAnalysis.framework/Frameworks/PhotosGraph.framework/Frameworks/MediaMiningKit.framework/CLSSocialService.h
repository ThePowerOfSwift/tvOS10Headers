/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary;

@interface CLSSocialService : NSObject {

	NSURL* _proxyURL;
	NSMutableDictionary* _proxy;
	unsigned long long _intent;

}

@property (readonly) unsigned long long intent;              //@synthesize intent=_intent - In the implementation block
+(id)socialService;
-(id)init;
-(unsigned long long)intent;
-(id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2 ;
-(void)setProxiedValue:(id)arg1 forKey:(id)arg2 ;
-(id)proxiedValueForKey:(id)arg1 ;
-(id)eventsOperationForDates:(id)arg1 inInvestigation:(id)arg2 ;
-(void)invalidateMemoryCaches;
-(id)eventsOperationForClueCollection:(id)arg1 ;
-(id)mePerson;
-(id)personsOperationForLocations:(id)arg1 inInvestigation:(id)arg2 ;
-(id)personsOperationForName:(id)arg1 inInvestigation:(id)arg2 inPhotoLibrary:(id)arg3 ;
-(id)_meRecords;
-(id)_allPersons;
-(id)_mePersons;
-(float)_confidenceInPersonRecord:(id)arg1 forName:(id)arg2 components:(id)arg3 ;
-(float)_fuzzyMatchingScoreBetweenNameComponents:(id)arg1 andNameComponents:(id)arg2 ;
-(id)_allPersonRecords;
-(id)_fullNameForPersonRecord:(id)arg1 ;
-(id)_firstNameForPersonRecord:(id)arg1 ;
-(id)_lastNameForPersonRecord:(id)arg1 ;
-(id)_nicknameForPersonRecord:(id)arg1 ;
-(id)_maidenNameForPersonRecord:(id)arg1 ;
-(void)flushProxy;
-(void)_fetchPersonRecordsForName:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

