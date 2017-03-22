/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PAEKeyerAutokeySetup, PAEKeyerHistogram;

@interface PAEKeyerAutokeySetupUtil : NSObject {

	id _apiManager;
	PAEKeyerAutokeySetup* _autokeySetup;
	PAEKeyerHistogram* _keyerHistogram;
	id _actionAPI;
	id _getAPI;
	id _setAPI;

}
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(void)getDataFromDB;
-(id)getInitialSamples;
-(ColorHisto*)getHistogram;
-(void)delInitialSample:(int)arg1 ;
-(void)fillAutokeySamplesArray:(vector<Vec3f, std::__1::allocator<Vec3f> >*)arg1 ;
-(int)getSamplesNb;
-(Vec3f)getInitialSample:(int)arg1 ;
-(void)clearInitialSamples;
-(void)addInitialSample:(Vec3f*)arg1 ;
-(void)setHistogram:(ColorHisto*)arg1 ;
-(void)syncWithDBAsDefault;
-(void)syncWithDB;
@end
