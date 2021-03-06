/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface IPAEditOperation : NSObject <NSObject, NSCopying> {

	NSUUID* _UUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presetifyAdjustment:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)UUID;
-(NSString *)debugDescription;
-(id)settingsDictionary;
-(id)init;
-(id)autoIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUUID:(id)arg1 ;
-(NSString *)description;
-(id)archivalRepresentation;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
@end

