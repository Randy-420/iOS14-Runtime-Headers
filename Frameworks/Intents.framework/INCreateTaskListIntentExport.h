/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString, NSArray;


@protocol INCreateTaskListIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * title; 
@property (nonatomic,copy) NSArray * taskTitles; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@required
-(INSpeakableString *)groupName;
-(void)setTaskTitles:(id)arg1;
-(INSpeakableString *)title;
-(void)setGroupName:(id)arg1;
-(id)init;
-(NSArray *)taskTitles;
-(void)setTitle:(id)arg1;

@end
