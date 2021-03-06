/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol IAMEventProtocol <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSDictionary * payload; 
@optional
-(NSDictionary *)payload;
-(id)value;
-(NSString *)source;

@required
-(long long)type;
-(BOOL)matchesWithKey:(id)arg1;
-(NSString *)name;

@end

