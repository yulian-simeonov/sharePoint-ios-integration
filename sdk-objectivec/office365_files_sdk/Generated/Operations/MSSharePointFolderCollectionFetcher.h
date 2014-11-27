/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 *
 * Warning: This code was generated automatically. Edits will be overwritten.
 * To make changes to this code, please make changes to the generation framework itself:
 * https://github.com/MSOpenTech/odata-codegen
 *******************************************************************************/

#import <office365_odata_base/office365_odata_base.h>
#import "MSSharePointFolder.h"
#import "MSSharePointFolderFetcher.h"

/**
* The header for type MSSharePointFolderCollectionFetcher.
*/

@protocol MSSharePointFolderCollectionFetcher

@optional
-(NSURLSessionDataTask*)read:(void (^)(NSArray<MSSharePointFolder> *folders, NSError *error))callback;

-(id<MSSharePointFolderCollectionFetcher>)select : (NSString*) params;
-(id<MSSharePointFolderCollectionFetcher>)filter : (NSString*) params;
-(id<MSSharePointFolderCollectionFetcher>)top : (int) value;
-(id<MSSharePointFolderCollectionFetcher>)skip : (int) value;
-(id<MSSharePointFolderCollectionFetcher>)expand : (NSString*) value;
-(id<MSSharePointFolderCollectionFetcher>)orderBy : (NSString*) params;

@end

@interface MSSharePointFolderCollectionFetcher : MSODataCollectionFetcher<MSSharePointFolderCollectionFetcher>

-(id)initWithUrl:(NSString *)urlComponent parent:(id<MSODataReadable>)parent;
-(MSSharePointFolderFetcher*)getById:(NSString *)Id;
-(NSURLSessionDataTask*)addFolder:(MSSharePointFolder* )entity withCallback:(void (^)(MSSharePointFolder *folder, NSError *e))callback;

@end