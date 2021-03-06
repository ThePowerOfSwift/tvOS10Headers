/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding> {

	SCD_Struct_GE26 _originalCoordinate;
	double _params[9];
	double _radius;
	BOOL _shouldUsePolyShiftFunction;

}

@property (assign,nonatomic) SCD_Struct_GE26 originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE26)arg2 ;
-(SCD_Struct_GE26)shiftedCoordinateForCoordinate:(SCD_Struct_GE26)arg1 accuracy:(double*)arg2 ;
-(BOOL)isValidForCoordinate:(SCD_Struct_GE26)arg1 ;
-(SCD_Struct_GE26)originalCoordinate;
-(void)setOriginalCoordinate:(SCD_Struct_GE26)arg1 ;
@end

