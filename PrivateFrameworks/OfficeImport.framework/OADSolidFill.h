/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADColor;

@interface OADSolidFill : OADFill {

	OADColor* mColor;
	BOOL mIsColorOverridden;

}
+(id)defaultProperties;
+(id)blackFill;
+(id)whiteFill;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isColorOverridden;
-(void)setStyleColor:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)usesPlaceholderColor;
@end

