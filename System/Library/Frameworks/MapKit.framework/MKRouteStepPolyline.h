/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPolyline.h>

@class MKRoutePolyline;

@interface MKRouteStepPolyline : MKPolyline {

	MKRoutePolyline* _fullRoute;

}
-(void)dealloc;
-(CLLocationCoordinate2D)coordinate;
-(id)_initWithRoute:(id)arg1 range:(NSRange)arg2 ;
@end
