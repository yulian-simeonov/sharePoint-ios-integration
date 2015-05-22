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

@class MSGraphEventFetcher;
@class MSGraphEventMessageOperations;
@class MSGraphEventMessageFetcher;

#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphEventMessageFetcher.
*/

@protocol MSGraphEventMessageFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSGraphEventMessage *eventMessage, MSOrcError *error))callback;
- (MSGraphEventMessageFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphEventMessageFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphEventMessageFetcher *)select:(NSString *)params;
- (MSGraphEventMessageFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphEventMessageOperations *operations;

@end

@interface MSGraphEventMessageFetcher : MSOrcEntityFetcher<MSGraphEventMessageFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSGraphEventMessage *)eventMessage callback:(void(^)(MSGraphEventMessage *eventMessage, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;


@property (retain, nonatomic, readonly, getter=event) MSGraphEventFetcher *event;

@end