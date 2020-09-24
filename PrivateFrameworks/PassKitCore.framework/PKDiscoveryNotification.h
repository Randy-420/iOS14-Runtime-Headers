/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDiscoveryObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSDate, NSURL;

@interface PKDiscoveryNotification : PKDiscoveryObject <NSSecureCoding> {

	BOOL _delivered;
	long long _actionType;
	NSDictionary* _actionInfo;
	NSString* _titleKey;
	NSString* _messageKey;
	NSString* _actionTitleKey;
	NSString* _localizedTitle;
	NSString* _localizedMessage;
	NSString* _localizedActionTitle;
	NSDate* _scheduledDeliveryDate;

}

@property (assign,nonatomic) long long actionType;                                   //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSDictionary * actionInfo;                              //@synthesize actionInfo=_actionInfo - In the implementation block
@property (nonatomic,copy) NSString * titleKey;                                      //@synthesize titleKey=_titleKey - In the implementation block
@property (nonatomic,copy) NSString * messageKey;                                    //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy) NSString * actionTitleKey;                                //@synthesize actionTitleKey=_actionTitleKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                       //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedMessage;                     //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedActionTitle;                 //@synthesize localizedActionTitle=_localizedActionTitle - In the implementation block
@property (nonatomic,readonly) long long passQualifier; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * discoveryCardIdentifier; 
@property (nonatomic,retain) NSDate * scheduledDeliveryDate;                         //@synthesize scheduledDeliveryDate=_scheduledDeliveryDate - In the implementation block
@property (assign,getter=isDelivered,nonatomic) BOOL delivered;                      //@synthesize delivered=_delivered - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)actionType;
-(NSString *)messageKey;
-(NSString *)localizedTitle;
-(NSString *)actionTitleKey;
-(void)setScheduledDeliveryDate:(NSDate *)arg1 ;
-(NSString *)localizedActionTitle;
-(long long)passQualifier;
-(NSString *)discoveryCardIdentifier;
-(void)localizeWithBundle:(id)arg1 ;
-(void)updateWithNotification:(id)arg1 ;
-(void)scheduleDeliveryForCurrentDate:(id)arg1 ;
-(void)setActionInfo:(NSDictionary *)arg1 ;
-(void)updateForRuleResult:(BOOL)arg1 ;
-(BOOL)isEqualForDisplayToNotification:(id)arg1 ;
-(void)setTitleKey:(NSString *)arg1 ;
-(void)setMessageKey:(NSString *)arg1 ;
-(void)setActionTitleKey:(NSString *)arg1 ;
-(void)setDelivered:(BOOL)arg1 ;
-(NSDate *)scheduledDeliveryDate;
-(BOOL)isDelivered;
-(void)setActionType:(long long)arg1 ;
-(NSString *)titleKey;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedMessage;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSDictionary *)actionInfo;
-(id)description;
@end
