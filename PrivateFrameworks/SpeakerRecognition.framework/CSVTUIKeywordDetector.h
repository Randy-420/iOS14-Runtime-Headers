/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSRTriggerPhraseDetectorNDAPI, CSAudioCircularBuffer;

@interface CSVTUIKeywordDetector : NSObject {

	SSRTriggerPhraseDetectorNDAPI* _keywordAnalyzer;
	float _lastKeywordScore;
	float _keywordThreshold;
	CSAudioCircularBuffer* _audioBuffer;
	unsigned long long _extraSamplesAtStart;

}
-(id)initWithAsset:(id)arg1 ;
-(id)analyze:(id)arg1 ;
-(void)reset;
-(unsigned long long)_sampleLengthFrom:(unsigned)arg1 To:(unsigned)arg2 ;
-(id)triggeredUtterance:(id)arg1 ;
@end
