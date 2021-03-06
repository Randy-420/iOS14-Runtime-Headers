/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKMessageTypeSearchController.h>

@interface CKLinkSearchController : CKMessageTypeSearchController
+(id)sectionIdentifier;
+(id)sectionTitle;
+(Class)cellClass;
+(id)reuseIdentifier;
+(id)indexingString;
-(id)filterQueries;
-(double)interGroupSpacing;
-(id)queryAttributesForText:(id)arg1 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg1 ;
-(id)queryResultsForItems:(id)arg1 ;
-(void)postProcessAndUpdateResults:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(Class)_richLinkDatasourceClass;
-(id)_additionalMenuElementsForResult:(id)arg1 ;
-(id)_pasteboardItemsForResult:(id)arg1 ;
-(id)_activityItemProviderForResult:(id)arg1 ;
-(void)deleteAttachmentForResult:(id)arg1 ;
-(BOOL)shouldStartMenuInteractionForResult:(id)arg1 ;
-(id)previewViewControllerForResult:(id)arg1 ;
-(BOOL)handleSelectionForResult:(id)arg1 ;
-(id)fetchAttributes;
@end

