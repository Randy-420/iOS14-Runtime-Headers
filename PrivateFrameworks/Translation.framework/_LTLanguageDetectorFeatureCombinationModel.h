/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLModel, NSString, NSMutableArray, NSNumber;

@interface _LTLanguageDetectorFeatureCombinationModel : NSObject {

	MLModel* _mlModel;
	NSString* _modelInput;
	NSString* _modelOutput;
	NSMutableArray* _features;
	NSNumber* _missingLanguageDetectorDefault;

}
-(id)getModelFeatures:(id)arg1 canonicalPair:(id)arg2 sourceSpeechResult:(id)arg3 targetSpeechResult:(id)arg4 ;
-(id)estimateLanguage:(id)arg1 languageDetectionResult:(id)arg2 finalSpeechResults:(id)arg3 ;
-(id)initWithConfig:(id)arg1 ;
@end
