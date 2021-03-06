/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDP/CoreCDP-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSNumber;

@interface CDPDevice : NSObject <NSSecureCoding, NSCopying> {

	NSString* _localizedName;
	NSString* _model;
	NSString* _modelVersion;
	NSString* _modelClass;
	unsigned long long _platform;
	NSString* _recordID;
	NSString* _machineID;
	NSDate* _recordDate;
	BOOL _hasRandomSecret;
	BOOL _hasNumericSecret;
	NSNumber* _numericSecretLength;
	BOOL _isUsingMultipleiCSC;
	unsigned long long _remainingAttempts;
	NSString* _deviceColor;
	NSString* _enclosureColor;
	NSString* _serialNumber;
	BOOL _isCurrentDevice;
	NSString* _localizedDescription;
	unsigned long long _recoveryStatus;
	NSNumber* _coolOffPeriod;

}

@property (nonatomic,copy) NSString * localizedName;                            //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * modelVersion;                             //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,copy) NSString * modelClass;                               //@synthesize modelClass=_modelClass - In the implementation block
@property (assign,nonatomic) unsigned long long platform;                       //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSString * recordID;                                 //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy) NSString * machineID;                                //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,copy) NSDate * recordDate;                                 //@synthesize recordDate=_recordDate - In the implementation block
@property (assign,nonatomic) BOOL hasRandomSecret;                              //@synthesize hasRandomSecret=_hasRandomSecret - In the implementation block
@property (assign,nonatomic) BOOL hasNumericSecret;                             //@synthesize hasNumericSecret=_hasNumericSecret - In the implementation block
@property (nonatomic,copy) NSNumber * numericSecretLength;                      //@synthesize numericSecretLength=_numericSecretLength - In the implementation block
@property (assign,nonatomic) BOOL isUsingMultipleiCSC;                          //@synthesize isUsingMultipleiCSC=_isUsingMultipleiCSC - In the implementation block
@property (assign,nonatomic) unsigned long long remainingAttempts;              //@synthesize remainingAttempts=_remainingAttempts - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                             //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) BOOL isCurrentDevice;                              //@synthesize isCurrentDevice=_isCurrentDevice - In the implementation block
@property (assign,nonatomic) unsigned long long recoveryStatus;                 //@synthesize recoveryStatus=_recoveryStatus - In the implementation block
@property (nonatomic,retain) NSNumber * coolOffPeriod;                          //@synthesize coolOffPeriod=_coolOffPeriod - In the implementation block
@property (nonatomic,copy) NSString * deviceColor;                              //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,copy) NSString * enclosureColor;                           //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (nonatomic,readonly) unsigned long long localSecretType; 
@property (nonatomic,copy) NSString * localizedDescription;                     //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(NSString *)localizedName;
-(void)setModelVersion:(NSString *)arg1 ;
-(NSString *)modelVersion;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)machineID;
-(void)setMachineID:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(NSDate *)recordDate;
-(void)setHasNumericSecret:(BOOL)arg1 ;
-(void)setNumericSecretLength:(NSNumber *)arg1 ;
-(void)setIsUsingMultipleiCSC:(BOOL)arg1 ;
-(void)setIsCurrentDevice:(BOOL)arg1 ;
-(NSNumber *)coolOffPeriod;
-(void)setModelClass:(NSString *)arg1 ;
-(NSString *)modelClass;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)recordID;
-(unsigned long long)platform;
-(void)setPlatform:(unsigned long long)arg1 ;
-(BOOL)hasNumericSecret;
-(NSNumber *)numericSecretLength;
-(BOOL)hasRandomSecret;
-(unsigned long long)localSecretType;
-(void)setRecoveryStatus:(unsigned long long)arg1 ;
-(void)setCoolOffPeriod:(NSNumber *)arg1 ;
-(unsigned long long)recoveryStatus;
-(unsigned long long)remainingAttempts;
-(void)setRemainingAttempts:(unsigned long long)arg1 ;
-(void)setRecordDate:(NSDate *)arg1 ;
-(void)setHasRandomSecret:(BOOL)arg1 ;
-(BOOL)isUsingMultipleiCSC;
-(BOOL)isCurrentDevice;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)enclosureColor;
-(void)setEnclosureColor:(NSString *)arg1 ;
@end

