/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _sparseAware;
	NSNumber* _shouldFetchAssetContent;
	NSNumber* _shouldFetchAssetContentInMemory;
	NSNumber* _useMMCSEncryptionV2;

}

@property (nonatomic,copy) NSNumber * sparseAware;                                  //@synthesize sparseAware=_sparseAware - In the implementation block
@property (nonatomic,copy) NSNumber * shouldFetchAssetContent;                      //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,copy) NSNumber * shouldFetchAssetContentInMemory;              //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,copy) NSNumber * useMMCSEncryptionV2;                          //@synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2 - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSparseAware:(NSNumber *)arg1 ;
-(NSNumber *)useMMCSEncryptionV2;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CKPropertiesDescription;
-(void)setShouldFetchAssetContentInMemory:(NSNumber *)arg1 ;
-(NSNumber *)shouldFetchAssetContentInMemory;
-(void)setUseMMCSEncryptionV2:(NSNumber *)arg1 ;
-(void)setShouldFetchAssetContent:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)shouldFetchAssetContent;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)sparseAware;
@end
