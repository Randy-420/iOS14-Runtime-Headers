/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MABaseGraph.h>

@class MABaseGraph;

@interface MAGraph : MABaseGraph {

	MABaseGraph* _concreteGraph;

}
+(BOOL)hasMarker:(id)arg1 ;
+(id)persistentStoreURLWithPath:(id)arg1 andName:(id)arg2 ;
+(BOOL)copyPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)persistentStoreFileExtension;
+(BOOL)migratePersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)destroyPersistentStoreAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)setMarkerAtURL:(id)arg1 ;
+(void)deleteMarker:(id)arg1 ;
+(Class)concreteGraphClass;
-(id)nodesMatchingFilter:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)identifier;
-(void)removeEdges:(id)arg1 ;
-(void)closePersistentStore;
-(void)setMarker;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(id)edgesLabels;
-(unsigned long long)version;
-(unsigned long long)countOfNodesRelatedToNodesWithIdentifiers:(id)arg1 relation:(id)arg2 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forNodeWithIdentifier:(unsigned)arg3 ;
-(unsigned long long)nodesCount;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(BOOL)compareWithPersistedState;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)nodesForDomain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)anyNodeMatchingFilter:(id)arg1 ;
-(void)removeNodes:(id)arg1 ;
-(unsigned long long)numberOfNodesMatchingFilter:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(unsigned long long)edgesCount;
-(unsigned long long)numberOfEdgesMatchingFilter:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)removeModelPropertiesForEdgeWithIdentifier:(unsigned)arg1 ;
-(id)allEdges;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(id)nodesForDomains:(id)arg1 ;
-(void)enterBatch;
-(id)initWithSpecification:(id)arg1 dataURL:(id)arg2 ;
-(void)removeNode:(id)arg1 ;
-(unsigned long long)edgesCountForDomain:(unsigned short)arg1 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 ;
-(id)initWithSpecification:(id)arg1 ;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(id)initWithSpecification:(id)arg1 persistenceStoreURL:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)addUniquelyIdentifiedNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4 createdNodes:(out id*)arg5 createdEdges:(out id*)arg6 ;
-(void)readUsingBlock:(/*^block*/id)arg1 ;
-(void)persistWeight:(float)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(void)removeEdge:(id)arg1 ;
-(void)writeUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateNodesRelatedToNodeWithIdentifier:(unsigned)arg1 withRelation:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)savePersistentStoreWithCompletion:(/*^block*/id)arg1 ;
-(id)edgesDomains;
-(void)enumerateEdgesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)migratePersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(id)edgesForLabel:(id)arg1 ;
-(BOOL)hasMarker;
-(id)databaseURL;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)nodesForDomain:(unsigned short)arg1 ;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)nodesCountForDomain:(unsigned short)arg1 ;
-(BOOL)hasPendingRead;
-(id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(id)edgesForDomains:(id)arg1 ;
-(void)enumerateNodesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)allNodes;
-(void)invalidateMemoryCaches;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)nodesLabels;
-(id)nodesForLabel:(id)arg1 ;
-(void)removeModelPropertyForKey:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(void)enumerateNodesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)leaveBatch;
-(void)removeModelPropertyForKey:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(id)nodesForIdentifiers:(id)arg1 ;
-(BOOL)hasPendingWrite;
-(BOOL)copyPersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(void)persistWeight:(float)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(BOOL)savePersistentStore;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 ;
-(void)enumerateNodesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)nodeIdentifiersRelatedToSourceNodeIdentifiers:(id)arg1 relation:(id)arg2 ;
-(void)persistModelProperties:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forEdgeWithIdentifier:(unsigned)arg3 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)persistModelProperties:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(void)removeModelPropertiesForNodeWithIdentifier:(unsigned)arg1 ;
-(void)deleteMarker;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(id)description;
-(void)enumerateEdgesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)edgesForIdentifiers:(id)arg1 ;
-(id)edgesMatchingFilter:(id)arg1 ;
-(id)nodesDomains;
-(void)enumerateEdgesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
@end
