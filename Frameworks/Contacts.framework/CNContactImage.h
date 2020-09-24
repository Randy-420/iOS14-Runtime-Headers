/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@class NSString, NSData, NSDate;

@interface CNContactImage : NSObject {

	NSString* _identifier;
	NSData* _imageData;
	NSDate* _lastUsedDate;
	long long _source;
	NSString* _sourceIdentifier;
	NSString* _variant;
	NSString* _displayString;
	CGRect _cropRect;

}

@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                     //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) NSDate * lastUsedDate;                  //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                        //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) long long source;                         //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * sourceIdentifier;              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * variant;                       //@synthesize variant=_variant - In the implementation block
@property (nonatomic,retain) NSString * displayString;                 //@synthesize displayString=_displayString - In the implementation block
-(NSData *)imageData;
-(NSString *)identifier;
-(CGRect)cropRect;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)variant;
-(NSString *)sourceIdentifier;
-(void)setVariant:(NSString *)arg1 ;
-(void)setSource:(long long)arg1 ;
-(NSDate *)lastUsedDate;
-(NSString *)displayString;
-(id)initWithIdentifier:(id)arg1 imageData:(id)arg2 cropRect:(CGRect)arg3 lastUsedDate:(id)arg4 ;
-(long long)source;
-(id)copyWithNewImageData:(id)arg1 ;
-(id)initWithImageData:(id)arg1 cropRect:(CGRect)arg2 lastUsedDate:(id)arg3 ;
@end
