/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNJunkIdentifier : VNDetector {

	shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>* mJunkDescriptorImpl;
	shared_ptr<vision::mod::ImageClassifierAbstract>* mJunkClassifierImpl;

}
+(BOOL)shouldDumpDebugIntermediates;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
@end
