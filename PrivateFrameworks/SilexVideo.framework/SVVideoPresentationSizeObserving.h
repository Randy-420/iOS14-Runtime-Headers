/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoPresentationSizeObserving <NSObject>
@property (nonatomic,readonly) CGSize presentationSize; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@required
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;
-(CGSize)presentationSize;

@end

