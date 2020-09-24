/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKCSSMediaQueryList;

@interface IKCSSMediaQuery : NSObject {

	BOOL _evaluated;
	BOOL _evaluationResult;
	IKCSSMediaQueryList* _queryList;

}

@property (nonatomic,readonly) IKCSSMediaQueryList * queryList;              //@synthesize queryList=_queryList - In the implementation block
@property (readonly) BOOL evaluated;                                         //@synthesize evaluated=_evaluated - In the implementation block
@property (readonly) BOOL evaluationResult;                                  //@synthesize evaluationResult=_evaluationResult - In the implementation block
+(id)buildMediaQueryList:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3 ;
+(id)buildMediaQuery:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3 ;
+(id)buildMediaQueryExpression:(id)arg1 ;
+(id)mediaQueryFromTokenList:(id)arg1 ;
-(BOOL)evaluate;
-(id)description;
-(IKCSSMediaQueryList *)queryList;
-(id)initWithQueryList:(id)arg1 ;
-(id)queryExpression;
-(void)setNeedsReEvaluation;
-(BOOL)evaluated;
-(BOOL)evaluationResult;
@end
