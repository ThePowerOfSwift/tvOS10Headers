/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)isPowerRequired;
-(BOOL)isDownloadAllowableForCellular;
-(unsigned long long)wifiOnlyPeriodInDays;
-(id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1 ;
@end

