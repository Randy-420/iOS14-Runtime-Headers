/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRemoteExecutionErrorEvent : WFEvent {

	NSString* _source;
	NSString* _destinationType;
	NSString* _errorDomain;
	NSString* _errorCode;

}

@property (nonatomic,copy) NSString * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,copy) NSString * errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
+(Class)codableEventClass;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)destinationType;
-(NSString *)source;
-(void)setDestinationType:(NSString *)arg1 ;
-(NSString *)errorCode;
@end
