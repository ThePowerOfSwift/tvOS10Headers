/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INRequestRideIntentExport.h>

@class CLPlacemark, INSpeakableString, NSNumber, INPaymentMethod, NSString;

@interface INRequestRideIntent : INIntent <INRequestRideIntentExport>

@property (nonatomic,copy,readonly) CLPlacemark * pickupLocation; 
@property (nonatomic,copy,readonly) CLPlacemark * dropOffLocation; 
@property (nonatomic,copy,readonly) INSpeakableString * rideOptionName; 
@property (nonatomic,copy,readonly) NSNumber * partySize; 
@property (nonatomic,copy,readonly) INPaymentMethod * paymentMethod; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)_dictionaryRepresentation;
-(NSNumber *)partySize;
-(void)setPartySize:(NSNumber *)arg1 ;
-(id)_metadata;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(INPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(INPaymentMethod *)arg1 ;
-(void)setPickupLocation:(CLPlacemark *)arg1 ;
-(void)setDropOffLocation:(CLPlacemark *)arg1 ;
-(void)setRideOptionName:(INSpeakableString *)arg1 ;
-(CLPlacemark *)pickupLocation;
-(CLPlacemark *)dropOffLocation;
-(INSpeakableString *)rideOptionName;
-(id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5 ;
@end

