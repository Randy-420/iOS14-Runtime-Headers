/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject {

	NSSet* _stringProperties;

}

@property (nonatomic,retain) NSSet * stringProperties;                   //@synthesize stringProperties=_stringProperties - In the implementation block
@property (nonatomic,readonly) BOOL supportsPropertySearch; 
+(id)searchSetWithProperties:(id)arg1 ;
-(BOOL)supportsPropertySearch;
-(BOOL)supportsWellKnownType:(int)arg1 ;
-(id)initWithStringProperties:(id)arg1 ;
-(NSSet *)stringProperties;
-(BOOL)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setStringProperties:(NSSet *)arg1 ;
-(id)initWithSearchProperties:(id)arg1 ;
-(BOOL)isEqualToPropertySet:(id)arg1 ;
@end

