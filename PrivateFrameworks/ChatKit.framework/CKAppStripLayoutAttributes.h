/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface CKAppStripLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _showsBorder;
	long long _appStripSize;

}

@property (assign,nonatomic) long long appStripSize;              //@synthesize appStripSize=_appStripSize - In the implementation block
@property (assign,nonatomic) BOOL showsBorder;                    //@synthesize showsBorder=_showsBorder - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)showsBorder;
-(long long)appStripSize;
-(void)setShowsBorder:(BOOL)arg1 ;
-(void)setAppStripSize:(long long)arg1 ;
@end
