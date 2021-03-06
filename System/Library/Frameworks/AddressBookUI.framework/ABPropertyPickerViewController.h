/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>
#import <libobjc.A.dylib/ABCardPropertyPickerDelegate.h>

@class ABUIPerson, NSArray;

@interface ABPropertyPickerViewController : ABPickerViewController <ABCardPropertyPickerDelegate> {

	void* _addressBook;
	ABUIPerson* _person;
	CFArrayRef _properties;
	NSArray* _policies;

}

@property (assign,nonatomic) void* addressBook; 
@property (nonatomic,retain) ABUIPerson * person;                //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) CFArrayRef properties; 
@property (nonatomic,retain) NSArray * policies;                 //@synthesize policies=_policies - In the implementation block
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(void)setProperties:(CFArrayRef)arg1 ;
-(CFArrayRef)properties;
-(void)setPerson:(ABUIPerson *)arg1 ;
-(ABUIPerson *)person;
-(void)setAddressBook:(void*)arg1 ;
-(void)propertyPicker:(id)arg1 selectedProperty:(int)arg2 ;
-(void)propertyPicker:(id)arg1 selectedProperty:(int)arg2 withDefaultValue:(id)arg3 ;
-(double)ab_heightToFitForViewInPopoverView;
-(void)setPolicies:(NSArray *)arg1 ;
-(id)propertyPicker;
-(NSArray *)policies;
-(void*)addressBook;
@end

