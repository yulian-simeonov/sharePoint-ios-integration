/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSGraphEventMessageFetcher;
@class MSGraphEventMessageCollectionFetcher;

#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphEventMessageCollectionFetcher.
*/

@protocol MSGraphEventMessageCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSGraphEventMessage> *eventMessages, MSOrcError *error))callback;

- (MSGraphEventMessageCollectionFetcher *)select:(NSString *)params;
- (MSGraphEventMessageCollectionFetcher *)filter:(NSString *)params;
- (MSGraphEventMessageCollectionFetcher *)search:(NSString *)params;
- (MSGraphEventMessageCollectionFetcher *)top:(int)value;
- (MSGraphEventMessageCollectionFetcher *)skip:(int)value;
- (MSGraphEventMessageCollectionFetcher *)expand:(NSString *)value;
- (MSGraphEventMessageCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphEventMessageCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphEventMessageCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSGraphEventMessageFetcher *)getById:(NSString *)Id;
- (void)add:(MSGraphEventMessage *)entity callback:(void (^)(MSGraphEventMessage *eventMessage, MSOrcError *error))callback;

@end

@interface MSGraphEventMessageCollectionFetcher : MSOrcCollectionFetcher<MSGraphEventMessageCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end