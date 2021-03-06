/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TCOfficeFontInfo : NSObject {

	BOOL _isBold;
	BOOL _isItalic;
	NSString* _fullName;

}

@property (nonatomic,readonly) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) BOOL isBold;                      //@synthesize isBold=_isBold - In the implementation block
@property (nonatomic,readonly) BOOL isItalic;                    //@synthesize isItalic=_isItalic - In the implementation block
+(id)officeFontInfoWithFullName:(id)arg1 isBold:(BOOL)arg2 isItalic:(BOOL)arg3 ;
-(BOOL)isBold;
-(NSString *)fullName;
-(id)description;
-(BOOL)isItalic;
-(id)initWithFullName:(id)arg1 isBold:(BOOL)arg2 isItalic:(BOOL)arg3 ;
-(id)officeName;
@end

