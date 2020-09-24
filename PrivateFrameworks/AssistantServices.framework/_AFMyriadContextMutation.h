/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMyriadContextMutating.h>

@class AFMyriadContext, AFMyriadPerceptualAudioHash, NSString;

@interface _AFMyriadContextMutation : NSObject <AFMyriadContextMutating> {

	AFMyriadContext* _baseModel;
	unsigned long long _timestamp;
	AFMyriadPerceptualAudioHash* _perceptualAudioHash;
	struct {
		unsigned isDirty : 1;
		unsigned hasTimestamp : 1;
		unsigned hasPerceptualAudioHash : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBaseModel:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setPerceptualAudioHash:(id)arg1 ;
-(id)init;
-(id)generate;
@end
