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

#import "MSGraphFetchers.h"

@implementation MSGraphDirectoryObjectFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSGraphDirectoryObject class]]) {

		_operations = [[MSGraphDirectoryObjectOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (void)update:(id)entity callback:(void (^)(MSGraphDirectoryObject *directoryObject, MSOrcError *e))callback {

	return [super update:entity callback:callback];
}

- (void)delete:(void (^)(int status, MSOrcError *e))callback {

	return [super deleteWithCallback:callback];
}

- (MSGraphApplicationFetcher *)asApplication {

	return [[MSGraphApplicationFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphApplication class]];
}

- (MSGraphExtensionPropertyFetcher *)asExtensionProperty {

	return [[MSGraphExtensionPropertyFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphExtensionProperty class]];
}

- (MSGraphUserFetcher *)asUser {

	return [[MSGraphUserFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphUser class]];
}

- (MSGraphAppRoleAssignmentFetcher *)asAppRoleAssignment {

	return [[MSGraphAppRoleAssignmentFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphAppRoleAssignment class]];
}

- (MSGraphContactFetcher *)asContact {

	return [[MSGraphContactFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphContact class]];
}

- (MSGraphDeviceFetcher *)asDevice {

	return [[MSGraphDeviceFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphDevice class]];
}

- (MSGraphDeviceConfigurationFetcher *)asDeviceConfiguration {

	return [[MSGraphDeviceConfigurationFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphDeviceConfiguration class]];
}

- (MSGraphDirectoryLinkChangeFetcher *)asDirectoryLinkChange {

	return [[MSGraphDirectoryLinkChangeFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphDirectoryLinkChange class]];
}

- (MSGraphDirectoryRoleFetcher *)asDirectoryRole {

	return [[MSGraphDirectoryRoleFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphDirectoryRole class]];
}

- (MSGraphDirectoryRoleTemplateFetcher *)asDirectoryRoleTemplate {

	return [[MSGraphDirectoryRoleTemplateFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphDirectoryRoleTemplate class]];
}

- (MSGraphGroupFetcher *)asGroup {

	return [[MSGraphGroupFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphGroup class]];
}

- (MSGraphServicePrincipalFetcher *)asServicePrincipal {

	return [[MSGraphServicePrincipalFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphServicePrincipal class]];
}

- (MSGraphTenantDetailFetcher *)asTenantDetail {

	return [[MSGraphTenantDetailFetcher alloc] initWithUrl:@"" parent:self asClass:[MSGraphTenantDetail class]];
}

@end