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
#import "MSDirectoryAppRoleAssignmentOperations.h"
#import "MSDirectoryAppRoleAssignment.h"


/**
* The header for type MSDirectoryAppRoleAssignmentFetcher.
*/

@protocol MSDirectoryAppRoleAssignmentFetcher

@optional
-(NSURLSessionDataTask *)read:(void (^)(MSDirectoryAppRoleAssignment* appRoleAssignment, NSError *error))callback;
-(NSURLSessionDataTask*) updateAppRoleAssignment:(id)entity withCallback:(void (^)(MSDirectoryAppRoleAssignment*, NSError * error))callback;
-(NSURLSessionDataTask*) deleteAppRoleAssignment:(void (^)(int status, NSError * error))callback;

@end

@interface MSDirectoryAppRoleAssignmentFetcher : MSODataEntityFetcher<MSDirectoryAppRoleAssignmentFetcher>

-(MSDirectoryAppRoleAssignmentOperations*) getOperations;

	
@end