/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AXAppRepresentation : NSObject <NSSecureCoding> {

	int _pid;
	NSString* _bundleIdentifier;
	long long _layoutRole;

}

@property (assign,nonatomic) int pid;                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) long long layoutRole;                        //@synthesize layoutRole=_layoutRole - In the implementation block
@property (nonatomic,readonly) BOOL isLayoutPrimary; 
@property (nonatomic,readonly) BOOL isLayoutFullscreenModal; 
+(BOOL)supportsSecureCoding;
+(id)appWithPID:(int)arg1 bundleID:(id)arg2 ;
-(void)setLayoutRole:(long long)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setPid:(int)arg1 ;
-(id)init;
-(long long)layoutRole;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)encodeWithCoder:(id)arg1 ;
-(int)pid;
-(id)description;
-(BOOL)isLayoutPrimary;
-(BOOL)isLayoutFullscreenModal;
@end
