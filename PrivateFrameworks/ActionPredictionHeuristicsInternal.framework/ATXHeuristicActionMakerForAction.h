/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionPredictionHeuristicsInternal/ATXHeuristicActionMaker.h>

@class ATXAction;

@interface ATXHeuristicActionMakerForAction : ATXHeuristicActionMaker {

	ATXAction* _action;

}
+(BOOL)supportsSecureCoding;
-(id)initWithAction:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_makeAction;
-(id)actionTypeName;
@end
