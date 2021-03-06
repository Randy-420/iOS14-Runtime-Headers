/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCObject.h>

@class NSMutableArray, NSMutableDictionary, NSDictionary, NSArray;

@interface VCSessionBandwidthAllocationTable : VCObject {

	unsigned char _type;
	NSMutableArray* _sortedAudioEntries;
	NSMutableArray* _sortedVideoEntries;
	NSMutableDictionary* _videoStreamIdToRepairStreamIdMap;
	NSMutableDictionary* _audioTable;
	NSMutableDictionary* _videoTable;
	NSMutableDictionary* _audioOnlyBitrateToStreamIDsTable;
	NSMutableDictionary* _audioVideoBitrateToStreamIDsTable;
	NSMutableDictionary* _videoOnlyBitrateToStreamIDsTable;
	NSMutableDictionary* _streamIDToEntryTable;

}

@property (nonatomic,readonly) NSDictionary * audioOnlyBitrateToStreamIDsTable;               //@synthesize audioOnlyBitrateToStreamIDsTable=_audioOnlyBitrateToStreamIDsTable - In the implementation block
@property (nonatomic,readonly) NSDictionary * audioVideoBitrateToStreamIDsTable;              //@synthesize audioVideoBitrateToStreamIDsTable=_audioVideoBitrateToStreamIDsTable - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoOnlyBitrateToStreamIDsTable;               //@synthesize videoOnlyBitrateToStreamIDsTable=_videoOnlyBitrateToStreamIDsTable - In the implementation block
@property (nonatomic,readonly) NSArray * audioEntries; 
@property (nonatomic,readonly) NSArray * videoEntries; 
@property (nonatomic,readonly) NSDictionary * videoStreamIdToRepairStreamIdMap; 
-(void)dealloc;
-(void)generate;
-(id)initWithType:(unsigned char)arg1 ;
-(void)addBandwidthAllocationTableEntry:(id)arg1 ;
-(id)entryForStreamID:(id)arg1 ;
-(NSArray *)videoEntries;
-(NSDictionary *)videoStreamIdToRepairStreamIdMap;
-(id)newAggregatedBandwidthTableWithRedundancy:(BOOL)arg1 videoEnabled:(BOOL)arg2 redundancyEnabledFor720Stream:(BOOL)arg3 ;
-(NSArray *)audioEntries;
-(void)_generateSortedAudioEntries;
-(void)_generateSortedVideoEntries;
-(void)_generateVideoStreamIDToRepairStreamIDMap;
-(void)generateAudioOnlyBitrateToStreamIDsTable;
-(void)generateVideoOnlyBitrateToStreamIDsTable;
-(void)generateAudioVideoBitrateToStreamIDsTable;
-(id)newBitrateToStreamIDsTableWithAudioTable:(id)arg1 videoTable:(id)arg2 ;
-(id)newAggregateTableWithAudioTable:(id)arg1 videoTable:(id)arg2 isVideoEnabled:(BOOL)arg3 isRedundancyEnabled:(BOOL)arg4 redundancyEnabledFor720Stream:(BOOL)arg5 ;
-(BOOL)getAudioActiveFromAudioTable:(id)arg1 ;
-(BOOL)shouldAddBackupEntry:(id)arg1 videoEnabled:(BOOL)arg2 audioEnabled:(BOOL)arg3 availableStreamArray:(id)arg4 ;
-(void)checkAndRemoveBackupEntries:(id)arg1 redundancyEnabled:(BOOL)arg2 currentNetworkBitrate:(unsigned*)arg3 ;
-(void)appendEntry:(id)arg1 entries:(id)arg2 currentNetworkBitrate:(unsigned*)arg3 isRedundancyEnabled:(BOOL)arg4 isRedundancyEnabledFor720Stream:(BOOL)arg5 ;
-(void)printTable:(id)arg1 ;
-(unsigned)getTotalBitrateForEntries:(id)arg1 repairStreamEnabled:(BOOL)arg2 ;
-(NSDictionary *)audioVideoBitrateToStreamIDsTable;
-(NSDictionary *)audioOnlyBitrateToStreamIDsTable;
-(NSDictionary *)videoOnlyBitrateToStreamIDsTable;
@end

