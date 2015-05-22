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
					  		
#import <core/core.h>
#import "MSGraphModels.h"
#import "MSGraphOutlookItemOperations.h"

/**
* The header for type MSGraphEventOperations.
*/

@interface MSGraphEventOperations : MSGraphOutlookItemOperations

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)acceptWithComment:(NSString *)comment callback:(void (^)(int returnValue, MSOrcError *error))callback;
- (void)acceptRawWithComment:(NSString *) comment callback:(void(^)(NSString *returnValue, MSOrcError *error))callback;
- (void)declineWithComment:(NSString *)comment callback:(void (^)(int returnValue, MSOrcError *error))callback;
- (void)declineRawWithComment:(NSString *) comment callback:(void(^)(NSString *returnValue, MSOrcError *error))callback;
- (void)tentativelyAcceptWithComment:(NSString *)comment callback:(void (^)(int returnValue, MSOrcError *error))callback;
- (void)tentativelyAcceptRawWithComment:(NSString *) comment callback:(void(^)(NSString *returnValue, MSOrcError *error))callback;

@end