/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIKeyEventMap.h>

@interface TIKeyEventMap_zh : TIKeyEventMap
+(id)punctuationMap_zh_Hans;
+(id)punctuationMap_zh_Hant;
+(id)sharedInstance;
+(BOOL)supportsSecureCoding;
-(id)punctuationMap;
-(BOOL)isURLOrEmailKeyboardInKeyboardState:(id)arg1 ;
-(id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4 ;
@end

