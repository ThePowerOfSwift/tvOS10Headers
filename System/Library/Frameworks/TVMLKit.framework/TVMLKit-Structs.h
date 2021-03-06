/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct TVCellMetrics {
	CGSize cellSize;
	UIEdgeInsets cellPadding;
	UIEdgeInsets cellInset;
	UIEdgeInsets cellInsetAlt;
	UIEdgeInsets cellMargin;
} TVCellMetrics;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGImage* CGImageRef;

typedef struct CGPath* CGPathRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFString* CFStringRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGContext* CGContextRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct TVRowMetrics {
	long long rowType;
	double rowHeight;
	CGSize rowPadding;
	CGSize rowInset;
	CGSize rowInsetAlt;
	CGSize rowMargin;
} TVRowMetrics;

typedef struct TVCornerRadii {
	double topLeft;
	double topRight;
	double bottomLeft;
	double bottomRight;
} TVCornerRadii;

typedef struct __SecTask* SecTaskRef;

