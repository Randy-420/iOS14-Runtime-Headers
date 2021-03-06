/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUINavigationStackEnsureConsistencyRequest : NSObject <NSCopying> {

	BOOL _operationDidComplete;
	long long _navigationControllerOperation;

}

@property (nonatomic,readonly) long long navigationControllerOperation;              //@synthesize navigationControllerOperation=_navigationControllerOperation - In the implementation block
@property (nonatomic,readonly) BOOL operationDidComplete;                            //@synthesize operationDidComplete=_operationDidComplete - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithNavigationControllerOperation:(long long)arg1 operationDidComplete:(BOOL)arg2 ;
-(long long)navigationControllerOperation;
-(BOOL)operationDidComplete;
@end

