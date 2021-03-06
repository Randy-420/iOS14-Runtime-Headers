/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CKPinnedConversationActivityItem <NSObject>
@property (nonatomic,readonly) NSString * activityItemIdentifier; 
@property (nonatomic,readonly) BOOL activityItemAppearsWithAnimation; 
@property (nonatomic,readonly) BOOL activityItemDisappearsWithAnimation; 
@property (nonatomic,readonly) double activityItemContentScale; 
@property (nonatomic,readonly) NSString * attachedContactItemIdentifier; 
@required
-(id)activityItemView;
-(NSString *)activityItemIdentifier;
-(double)activityItemContentScale;
-(BOOL)activityItemAppearsWithAnimation;
-(BOOL)activityItemDisappearsWithAnimation;
-(NSString *)attachedContactItemIdentifier;

@end

