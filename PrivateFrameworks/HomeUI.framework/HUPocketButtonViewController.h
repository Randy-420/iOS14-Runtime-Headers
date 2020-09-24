/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface HUPocketButtonViewController : UIViewController {

	NSArray* _descriptors;

}

@property (nonatomic,copy,readonly) NSArray * descriptors;              //@synthesize descriptors=_descriptors - In the implementation block
+(CGSize)calculatePreferredContentSizeForDescriptors:(id)arg1 ;
-(NSArray *)descriptors;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithButtonDescriptors:(id)arg1 ;
-(void)_buttonHit:(id)arg1 ;
@end
